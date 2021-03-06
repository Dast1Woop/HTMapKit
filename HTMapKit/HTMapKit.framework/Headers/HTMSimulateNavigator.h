//
//  HTMSimulateNavigator.h
//  IndoorMapFramework
//
//  Created by LongMa on 2020/5/6.
//  Copyright © 2020 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
@class  HTMapView;

@class HTMRoutePath;
@class HTMRoutePlanNode;
@class HTMRoutePlanInstruction;

@protocol HTMSimulateNavigatorDelegate;

NS_ASSUME_NONNULL_BEGIN

/// 注意：使用时必须强引用此类的对象！
@interface HTMSimulateNavigator : NSObject

/// 是否正在模拟导航，开始后为YES，stopSimulateNavigation 或 模拟到达目的地时为 NO
@property (nonatomic,assign,readonly) BOOL IsSimulating;

@property (nonatomic, weak) id<HTMSimulateNavigatorDelegate> delegateCustom;

/// 初始化对象
/// @param indoorMapV HTMIndoorMapView对象
/// @param routePath HTMRoutePath对象，在路径规划成功回调里可获取
/// @param speed 模拟定位点移动速度，单位m/s。注意：速度即使很快，每一段路至少也会模拟行走一次。
/// @param simLocateImgName 模拟定位点图片名
/// @param imageBounds 模拟定位点图片宽高信息。传入CGRectZero时，底层会把图片缩放到30x30
- (instancetype)initWithHtMapView:(HTMapView *)indoorMapV
                            routePath:(HTMRoutePath *)routePath
                                speed:(float)speed
                     simLocateImgName:(NSString *)simLocateImgName
                          imageBounds:(CGRect)imageBounds;


/// 初始化对象
/// @param indoorMapV HTMIndoorMapView对象
/// @param routePath HTMRoutePath对象，在路径规划成功回调里可获取
/// @param speed 模拟定位点移动速度，单位m/s。注意：速度即使很快，每一段路至少也会模拟行走一次。推荐 10m/s
/// @param simLocateImgName 模拟定位点图片名
/// @param imageBounds 模拟定位点图片宽高信息,传入CGRectZero时，底层会把图片缩放到30x30
+ (instancetype)modelWithHtMapView:(HTMapView *)indoorMapV
                             routePath:(HTMRoutePath *)routePath
                                 speed:(float)speed
                      simLocateImgName:(NSString *)simLocateImgName
                           imageBounds:(CGRect)imageBounds;


/// 开始模拟导航效果。上面属性必须都有值；必须在 主线程 执行！
- (nullable NSError *)startSimulateNavigation;

/// 暂停模拟导航效果（模拟导航点停止移动）；必须在 主线程 执行！
- (void)pauseSimulateNavigation;

/// 继续模拟导航效果（模拟导航点继续从刚刚暂停的地方移动，如果没有暂停过，从起点开始移动）；必须在 主线程 执行！
- (nullable NSError *)resumeSimulateNavigation;

/// 停止模拟导航效果。如果正在模拟导航，模拟定位marker和走过的灰色导航线会被清空；否则 return。必须在 主线程 执行！
- (void)stopSimulateNavigation;

/// 清除已走路线和模拟定位图标
- (void)clearRouteWalkedAndSimuNavLcoateAnno;

@end


@protocol HTMSimulateNavigatorDelegate <NSObject>


/// 模拟导航过程回调
/// @param simNavigator HTMSimulateNavigator对象
/// @param turningPoint 拐点对象
/// @param nextInstruction 下一条路的导航信息对象
- (void)dmSimulateNavigation:(HTMSimulateNavigator *)simNavigator
       didMoveToTurningPoint:(HTMRoutePlanNode *)turningPoint
             nextInstruction:(nullable HTMRoutePlanInstruction *)nextInstruction;


/// 模拟导航结束回调
/// @param simNavigator HTMSimulateNavigator对象
- (void)dmSimulateNavigationDidFinished:(HTMSimulateNavigator *)simNavigator;

@end

NS_ASSUME_NONNULL_END

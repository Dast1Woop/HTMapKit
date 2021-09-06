//
//  RoutePlanNode.h
//  IndoorMapFramework
//
//  Created by Xd Huang on 2019/2/22.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTMGeoCoor.h"
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTMRoutePlanNode : HTMGeoCoor<NSCoding, NSCopying>

/** 名称 */
@property(nonatomic, copy) NSString *name;

/** mapID */
@property(nonatomic, copy) NSString *mapId;

///记录导航点在整个导航文本数组中的下标，用于模拟导航功能; 从 0 开始
@property (nonatomic, assign) NSUInteger pathNumber;

///是否是拐点，用于模拟导航中文本提示回调
@property (nonatomic, assign) BOOL gIsTurningPoint;

/**
 通过经纬度创建路径规划点

 @param lng 经度
 @param lat 纬度
 @return HTMRoutePlanNode 对象
 */
- (instancetype)initWithLngGcj02:(double)lng latGcj02:(double)lat;

/**
  通过经纬度创建路径规划点

 @param lng 经度
 @param lat 纬度
 @return TMRoutePlanNode 对象
 */
+ (instancetype)nodeWithLngGcj02:(double)lng latGcj02:(double)lat;

/**
 通过经纬度等参数创建路径规划点

 @param lng 经度
 @param lat 纬度
 @param floorID 楼层id
 @param name 节点名
 @param mapId 节点所在地图id
 @return TMRoutePlanNode 对象
 */
+ (instancetype)nodeWithLngGcj02:(double)lng
                        latGcj02:(double)lat
                         floorID:(int)floorID
                            name:(NSString *)name
                           mapId:(NSString *)mapId;

- (double)getDistanceWithNode:(HTMRoutePlanNode *)node;

+ (CLLocationCoordinate2D)getMaxLatAndMaxLngWith:(NSArray <HTMRoutePlanNode *> *)arr;

+ (CLLocationCoordinate2D)getMinLatAndMinLngWith:(NSArray <HTMRoutePlanNode *>  *)arr;

@end

NS_ASSUME_NONNULL_END

//
//  HTMBuildingModel.h
//  IndoorMapFramework
//
//  Created by LongMa on 2019/6/14.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@import MAMapKit;

@class HTMFloorModel;
@class HTMBuildingConfig;
@class HTMBarrierGeometry;
NS_ASSUME_NONNULL_BEGIN

@interface HTMBuildingModel : NSObject

/// 建筑id
@property(nonatomic, copy) NSString *buildingID;

/// 默认的建筑名
@property(nonatomic, copy) NSString *name;

///默认显示的楼层id
@property(nonatomic, assign)  int defaultFloorID;

///楼层信息数组
@property(nonatomic, copy) NSArray<HTMFloorModel*> *floorModelsArr;

///用于计算 轮廓所有点 距离屏幕中心点的最小距离，用于排序逻辑
@property (nonatomic, assign) double minDistance2MapviewCenter;

///遮罩坐标信息
@property (nonatomic, strong) HTMBarrierGeometry *barrierGeometry;

/// 地图可视范围内的点集
@property (nonatomic, copy, nullable) NSArray<NSArray<NSNumber *> *> *visibleCoordinates;

///地图的特殊配置信息 2021-07-23 目前有 enablePosition 是否支持定位
@property (nonatomic, strong) HTMBuildingConfig *config;


//MARK: added
///显示的楼层id，切楼层时，需要更新此参数
@property (nonatomic,strong) NSNumber *floorIDShowing;

/// 中心点高德坐标
@property (nonatomic,assign,readonly)  CLLocationCoordinate2D centerCoorGCJ;

/// 获取需要显示的楼层id
- (int)getFloorIDNeedShowing;

/**
 通过建筑id和建筑模型数组，获取建筑id对应的建筑模型。如果buildingID无效，返回nil
 @param buildingID 建筑id
 @param arr 建筑模型数组
 @return 建筑模型
 */
+ (instancetype)getModelWithBuildingID:(NSString *)buildingID
                       inBuildingMsArr:(NSArray<HTMBuildingModel *>*)arr;

/// 根据楼层名获取楼层id。
/// @warning 返回INT_MIN时，表示本建筑中没有此楼层
/// @param floorName 楼层名
- (int)getFloorIDWithFloorName:(NSString *)floorName;

/// 根据楼层id获取楼层名。
/// @warning 返回nil时，表示本建筑中没有此楼层
/// @param floorID 楼层id
- (NSString *)getFloorNameWithFloorID:(int)floorID;


///  本建筑是否包含floorID
/// @param floorID 楼层ID
- (BOOL)isFloorIDAvailable:(int)floorID;
@end

NS_ASSUME_NONNULL_END

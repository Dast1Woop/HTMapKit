//
//  FloorConfig.h
//  IndoorMap
//
//  Created by Xd Huang on 2019/1/14.
//  Copyright © 2019 Xd Huang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTMFloorModel : NSObject<NSCopying, NSCoding>

/** 楼层编号，默认从数字0开始编号 */
@property (nonatomic, assign) int floorID;

/** 楼层名称，楼层名称不可过长 */
@property (nonatomic, copy) NSString *floorName;

@property (nonatomic, assign) NSInteger height;

//MARK: poi搜索相关，建筑信息搜索未返回相关信息
/// 唯一id，建筑信息搜索未返回相关信息
@property(nonatomic, copy) NSString *idCustom;

/// 建筑id，建筑信息搜索未返回相关信息
@property(nonatomic, copy) NSString *buildingID;


+ (instancetype)modelWithFloorName:(NSString *)floorName;

/** 查询floorsArr数组中floor对象对应的layerID */
//+ (NSString *)htmGetFloorLayerId:(HTMFloorConfig *)floor
//                   fromFloorsArr:(NSArray<HTMFloorConfig*> *)floorsArr;
@end

NS_ASSUME_NONNULL_END

//
//  HTMBuildingNearbySearchRqst.h
//  HTMapKit
//
//  Created by LongMa on 2021/7/29.
//

#import <Foundation/Foundation.h>

@class HTMSearchCoorTypeModel;

NS_ASSUME_NONNULL_BEGIN

@interface HTMBuildingNearbyRequest : NSObject

/// 经度
@property (nonatomic,strong) NSNumber *longtitueGcj02;

/// 纬度
@property (nonatomic,strong) NSNumber *latitueGcj02;

///搜索范围
@property (nonatomic,assign) int meter;

/// 输入输出坐标类型(使用 gcj02 坐标系)，210903 add
@property (nonatomic,strong, readonly) HTMSearchCoorTypeModel *ioCoorTypeModel;
@end

NS_ASSUME_NONNULL_END

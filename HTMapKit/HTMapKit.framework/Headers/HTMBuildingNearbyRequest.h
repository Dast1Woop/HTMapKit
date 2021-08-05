//
//  HTMBuildingNearbySearchRqst.h
//  HTMapKit
//
//  Created by LongMa on 2021/7/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTMBuildingNearbyRequest : NSObject

/// WGS84 经度
@property (nonatomic,strong) NSNumber *longtitueWGS84;

/// WGS84 纬度
@property (nonatomic,strong) NSNumber *latitueWGS84;

///搜索范围
@property (nonatomic,assign) int meter;
@end

NS_ASSUME_NONNULL_END

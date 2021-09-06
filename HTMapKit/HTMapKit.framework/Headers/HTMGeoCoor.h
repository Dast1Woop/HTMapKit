//
//  HTMGeoCoor.h
//  IndoorMapFramework
//
//  Created by LongMa on 2019/6/21.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// sdk内部统一使用 gcj02 坐标
@interface HTMGeoCoor : NSObject<NSCopying, NSCoding>

/// 经度
@property (nonatomic, assign) double lngGcj02;

/// 纬度
@property (nonatomic, assign) double latGcj02;

/// 楼层id。已重写get方法，没赋值时，返回@""
@property (nonatomic, copy) NSString *floorId;

/// 墨卡托x坐标
@property (nonatomic, assign) double x;

/// 墨卡托y坐标
@property (nonatomic, assign) double y;

@end

NS_ASSUME_NONNULL_END

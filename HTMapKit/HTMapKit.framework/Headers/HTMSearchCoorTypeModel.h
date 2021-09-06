//
//  HTMSearchCoorTypeModel.h
//  HTMapKit
//
//  Created by LongMa on 2021/8/23.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HTMCoorType) {
    HTMCoorType_gcj02 = 0,//国测局加密坐标（高德）
    HTMCoorType_wgs84 = 1,//gps坐标
    HTMCoorType_bd09 = 2,//百度经纬度坐标
};

/// 枚举转字符串，默认返回 @"gcj02"
/// @param type 坐标类型
NSString * _Nullable HTMSearchCoorTypeStringFor(HTMCoorType type);


NS_ASSUME_NONNULL_BEGIN

@interface HTMSearchCoorTypeModel : NSObject

///输入坐标类型
@property (nonatomic,assign,readonly) HTMCoorType inputCoordsType;

///输出坐标类型
@property (nonatomic,assign,readonly) HTMCoorType outputCoordsType;


/// 返回输入输出都是  HTMCoorType_gcj02  的对象
+ (instancetype)modelWithDefalutSettingOfGCJ02;


@end

NS_ASSUME_NONNULL_END

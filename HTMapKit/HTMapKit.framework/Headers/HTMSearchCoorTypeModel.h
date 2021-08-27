//
//  HTMSearchCoorTypeModel.h
//  HTMapKit
//
//  Created by LongMa on 2021/8/23.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HTMCoorType) {
    HTMCoorType_wgs84 = 0,//默认,gps坐标
    HTMCoorType_gcj02 = 1,//国测局加密坐标（高德）
    HTMCoorType_bd09 = 2,//百度经纬度坐标
};

/// 枚举转字符串，默认返回 @"wgs84"
/// @param type 坐标类型
NSString * _Nullable HTMSearchCoorTypeStringFor(HTMCoorType type);


NS_ASSUME_NONNULL_BEGIN

@interface HTMSearchCoorTypeModel : NSObject

///输入坐标类型
@property (nonatomic,assign) HTMCoorType inputCoordsType;

///输出坐标类型
@property (nonatomic,assign) HTMCoorType outputCoordsType;


/// 返回输入输出都是 HTMCoorType_wgs84 的对象
+ (instancetype)modelWithDefalutSetting;

+ (instancetype)modelWithInputCoordsType:(HTMCoorType)inputType outputCoordsType:(HTMCoorType)outputType;


@end

NS_ASSUME_NONNULL_END

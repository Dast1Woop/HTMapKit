//
//  HTMBuildingConfig.h
//  HTMapKit
//
//  Created by LongMa on 2021/8/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///建筑配置信息
@interface HTMBuildingConfig : NSObject

///是否支持定位
@property (nonatomic, assign) BOOL enablePosition;
@end

NS_ASSUME_NONNULL_END

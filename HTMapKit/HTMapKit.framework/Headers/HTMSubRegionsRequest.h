//
//  HTMSubRegionsRequest.h
//  IndoorMapFramework
//
//  Created by LongMa on 2019/9/9.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HTMSearchCoorTypeModel;


NS_ASSUME_NONNULL_BEGIN

@interface HTMSubRegionsRequest : NSObject<NSCoding, NSCopying>

///区域id，如：市区编码
@property(nonatomic, copy) NSString *idCustom;

/// 输入输出坐标类型(使用 gcj02 坐标系)，210903 add
@property (nonatomic,strong, readonly) HTMSearchCoorTypeModel *ioCoorTypeModel;

- (instancetype)initWithID:(NSString *)idCustom;
+ (instancetype)requestWithID:(NSString *)idCustom;
@end

NS_ASSUME_NONNULL_END

//
//  HTMModelCodingAndCopying.h
//  IndoorMapFramework
//
//  Created by LongMa on 2019/9/9.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>

#define YYModelSynthCoderAndHash \
- (void)encodeWithCoder:(NSCoder *)aCoder { [self yy_modelEncodeWithCoder:aCoder]; } \
- (id)initWithCoder:(NSCoder *)aDecoder { return [self yy_modelInitWithCoder:aDecoder]; } \
- (id)copyWithZone:(NSZone *)zone { return [self yy_modelCopy]; } \
- (NSUInteger)hash { return [self yy_modelHash]; } \
- (BOOL)isEqual:(id)object { return [self yy_modelIsEqual:object]; } \
- (NSString *)description {return [self yy_modelDescription];}

NS_ASSUME_NONNULL_BEGIN

@interface HTMModelCodingAndCopying : NSObject

@end

NS_ASSUME_NONNULL_END

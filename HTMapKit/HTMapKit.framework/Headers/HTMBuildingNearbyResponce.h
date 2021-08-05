//
//  HTMBuildingNearbyResponce.h
//  HTMapKit
//
//  Created by LongMa on 2021/7/29.
//

#import <Foundation/Foundation.h>
@class HTMBuildingModel;
NS_ASSUME_NONNULL_BEGIN

@interface HTMBuildingNearbyResponce : NSObject
@property (nonatomic, copy) NSArray<HTMBuildingModel *> *data;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *message;
@end

NS_ASSUME_NONNULL_END

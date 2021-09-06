//
//  HTMPOISearchRequestByPOIID.h
//  IndoorMapFramework
//
//  Created by LongMa on 2020/5/11.
//  Copyright © 2020 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HTMSearchCoorTypeModel;



NS_ASSUME_NONNULL_BEGIN

@interface HTMPOISearchRequestByPoiID : NSObject

//osm id
@property (nonatomic, assign) long osmID;

/// 输入输出坐标类型(使用 gcj02 坐标系)，210903 add
@property (nonatomic,strong, readonly) HTMSearchCoorTypeModel *ioCoorTypeModel;
@end

NS_ASSUME_NONNULL_END

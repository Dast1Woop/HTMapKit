//
//  HTMBarrierGeometry.h
//  HTMapKit
//
//  Created by LongMa on 2021/8/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///建筑地理信息
@interface HTMBarrierGeometry : NSObject

///@"Polygon"
@property (nonatomic, copy) NSString *type;

///最里层eg:  [113.41152601921,23.17658865295]
@property (nonatomic, copy) NSArray<NSArray<NSArray<NSNumber *> *> *> *coordinates;
@end

NS_ASSUME_NONNULL_END

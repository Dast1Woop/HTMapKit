//
//  HTMGeometry.h
//  HTMapKit
//
//  Created by LongMa on 2021/9/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTMGeometry : NSObject

/// "Polygon" 或 "MultiPolygon"
@property (nonatomic,copy) NSString *type;

/// type 为 "Polygon"         时，对应 3 维数组（1维表示内/外环，首元素代表外环）；
/// type 为 "MultiPolygon" 时， 对应 4 维数组（1纬代表 Polygon）；
@property (nonatomic,copy) NSArray *coordinates;

@end

NS_ASSUME_NONNULL_END

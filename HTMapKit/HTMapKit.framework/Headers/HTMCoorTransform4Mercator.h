//
//  HTMCoorTransfor4Mercator.h
//
//  Copyright © 2018 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

typedef struct{
    
    ///墨卡托x坐标，对应经纬度中的经度
    double x;
    
    ///墨卡托y坐标，对应经纬度中的纬度
    double y;
}HTMapMktCoor;

NS_ASSUME_NONNULL_BEGIN
@interface HTMCoorTransform4Mercator : NSObject

//WGS-84 坐标转换成 墨卡托 坐标
+ (HTMapMktCoor)transformFromWGSToMercator:(CLLocationCoordinate2D)coordinate;

//墨卡托 坐标转换成 WGS-84 坐标
+ (CLLocationCoordinate2D)transformFromMercatorToWGS:(HTMapMktCoor)mercator;
@end

NS_ASSUME_NONNULL_END

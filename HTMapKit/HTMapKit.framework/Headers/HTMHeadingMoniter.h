//
//  HeadingTool.h
//  EnvAccess
//
//  Created by 马玉龙 on 16/3/16.
//  Copyright © 2016年 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol HTMHeadingMoniterDelegate;

@interface HTMHeadingMoniter : NSObject

/** 方向不是隐私，不需要请求授权 */
- (void)startGetHeading;

- (void)stopGetHeading;

/** 磁偏角度 */
@property (nonatomic, assign) CLLocationDirection gMagneticHeading;


/// 真实角度
@property (nonatomic, assign) CLLocationDirection gTrueHeading;

/** 磁偏弧度 */
@property (nonatomic, assign) CLLocationDirection gRadianMagneticHeading;

@property (nonatomic,weak) id<HTMHeadingMoniterDelegate> delegateCustom;
@end


@protocol HTMHeadingMoniterDelegate <NSObject>

- (void)dmMoniter:(HTMHeadingMoniter *)monitor locationManager:(CLLocationManager *)manager
 didUpdateTrueHeading:(CLLocationDirection)newHeading;

@end

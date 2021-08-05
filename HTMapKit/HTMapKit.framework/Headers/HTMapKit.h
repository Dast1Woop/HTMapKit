//
//  HTMapKit.h
//  HTMapKit
//
//  Created by LongMa on 2021/7/16.
//

#import <Foundation/Foundation.h>

//! Project version number for HTMapKit.
FOUNDATION_EXPORT double HTMapKitVersionNumber;

//! Project version string for HTMapKit.
FOUNDATION_EXPORT const unsigned char HTMapKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HTMapKit/PublicHeader.h>

//给内部 swift 文件使用

//给外界使用的，才需要用 #import <HTMapKit/PublicHeader.h>
#import <HTMapKit/TestClass.h>
#import <HTMapKit/HTMBuildingModel.h>
#import <HTMapKit/HTMFloorModel.h>
#import <HTMapKit/HTMModelCodingAndCopying.h>
#import <HTMapKit/HTMSearchAPI.h>
#import <HTMapKit/HTMBuildingNearbyRequest.h>
#import <HTMapKit/HTMBuildingNearbyResponce.h>
#import <HTMapKit/HTMBarrierGeometry.h>
#import <HTMapKit/HTMBuildingConfig.h>
#import <HTMapKit/HTMCoorTransforM4Mercator.h>
#import <HTMapKit/HTMGlobalConfig.h>


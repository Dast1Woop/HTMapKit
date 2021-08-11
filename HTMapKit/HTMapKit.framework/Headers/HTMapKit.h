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
#import <HTMapKit/HTMHeadingMoniter.h>

//#import <HTMapKit/HTMPOISearchRequestByID.h>
//#import <HTMapKit/HTMPOISearchRequestByLocation.h>
//#import <HTMapKit/HTMPOISearchRequestByMultiCombine.h>
//#import <HTMapKit/HTMPOISearchResponse.h>
//
//#import <HTMapKit/HTMPOICategorySearchRequest.h>
//#import <HTMapKit/HTMPOICategorySearchResponse.h>

#import <HTMapKit/HTMRouteSearchRequest.h>
#import <HTMapKit/HTMRouteSearchResponse.h>

#import <HTMapKit/NSString+MYLCategory.h>

#import <HTMapKit/HTMGeoCoor.h>
#import <HTMapKit/HTMCoorTransform4Mercator.h>

#import <HTMapKit/HTMEnumDefines.h>
#import <HTMapKit/HTMRoutePlanInstruction.h>
#import <HTMapKit/HTMRoutePlanPoints.h>
#import <HTMapKit/HTMRoutePlanNode.h>
#import <HTMapKit/HTMRoutePaths.h>
#import <HTMapKit/HTMRoutePath.h>

//#import <HTMapKit/HTMPoi.h>
//#import <HTMapKit/HTMPoiCategory.h>
//#import <HTMapKit/HTMPOICategorySearchRequestByType.h>
//#import <HTMapKit/HTMPOISearchRequestByPoiID.h>
//
//#import <HTMapKit/HTMRoadNetModel.h>
//
//#import <HTMapKit/HTMRegionLocationRequest.h>
//#import <HTMapKit/HTMRegionInfoRequest.h>
//#import <HTMapKit/HTMRegionInfoResponse.h>
//#import <HTMapKit/HTMSubRegionsRequest.h>
//
//#import <HTMapKit/HTMMenu.h>
//#import <HTMapKit/HTMMenuSearchRequest.h>
//#import <HTMapKit/HTMMenuSearchResponse.h>
//
//#import <HTMapKit/HTMPublicTransportRequest.h>
//#import <HTMapKit/HTMPublicTransportResponse.h>
//
//#import <HTMapKit/HTMSimulateNavigator.h>
//
//#import <HTMapKit/HTMPolyline.h>
//
//#import <HTMapKit/HTMVersion.h>


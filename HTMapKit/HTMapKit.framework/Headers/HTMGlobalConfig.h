//
//  GlobalConfig.h
//  IndoorMapFramework
//
//  Created by Xd Huang on 2019/2/24.
//  Copyright © 2019 huatu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTMGlobalConfig : NSObject
extern NSString * const SERVER_URL_MAP_DATA;
extern NSString * const SERVER_URL_ROUTE_PLAN;
extern NSString * const SERVER_URL_TILE_FRONT_PART;

extern NSString * const URL_APPENDED_MAP_INFO;
extern NSString * const URL_APPENDED_ROUTE_PLAN ;
extern NSString * const URL_APPENDED_POI_CATEGORIES;
extern NSString * const URL_APPENDED_POI_CATEGORIES_SEARCH_BY_TYPE;
extern NSString * const URL_APPENDED_POI_SEARCH_MULTI_COMBINE;

extern NSString * const URL_APPENDED_ROAD_NET;
extern NSString * const URL_APPENDED_REGION_LOC;
extern NSString * const URL_APPENDED_REGION_INFO;

extern NSString * const URL_APPENDED_SUB_REGION;
extern NSString * const URL_APPENDED_MENU_POSITION;
extern NSString * const URL_APPENDED_PUBLIC_TRANSPORT;

extern NSString * const URL_APPENDED_OUTDOOR_TILE_WHEELCHAIR;
extern NSString * const URL_APPENDED_OUTDOOR_TILE_BLIND;

///后面直接拼接楼层 id（eg："0"）
extern NSString * const URL_APPENDED_INDOOR_TILE_SECONDE_PART;

extern NSString * const KKEY_MAPID;

/** feature图层 */
extern NSString * const KLAYER_ID_FLOOR;

/** 文字图层 */
extern NSString * const KLAYER_ID_LABEL;

/** 室外道路图层 */
extern NSString * const KLAYER_ID_ROAD_LABEL_OUTDOOR;

/** 室内盲道图层 */
extern NSString * const KLAYER_ID_BLIND_INDOOR;

///室外盲道层
extern NSString * const KLAYER_ID_BLIND_OUTDOOR;

/** 室内轮椅图层 */
extern NSString * const KLAYER_ID_WHEELCHAIR_INDOOR;

///室外轮椅层
extern NSString * const KLAYER_ID_WHEELCHAIR_OUTDOOR;

///室外轮椅层unknown
extern NSString * const KLAYER_ID_WHEELCHAIR_OUTDOOR_UNKNOWN;

/// 遮罩层id，用于代码控制显隐遮罩feature
extern NSString * const KLAYER_ID_BARRIER;

///透明遮罩搜索层，专门用于搜索
extern NSString * const KLAYER_ID_BARRIER_FOR_SEARCH;

///遮罩文字层
extern NSString * const KLAYER_ID_BARRIER_LABEL;

/// 路径层
extern NSString * const KLAYER_ID_NAVI_LINE;

///走过路的路径层
extern NSString * const KLAYER_ID_NAVI_LINE_WALKED;

/// 备用图层，可用于选点画线
extern NSString * const KLAYER_ID_STAND_BY_LINE;

/// 区域边界 图层id
extern NSString * const KLAYER_ID_REGION_BORDER;

/// 区域填充 图层id
extern NSString * const KLAYER_ID_REGION_FILL;

/** feature的唯一id，定义为“identifier” */
extern NSString * const KFEATURE_ATTR_ID;
@end

NS_ASSUME_NONNULL_END

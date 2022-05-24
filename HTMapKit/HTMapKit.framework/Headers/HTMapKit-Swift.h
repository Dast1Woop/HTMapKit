// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef HTMAPKIT_SWIFT_H
#define HTMAPKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import CoreLocation;
@import Foundation;
@import MAMapKit;
@import ObjectiveC;
@import UIKit;
#endif

#import <HTMapKit/HTMapKit.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HTMapKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSNumber;

SWIFT_CLASS("_TtC8HTMapKit16HTMCoorTransform")
@interface HTMCoorTransform : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
+ (CLLocationCoordinate2D)transformFromGCJToBaidu:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
+ (CLLocationCoordinate2D)transformFromBaiduToGCJ:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
+ (CLLocationCoordinate2D)transformFromGCJToWGS:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
+ (CLLocationCoordinate2D)transformFromWGSToBaidu:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
+ (CLLocationCoordinate2D)transformFromBaiduToWGS:(CLLocationCoordinate2D)wgsLoc SWIFT_WARN_UNUSED_RESULT;
/// 获取两点之间的距离
+ (double)distanceByPointWithLat1:(double)lat1 lat2:(double)lat2 lng1:(double)lng1 lng2:(double)lng2 SWIFT_WARN_UNUSED_RESULT;
/// 获取两点之间的距离
+ (double)distanceByPointWithPoint1:(CLLocationCoordinate2D)point1 point2:(CLLocationCoordinate2D)point2 SWIFT_WARN_UNUSED_RESULT;
@end

@class HTMRoutePath;
@class UIImage;

SWIFT_CLASS("_TtC8HTMapKit18HTMRouteDrawConfig")
@interface HTMRouteDrawConfig : NSObject
@property (nonatomic, strong) HTMRoutePath * _Nullable path;
@property (nonatomic) NSInteger highlightedFloorID;
/// 默认：DoderBlue    道奇蓝    #1E90FF    30,144,255
@property (nonatomic, strong) UIImage * _Nonnull highlightedImage;
/// 默认：Silver    银白色    #C0C0C0    192,192,192
@property (nonatomic, strong) UIImage * _Nonnull dimImage;
/// 默认：灰色    #808080    128,128,128
@property (nonatomic, strong) UIImage * _Nonnull walkedPartImage;
- (nonnull instancetype)initWithPath:(HTMRoutePath * _Nonnull)path highlightedFloorID:(NSInteger)highlightedFloorID highlightedImage:(UIImage * _Nullable)highlightedImage dimImage:(UIImage * _Nullable)dimImage walkedPartImage:(UIImage * _Nullable)walkedPartImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8HTMapKit24HTMSimulateNavAnnotation")
@interface HTMSimulateNavAnnotation : MAPointAnnotation
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8HTMapKit23HTMTouchPointAnnotation")
@interface HTMTouchPointAnnotation : MAPointAnnotation
@property (nonatomic, strong) UIImage * _Nullable image;
- (nonnull instancetype)initWithImage:(UIImage * _Nonnull)image coor:(CLLocationCoordinate2D)coor imageBounds:(CGRect)imageBounds OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MAMapView;
@class UIPickerView;
@class HTMFloorModel;
@class HTMBuildingModel;
@protocol HTMapViewDelegate;
enum HTUserTrackingMode : NSInteger;
@class NSCoder;
@class NSString;
@class NSError;
@class HTMRegionInfoResponse;
@class NSValue;

SWIFT_CLASS("_TtC8HTMapKit9HTMapView")
@interface HTMapView : UIView
/// 注意事项：
/// 1.高德地图对象相关代理，必须通过 HTMapViewDelegate4MAMap 的代理方法使用，不能在模块外设置 mapView:MAMapView 的代理;
/// 2.sdk内统一使用 gcj02 坐标交互（目标）;
@property (nonatomic, readonly, strong) MAMapView * _Nonnull mapView;
@property (nonatomic, readonly, strong) UIPickerView * _Nullable floorPickerView;
/// 楼层数组
@property (nonatomic, readonly, copy) NSArray<HTMFloorModel *> * _Nullable floorModelsArr;
/// 当前地图需要或正在显示的 建筑模型，不一定是距离地图可见区中心点最近的模型。室内搜索 功能，需使用此建筑模型的buildingID。
@property (nonatomic, readonly, strong) HTMBuildingModel * _Nullable buildingModelMapShowing;
/// 地图代理，用于转发高德地图相关代理方法 + 自身逻辑代理
@property (nonatomic, weak) id <HTMapViewDelegate> _Nullable delegateCustom;
/// 是否显示盲道图层，默认显示
@property (nonatomic) BOOL isBlindLayerHidden;
/// 是否显示轮椅图层，默认隐藏
@property (nonatomic) BOOL isWheelChairLayerHidden;
@property (nonatomic) BOOL isRoutePathShowing;
@property (nonatomic) BOOL isLogEnable;
/// todo优化（目前效果：必须在 ht_mapInitComplete 方法内设置，且 userLocateAnnotation 的 coordinate 必须有值）
@property (nonatomic) enum HTUserTrackingMode mapviewUserTrackingModeCustom;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// 适配外界使用 约束 初始化当前类的对象
- (void)layoutSubviews;
- (void)setUpWithMapKey:(NSString * _Nonnull)mapKey;
- (void)updateUserLocatorWithCoorGcj02:(CLLocationCoordinate2D)coorGcj02;
/// 根据 floorID 切楼层（前提：必须设置地图比例大于17，当前屏幕已显示室内图层），如果失败，内部会每隔 0.5s 递归调用自己尝试切楼层，直到成功；成功时，会回调代理方法 ht_self_didChangeFloor
- (NSError * _Nullable)changeFloor:(NSInteger)floorID SWIFT_WARN_UNUSED_RESULT;
/// 显示路径，有 “缩放到全路网可见” + “清除之前路径画线和已走路线”  的效果。
- (void)showRouteWithConfig:(HTMRouteDrawConfig * _Nullable)config;
/// 更新已走路线画线，内部会先调用 clearRouteWalked() 移除旧的已走路线画线
/// \param index 所在路段下标
///
/// \param projectionCoorGcj02 投影点坐标
///
- (void)updateRoutePathUserWalkedWithPathIndex:(NSUInteger)index projectionCoorGcj02:(CLLocationCoordinate2D)projectionCoorGcj02;
- (void)clearRoutesOfWholeBaseAndWalked;
- (void)clearRouteWalked;
- (HTMSimulateNavAnnotation * _Nonnull)addSimulateLocateAnnotationWithCoorGCJ02:(CLLocationCoordinate2D)coorGCJ02 imageName:(NSString * _Nonnull)imageName imageBounds:(CGRect)imageBounds SWIFT_WARN_UNUSED_RESULT;
/// 添加 区域信息对象 对应的高亮区域图层，相同 idCustom 的区域无法重复添加
/// \param regionInfo HTMRegionInfoResponse 对象
///
- (void)addOverlayWithRegionInfo:(HTMRegionInfoResponse * _Nonnull)regionInfo;
/// 移除 区域信息对象 对应的高亮区域图层，只有添加过图层的区域对象（idCustom唯一标识）才会被移除
/// \param regionInfo HTMRegionInfoResponse 对象
///
- (void)removeOverlayWithRegionInfo:(HTMRegionInfoResponse * _Nonnull)regionInfo;
/// 添加或刷新 地面层路线覆盖物
/// \param coors 携带 CLLocationCoordinate2D 信息的 NSValue 对象数组
///
///
/// returns:
/// NSError? 类型对象
- (NSError * _Nullable)addOrUpdatePolyLineOverLayOfGroundLevelWithCoors:(NSArray<NSValue *> * _Nonnull)coors SWIFT_WARN_UNUSED_RESULT;
- (void)removePolyLineOverLayOfGroundLevel;
@end

@class HTMHeadingMoniter;
@class CLLocationManager;

@interface HTMapView (SWIFT_EXTENSION(HTMapKit)) <HTMHeadingMoniterDelegate>
- (void)dmMoniter:(HTMHeadingMoniter * _Null_unspecified)monitor locationManager:(CLLocationManager * _Null_unspecified)manager didUpdateTrueHeading:(CLLocationDirection)newHeading;
@end

@class HTMBuildingNearbyRequest;
@class HTMBuildingNearbyResponce;

@interface HTMapView (SWIFT_EXTENSION(HTMapKit)) <HTMSearchDelegate>
- (void)onBuildingNearbySearchDone:(HTMBuildingNearbyRequest * _Nonnull)request response:(HTMBuildingNearbyResponce * _Nonnull)response;
- (void)HTMSearchRequest:(id _Nonnull)request didFailWithError:(NSError * _Nonnull)error;
@end


@interface HTMapView (SWIFT_EXTENSION(HTMapKit)) <UIPickerViewDataSource>
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
@end


@interface HTMapView (SWIFT_EXTENSION(HTMapKit)) <UIPickerViewDelegate>
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)pickerView:(UIPickerView * _Nonnull)pickerView widthForComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)pickerView:(UIPickerView * _Nonnull)pickerView rowHeightForComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
@end

@protocol MAAnnotation;
@class MAAnnotationView;
@protocol MAOverlay;
@class MAOverlayRenderer;
@class UIControl;

@interface HTMapView (SWIFT_EXTENSION(HTMapKit)) <MAMapViewDelegate>
/// 注意：有新瓦片需要下载时，才会回调！
- (void)mapViewWillStartLoadingMap:(MAMapView * _Null_unspecified)mapView;
/// 推荐使用，无论是否有新瓦片需要下载时，都会回调！！！
- (void)mapInitComplete:(MAMapView * _Null_unspecified)mapView;
- (void)mapViewDidFinishLoadingMap:(MAMapView * _Null_unspecified)mapView;
- (void)mapViewDidFailLoadingMap:(MAMapView * _Null_unspecified)mapView withError:(NSError * _Null_unspecified)error;
- (void)mapView:(MAMapView * _Null_unspecified)mapView regionWillChangeAnimated:(BOOL)animated wasUserAction:(BOOL)wasUserAction;
/// 地图区域 “改变过程中” 会调用此接口（地图旋转也会触发）
- (void)mapViewRegionChanged:(MAMapView * _Null_unspecified)mapView;
- (void)mapView:(MAMapView * _Null_unspecified)mapView regionDidChangeAnimated:(BOOL)animated wasUserAction:(BOOL)wasUserAction;
- (MAAnnotationView * _Null_unspecified)mapView:(MAMapView * _Null_unspecified)mapView viewForAnnotation:(id <MAAnnotation> _Null_unspecified)annotation SWIFT_WARN_UNUSED_RESULT;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didAddAnnotationViews:(NSArray * _Null_unspecified)views;
- (MAOverlayRenderer * _Null_unspecified)mapView:(MAMapView * _Null_unspecified)mapView rendererForOverlay:(id <MAOverlay> _Null_unspecified)overlay SWIFT_WARN_UNUSED_RESULT;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didAddOverlayRenderers:(NSArray * _Null_unspecified)overlayRenderers;
- (void)offlineDataWillReload:(MAMapView * _Null_unspecified)mapView;
- (void)offlineDataDidReload:(MAMapView * _Null_unspecified)mapView;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didTouchPois:(NSArray * _Null_unspecified)pois;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didSingleTappedAtCoordinate:(CLLocationCoordinate2D)coordinate;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didLongPressedAtCoordinate:(CLLocationCoordinate2D)coordinate;
- (void)mapView:(MAMapView * _Null_unspecified)mapView mapWillMoveByUser:(BOOL)wasUserAction;
- (void)mapView:(MAMapView * _Null_unspecified)mapView mapDidMoveByUser:(BOOL)wasUserAction;
- (void)mapView:(MAMapView * _Null_unspecified)mapView mapWillZoomByUser:(BOOL)wasUserAction;
- (void)mapView:(MAMapView * _Null_unspecified)mapView mapDidZoomByUser:(BOOL)wasUserAction;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didSelectAnnotationView:(MAAnnotationView * _Null_unspecified)view;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didDeselectAnnotationView:(MAAnnotationView * _Null_unspecified)view;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didAnnotationViewTapped:(MAAnnotationView * _Null_unspecified)view;
- (void)mapView:(MAMapView * _Null_unspecified)mapView annotationView:(MAAnnotationView * _Null_unspecified)view calloutAccessoryControlTapped:(UIControl * _Null_unspecified)control;
- (void)mapView:(MAMapView * _Null_unspecified)mapView didAnnotationViewCalloutTapped:(MAAnnotationView * _Null_unspecified)view;
- (void)mapView:(MAMapView * _Null_unspecified)mapView annotationView:(MAAnnotationView * _Null_unspecified)view didChangeDragState:(MAAnnotationViewDragState)newState fromOldState:(MAAnnotationViewDragState)oldState;
@end

@class UILabel;

/// 无注释的方法含义，参考 MAMapView.h 中去除 ‘ht_’ 后的同名方法注释
SWIFT_PROTOCOL("_TtP8HTMapKit17HTMapViewDelegate_")
@protocol HTMapViewDelegate <NSObject>
@optional
/// 设置定位点图片数据，建议返回 30点x30点 大小(@2x图片的话：60x60)，根据显示效果调整素材大小。
- (UIImage * _Nonnull)ht_self_locatorImageForMapviewHT:(HTMapView * _Nonnull)mapviewHT SWIFT_WARN_UNUSED_RESULT;
- (BOOL)ht_self_setStyleInPikerViewWithSelected:(UILabel * _Nonnull)label mapviewHT:(HTMapView * _Nonnull)mapviewHT SWIFT_WARN_UNUSED_RESULT;
- (void)ht_self_didChangeFloorWithFloorID:(NSInteger)floorID;
/// 注意：有新瓦片需要下载时，才会回调！
- (void)ht_mapViewWillStartLoadingMap:(MAMapView * _Null_unspecified)mapView;
/// 推荐使用，无论是否有新瓦片需要下载时，都会回调！！！
- (void)ht_mapInitComplete:(MAMapView * _Null_unspecified)mapView;
/// 注意：有新瓦片需要下载时，才会回调！
- (void)ht_mapViewDidFinishLoadingMap:(MAMapView * _Null_unspecified)mapView;
- (void)ht_mapViewDidFailLoadingMap:(MAMapView * _Null_unspecified)mapView withError:(NSError * _Null_unspecified)error;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView regionWillChangeAnimated:(BOOL)animated wasUserAction:(BOOL)wasUserAction;
/// 地图区域 “改变过程中” 会调用此接口，比较频繁
- (void)ht_mapViewRegionChanged:(MAMapView * _Null_unspecified)mapView;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView regionDidChangeAnimated:(BOOL)animated wasUserAction:(BOOL)wasUserAction;
- (MAAnnotationView * _Null_unspecified)ht_mapView:(MAMapView * _Null_unspecified)mapView viewFor:(id <MAAnnotation> _Null_unspecified)annotation SWIFT_WARN_UNUSED_RESULT;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didAddAnnotationViews:(NSArray * _Null_unspecified)views;
- (MAOverlayRenderer * _Null_unspecified)ht_mapView:(MAMapView * _Null_unspecified)mapView rendererFor:(id <MAOverlay> _Null_unspecified)overlay SWIFT_WARN_UNUSED_RESULT;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didAddOverlayRenderers:(NSArray * _Null_unspecified)overlayRenderers;
- (void)ht_offlineDataWillReload:(MAMapView * _Null_unspecified)mapView;
- (void)ht_offlineDataDidReload:(MAMapView * _Null_unspecified)mapView;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didSingleTappedAt:(CLLocationCoordinate2D)coordinate;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didTouchPois:(NSArray * _Null_unspecified)pois;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didLongPressedAt:(CLLocationCoordinate2D)coordinate;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView mapWillMoveByUser:(BOOL)wasUserAction;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView mapDidMoveByUser:(BOOL)wasUserAction;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView mapWillZoomByUser:(BOOL)wasUserAction;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView mapDidZoomByUser:(BOOL)wasUserAction;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didSelect:(MAAnnotationView * _Null_unspecified)view;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didDeselect:(MAAnnotationView * _Null_unspecified)view;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didAnnotationViewTapped:(MAAnnotationView * _Null_unspecified)view;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView annotationView:(MAAnnotationView * _Null_unspecified)view calloutAccessoryControlTapped:(UIControl * _Null_unspecified)control;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView didAnnotationViewCalloutTapped:(MAAnnotationView * _Null_unspecified)view;
- (void)ht_mapView:(MAMapView * _Null_unspecified)mapView annotationView:(MAAnnotationView * _Null_unspecified)view didChange:(MAAnnotationViewDragState)newState fromOldState:(MAAnnotationViewDragState)oldState;
@end

typedef SWIFT_ENUM(NSInteger, HTUserTrackingMode, closed) {
  HTUserTrackingModeNone = 0,
  HTUserTrackingModeFollow = 1,
};


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

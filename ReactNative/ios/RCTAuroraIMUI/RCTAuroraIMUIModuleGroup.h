//
//  RCTAuroraIMUIModuleGroup.h
//  RCTAuroraIMUI
//
//  Created by oshumini on 2017/6/1.
//  Copyright © 2017年 HXHG. All rights reserved.
//
#import <Foundation/Foundation.h>

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventDispatcher.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#import "RCTEventDispatcher.h"
#elif __has_include("React/RCTBridgeModule.h")
#import "React/RCTEventDispatcher.h"
#import "React/RCTBridgeModule.h"
#endif

#define kAppendMessageGroup @"kAppendMessageGroup"
#define kRemoveMessageGroup @"kRemoveMessageGroup"
#define kRemoveAllMessagesGroup @"kRemoveAllMessagesGroup"
#define kInsertMessagesToTopGroup @"kInsertMessagesToTopGroup"
#define kUpdateMessgeGroup @"kUpdateMessgeGroup"
#define kScrollToBottomGroup @"kScrollToBottomGroup"
#define kHidenFeatureView @"kHidenFeatureView"
#define kMessageListDidLoadGroup @"kMessageListDidLoadGroup"
#define kLayoutInputView @"kLayoutInputView"

@interface RCTAuroraIMUIModuleGroup : NSObject <RCTBridgeModule>
+ (NSString *)getPath;
@end

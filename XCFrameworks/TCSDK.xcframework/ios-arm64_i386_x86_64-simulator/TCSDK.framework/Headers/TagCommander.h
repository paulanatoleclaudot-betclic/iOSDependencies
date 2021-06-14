//
//  TagCommander.h
//  TagCommander
//
//  Created by Damien TERRIER on 03/02/14.
//  Copyright (c) 2014 TagCommander. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <TCCore/TCMacros.h>
#import <TCCore/ITCDynamicStore.h>
#import <TCCore/TCEventSender.h>
#import <TCCore/TCEventListener.h>
#import <TCCore/ETCPrivacyState.h>

@class TCSDKInitialisation;
@class TCDynamicStore;
@class TCAppVars;
@class TCProduct;

@interface TagCommander : NSObject <ITCDynamicStore, ITCEventSenderDelegate, ITCEventListenerDelegate>

/**
* Designated initializer.
*
* @param siteID The TagCommander Side ID.
* @param containerID The TagCommander Container ID.
*/
- (id) initWithSiteID: (int) siteID andContainerID: (int) containerID;
- (id) initWithSiteID: (int) siteID andContainerID: (int) containerID andNotificationCenter: (NSNotificationCenter *) notificationCenter;

- (void) sendData;
- (void) execute: (TCAppVars *) appVars;
- (void) addPermanentData: (NSString *) key withValue: (NSString *) value;
- (NSString *) getPermanentData: (NSString *) key;
- (NSString *) removePermanentData: (NSString *) key;
- (void) addData: (NSString *) key withProduct: (TCProduct *) product;

- (NSString *) getPostData: (TCAppVars *) appVars;
- (void) enableRunningInBackground;

- (void) waitForUserAgent: (Boolean) shouldWait;

- (void) deactivateSDK;
- (void) activateSDK;

#pragma mark - public properties
@property (nonatomic, assign) int containerID;
@property (nonatomic, assign) int siteID;
@property (nonatomic, assign) int numberOfProducts;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, assign) ETCPrivacyState enableSDK;
@property (nonatomic, assign) Boolean shouldWaitForUserAgent;

@property (nonatomic, retain) TCDynamicStore *dynamicStore;
@property (nonatomic, retain) TCDynamicStore *permanentStore;
@property (nonatomic, retain) TCEventSender *senderDelegate;
@property (nonatomic, retain) TCEventListener *listenerDelegate;

@property (nonatomic, strong) TCSDKInitialisation *initialisation;

@end

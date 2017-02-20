/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationHiddenRequestsList : NSObject {
    NSMutableDictionary * _hiddenRequests;
    NSMutableSet * _hiddenSectionStrings;
}

@property (nonatomic, readonly) NSSet *allNotificationRequests;
@property (nonatomic, retain) NSMutableDictionary *hiddenRequests;
@property (nonatomic, retain) NSMutableSet *hiddenSectionStrings;

- (void).cxx_destruct;
- (id)_requestsMatchingRequest:(id)arg1 inSet:(id)arg2;
- (id)_storageStringForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)addHiddenNotificationRequest:(id)arg1;
- (void)addHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)allNotificationRequests;
- (void)clearAllNotificationRequests;
- (id)hiddenNotificationRequestsForSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)hiddenRequests;
- (id)hiddenSectionStrings;
- (id)init;
- (BOOL)isHiddenNotificationRequest:(id)arg1;
- (BOOL)isHiddenSectionIdentifer:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)removeHiddenNotificationRequest:(id)arg1;
- (void)removeHiddenSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)replaceHiddenNotificationRequest:(id)arg1;
- (void)setHiddenRequests:(id)arg1;
- (void)setHiddenSectionStrings:(id)arg1;

@end
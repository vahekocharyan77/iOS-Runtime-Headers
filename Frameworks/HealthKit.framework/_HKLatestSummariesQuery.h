/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLatestSummariesQuery : HKQuery {
    NSCalendar * _calendar;
    id /* block */  _resultsHandler;
    NSDate * _summaryDate;
    NSSet * _typeFilters;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) id /* block */ resultsHandler;
@property (nonatomic, copy) id /* block */ updateHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (BOOL)_requiresValidSampleType;
- (void)deliverResetSummaries:(id)arg1 forQuery:(id)arg2;
- (void)deliverSummaries:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedSummaries:(id)arg1 forQuery:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id /* block */)resultsHandler;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;
+ (BOOL)hd_requiresPrivateEntitlements;

@end
/* Generated by RuntimeBrowser.
 */

@protocol MKMapServiceTicket <NSObject>

@required

- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (GEOMapRegion *)boundingRegion;
- (void)cancel;
- (NSError *)error;
- (NSArray *)exactMapItems;
- (NSArray *)refinedMapItems;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, BOOL, void*
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, BOOL, void*
- (void)submitWithHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, int, id /* block */, void*, void, id /* block */, BOOL, void*
- (void)submitWithRefinedHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, BOOL, void*
- (void)submitWithRefinedHandler:(void *)arg1 timeout:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*, int, id /* block */, void*, void, id /* block */, BOOL, void*
- (GEOMapServiceTraits *)traits;

@end
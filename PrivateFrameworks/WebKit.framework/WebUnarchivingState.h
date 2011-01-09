/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary;



@interface WebUnarchivingState : NSObject 
{
    NSMutableDictionary *archivedSubframes;
    NSMutableDictionary *archivedResources;
}


- (id)init;
- (void)dealloc;
- (void)addArchive:(id)arg1;
- (void)addResource:(id)arg1;
- (id)archivedResourceForURL:(id)arg1;
- (id)popSubframeArchiveWithFrameName:(id)arg1;

@end
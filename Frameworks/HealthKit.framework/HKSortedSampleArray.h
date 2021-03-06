/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSortedSampleArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
    NSSortDescriptor *_sortDescriptor;
}

@property (nonatomic, retain) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1;
- (id)allSamples;
- (int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)init;
- (BOOL)insertSamples:(id)arg1;
- (void)removeAllSamples;
- (BOOL)removeSample:(id)arg1;
- (BOOL)removeSampleAtIndex:(int)arg1;
- (BOOL)removeSamplesWithUUIDs:(id)arg1;
- (id)reverseSampleEnumerator;
- (id)sampleAtIndex:(int)arg1;
- (id)sampleEnumerator;
- (void)setSortDescriptor:(id)arg1;
- (id)sortDescriptor;

@end

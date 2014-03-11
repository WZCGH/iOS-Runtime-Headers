/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    } _has;
    int _lastZilchStitchedIndex;
    GEONameInfo *_nameInfo;
}

@property BOOL hasLastZilchStitchedIndex;
@property(readonly) BOOL hasNameInfo;
@property int lastZilchStitchedIndex;
@property(retain) GEONameInfo * nameInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLastZilchStitchedIndex;
- (BOOL)hasNameInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)lastZilchStitchedIndex;
- (id)nameInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLastZilchStitchedIndex:(BOOL)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (void)setNameInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
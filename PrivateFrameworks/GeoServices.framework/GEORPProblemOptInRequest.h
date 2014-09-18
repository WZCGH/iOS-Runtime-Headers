/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int didOptIn : 1; 
    NSData *_devicePushToken;
    } _has;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    bool_didOptIn;
}

@property(retain) NSData * devicePushToken;
@property bool didOptIn;
@property(readonly) bool hasDevicePushToken;
@property bool hasDidOptIn;
@property(readonly) bool hasProblemId;
@property(readonly) bool hasUserCredentials;
@property(readonly) bool hasUserEmail;
@property(retain) NSString * problemId;
@property(retain) GEORPUserCredentials * userCredentials;
@property(retain) NSString * userEmail;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)didOptIn;
- (bool)hasDevicePushToken;
- (bool)hasDidOptIn;
- (bool)hasProblemId;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDevicePushToken:(id)arg1;
- (void)setDidOptIn:(bool)arg1;
- (void)setHasDidOptIn:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (void)writeTo:(id)arg1;

@end
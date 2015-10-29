/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {
    int _policyType;
    NSArray *_signatureComponents;
}

@property (nonatomic, readonly) int policyType;
@property (nonatomic, readonly, copy) NSArray *signatureComponents;

- (void).cxx_destruct;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)initWithPolicyType:(int)arg1;
- (id)initWithPolicyType:(int)arg1 signatureComponents:(id)arg2;
- (id)initWithSignedActionsDictionary:(id)arg1;
- (int)policyType;
- (id)signatureComponents;

@end
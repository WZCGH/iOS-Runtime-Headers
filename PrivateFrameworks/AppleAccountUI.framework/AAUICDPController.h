/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICDPController : NSObject {
    ACAccount *_account;
    NSOperationQueue *_cdpRequestSerializationQueue;
    CDPStateController *_cdpStateController;
    UIViewController *_presentingViewController;
}

+ (id)uiCDPControllerWithPresentingController:(id)arg1 andAccount:(id)arg2;

- (void).cxx_destruct;
- (void)invalidate;
- (void)verifyCdpEnrollmentWithCompletion:(id /* block */)arg1;

@end

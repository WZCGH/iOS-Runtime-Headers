/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection *_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectionDelegate;
- (oneway void)aceConnectionWillRetryOnError:(id)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)getBulletinContext:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2;
- (oneway void)requestDidFinish;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)setUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingWillBeginWithLevelsSharedMem:(id)arg1;

@end

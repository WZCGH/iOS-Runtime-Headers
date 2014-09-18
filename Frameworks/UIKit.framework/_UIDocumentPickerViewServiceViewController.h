/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIDocumentPickerViewControllerHost>, NSArray, NSString, NSURL;

@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController> {
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
    long long _displayMode;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSURL *_uploadURL;
    bool_displayedAsMenu;
    bool_hasBeenDismissed;
}

@property(setter=_setAuxiliaryOptions:,retain) NSArray * auxiliaryOptions;
@property(retain) NSString * currentPickerIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property long long displayMode;
@property bool displayedAsMenu;
@property bool hasBeenDismissed;
@property(readonly) unsigned long long hash;
@property(readonly) <_UIDocumentPickerViewControllerHost> * hostingViewController;
@property(copy) NSArray * pickableTypes;
@property unsigned long long pickerMode;
@property int sortOrder;
@property(readonly) Class superclass;
@property(copy) NSURL * uploadURL;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_dismissWithImportURL:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)arg1;
- (void)_preferredContentSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)_prepareForDisplayWithCompletion:(id)arg1;
- (void)_setAuxiliaryOptions:(id)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setUploadURL:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_showDefaultPicker;
- (void)_showLocationPopup:(id)arg1;
- (void)_showPicker:(id)arg1;
- (void)_showTopLevelViewController;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (id)auxiliaryOptions;
- (void)beginDownloadingURL:(id)arg1 completion:(id)arg2;
- (id)currentPickerIdentifier;
- (void)dealloc;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (long long)displayMode;
- (bool)displayedAsMenu;
- (bool)hasBeenDismissed;
- (id)hostingViewController;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)setCurrentPickerIdentifier:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setDisplayedAsMenu:(bool)arg1;
- (void)setHasBeenDismissed:(bool)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(bool)arg2;
- (int)sortOrder;
- (id)uploadURL;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLLibraryImageDataProvider;

@interface PLWPhotoBrowserController : PLPhotoBrowserController <UIGestureRecognizerDelegate, PLAssetContainerObserver> {
    PLLibraryImageDataProvider *_imageDataProvider;
}

- (void)dealloc;
- (id)initWithAssetContainerList:(id)arg1 atImageIndexPath:(id)arg2 imageDataProvider:(id)arg3 modalDoneButtonItem:(id)arg4;
- (void)loadView;
- (void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsPhotoBrowserStyleStatusBar;

@end
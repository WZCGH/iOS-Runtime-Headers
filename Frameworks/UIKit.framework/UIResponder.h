/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIResponder : NSObject 
{
}


- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseEntered:(struct __GSEvent { }*)arg1;
- (void)mouseExited:(struct __GSEvent { }*)arg1;
- (void)mouseMoved:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (void)keyDown:(struct __GSEvent { }*)arg1;
- (void)keyUp:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (id)nextResponder;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (id)firstResponder;
- (void)_setFirstResponder:(id)arg1;
- (id)_firstResponder;
- (id)_responderForBecomeFirstResponder;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_forwardSelector:(SEL)arg1 withObject:(id)arg2;
- (void)pushViewType:(NSInteger)arg1;
- (void)showOverlayView:(id)arg1;
- (void)dismissOverlayView:(id)arg1;
- (NSInteger)transitionDirection;

@end
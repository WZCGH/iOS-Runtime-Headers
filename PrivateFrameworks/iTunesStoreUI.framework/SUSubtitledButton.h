/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, NSString, UILabel;

@interface SUSubtitledButton : UIButton {
    struct __CFDictionary { } *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property(retain,readonly) NSString * currentSubtitle;
@property(retain,readonly) UIColor * currentSubtitleColor;
@property(retain,readonly) UIColor * currentSubtitleShadowColor;
@property(retain,readonly) UILabel * subtitleLabel;

+ (void)_initializeSafeCategory;

- (void)_setupSubtitleView;
- (id)_subtitleFont;
- (int)_subtitleLineBreakMode;
- (id)_subtitledContentForState:(unsigned int)arg1;
- (id)accessibilityLabel;
- (void)configureFromScriptButton:(id)arg1;
- (id)currentSubtitle;
- (id)currentSubtitleColor;
- (id)currentSubtitleShadowColor;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subtitleColorForState:(unsigned int)arg1;
- (id)subtitleForState:(unsigned int)arg1;
- (id)subtitleLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtitleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)subtitleShadowColorForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
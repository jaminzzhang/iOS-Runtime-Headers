/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView;

@interface CAMFilterButton : UIButton {
    UIImageView *__circlesImageView;
}

@property(readonly) UIImageView * _circlesImageView;
@property(getter=isOn) BOOL on;

+ (id)filterButton;

- (id)_circlesImageView;
- (void)_commonCAMFilterButtonInitialization;
- (id)_filterImage;
- (id)_filterOnImage;
- (float)_selectedIndicatorAlpha;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;

@end

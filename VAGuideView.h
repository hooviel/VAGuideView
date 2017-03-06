//
//  VAGuideView.h
//  WKBrowser
//
//  Created by David on 13-8-30.
//  Copyright (c) 2013年 VeryApps. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^AnimationComplecation) (void);
typedef void (^DidDismiss) (void);

@interface VAGuideView : UIView <UIScrollViewDelegate>

// item space
@property (nonatomic, assign) CGFloat space;
@property (nonatomic, assign) UIViewContentMode imageContentMode;
@property (nonatomic, retain) UIColor *bgColor;

- (id)initWithFrame:(CGRect)frame arrImages:(NSArray *)arrImages space:(CGFloat)space;
+ (id)guideViewWithFrame:(CGRect)frame arrImages:(NSArray *)arrImages space:(CGFloat)space;

- (void)setBgImage:(UIImage *)image;
- (void)setPageIndicatorImage:(UIImage *)pageIndicatorImage;
- (void)setCurrPageIndicatorImage:(UIImage *)currPageIndicatorImage;

+ (BOOL)shouldShowGuide;

- (void)addButtonAtLastPage:(UIButton *)button;

- (void)startAnimation:(AnimationComplecation)animationComplecation
            didDismiss:(DidDismiss)didDismiss;
- (void)startAnimationWithDuration:(NSTimeInterval)duration
             animationComplecation:(AnimationComplecation)animationComplecation
                        didDismiss:(DidDismiss)didDismiss;

- (void)dismiss:(DidDismiss)block;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell
{
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
    BOOL _trusted;
}

@property(nonatomic, getter=isTrusted) BOOL trusted; // @synthesize trusted=_trusted;
- (id)_trustedLabel;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) float rowHeight;
- (void)setExpired:(BOOL)arg1;
@property(copy, nonatomic) NSString *trustSubtitle;
@property(copy, nonatomic) NSString *trustTitle;
@property(readonly, nonatomic) _CertInfoActionButton *actionButton;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

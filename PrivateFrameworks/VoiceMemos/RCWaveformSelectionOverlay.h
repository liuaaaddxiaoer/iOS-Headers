/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CAGradientLayer, CALayer, NSMutableDictionary, RCTextLayer, UIColor;

@interface RCWaveformSelectionOverlay : UIView
{
    struct UIEdgeInsets _selectionAreaInsets;
    struct CGRect _selectionRect;
    UIColor *_gradientTopColor;
    UIColor *_gradientBottomColor;
    UIColor *_selectionKnobTopColor;
    UIColor *_selectionKnobBottomColor;
    CALayer *_beginTimeSelection;
    CALayer *_endTimeSelection;
    CAGradientLayer *_middleSelectionGradient;
    CALayer *_assetCurrentTimeIndicator;
    RCTextLayer *_middleTimeLayer;
    RCTextLayer *_beginTimeLayer;
    RCTextLayer *_endTimeLayer;
    NSMutableDictionary *_trackedTouches;
    double _requestedAnimatedLayoutDuration;
    BOOL _requestedNonAnimatedLayout;
    BOOL _editingEnabled;
    BOOL _editingBeginTimeIndicator;
    BOOL _editingEndTimeIndicator;
    id <RCWaveformSelectionOverlayDelegate> _delegate;
    double _selectedTimeRangeMinimumDuration;
    double _assetCurrentTime;
    double _assetDuration;
    CDStruct_73a5d3ca _selectedTimeRange;
}

@property(nonatomic, getter=isEditingEndTimeIndicator) BOOL editingEndTimeIndicator; // @synthesize editingEndTimeIndicator=_editingEndTimeIndicator;
@property(nonatomic, getter=isEditingBeginTimeIndicator) BOOL editingBeginTimeIndicator; // @synthesize editingBeginTimeIndicator=_editingBeginTimeIndicator;
@property(nonatomic, getter=isEditingEnabled) BOOL editingEnabled; // @synthesize editingEnabled=_editingEnabled;
@property(readonly, nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
@property(nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(nonatomic) double assetCurrentTime; // @synthesize assetCurrentTime=_assetCurrentTime;
@property(nonatomic) double selectedTimeRangeMinimumDuration; // @synthesize selectedTimeRangeMinimumDuration=_selectedTimeRangeMinimumDuration;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) __weak id <RCWaveformSelectionOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)_alternateEndTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_endTimeRectWithSizedTextLayer:(id)arg1;
- (BOOL)_shouldDisplayEndTimeText;
- (struct CGRect)_alternateBeginTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_beginTimeRectWithSizedTextLayer:(id)arg1;
- (BOOL)_shouldDisplayBeginTimeText;
- (BOOL)__shouldDisplayEndTimeText;
- (BOOL)__shouldDisplayBeginTimeText;
- (struct CGRect)_middleTimeRectWithFont:(id)arg1;
- (id)_newSelectionWithTopKnob:(BOOL)arg1 bottomKnob:(BOOL)arg2;
- (id)_newSelectionBar;
- (id)_newSelectionKnob;
- (float)_minimumOverlayWidth;
- (float)_minimumOverlaySelectionWidth;
- (BOOL)_drawsSelectionForWidth:(float)arg1;
- (struct CGRect)_selectionRectForSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (struct CGRect)_selectionHighlightBounds;
- (struct CGRect)_selectionBoundsIncludingKnobs;
- (struct CGRect)_selectionRect;
- (float)_effectiveSelectionWidth;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_clearStaleTouches;
- (void)_updateSelectedTimeRangeForTrackedTouchesAnimated:(BOOL)arg1;
- (BOOL)_beginTrackingSelectionBar:(id)arg1 selectionBarType:(int)arg2 withTouch:(id)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitSelectionForPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)_setWantsAnimatedLayoutDuration:(double)arg1;
- (void)_createSublayers;
- (void)_clearSublayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadSelectionOffsets;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;
- (void)setSelectionRect:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1 height:(float)arg2 selectionAreaInsets:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

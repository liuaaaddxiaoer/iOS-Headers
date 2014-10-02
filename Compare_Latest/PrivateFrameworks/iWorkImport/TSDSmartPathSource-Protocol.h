/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol TSDSmartPathSource
@property(readonly) unsigned long long numberOfControlKnobs;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;

@optional
- (struct CGPoint)fixedPointForControlKnobChange;
@end

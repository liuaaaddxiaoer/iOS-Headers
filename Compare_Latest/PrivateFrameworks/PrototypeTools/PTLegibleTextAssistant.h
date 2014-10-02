/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PTLegibleTextAssistantSettings;

@interface PTLegibleTextAssistant : NSObject
{
    _Bool _effectsDisabled;
    PTLegibleTextAssistantSettings *_settings;
    double _alphaStrength;
    double _radiusStrength;
    double _largestShadowRadius;
    CDStruct_7d841a06 _imageStatistics;
}

@property(nonatomic) double largestShadowRadius; // @synthesize largestShadowRadius=_largestShadowRadius;
@property(nonatomic) _Bool effectsDisabled; // @synthesize effectsDisabled=_effectsDisabled;
@property(nonatomic) double radiusStrength; // @synthesize radiusStrength=_radiusStrength;
@property(nonatomic) double alphaStrength; // @synthesize alphaStrength=_alphaStrength;
@property(retain, nonatomic) PTLegibleTextAssistantSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) CDStruct_7d841a06 imageStatistics; // @synthesize imageStatistics=_imageStatistics;
- (void).cxx_destruct;
- (struct CGRect)legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2;
- (id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2;
- (id)initWithImageStatistics:(CDStruct_7d841a06)arg1;

@end

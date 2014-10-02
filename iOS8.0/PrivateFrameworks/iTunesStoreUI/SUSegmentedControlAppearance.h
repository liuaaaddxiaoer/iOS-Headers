//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, SUControlAppearance, UIImage;

@interface SUSegmentedControlAppearance : NSObject <NSCopying>
{
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_titleTextAttributes;
}

+ (id)defaultOptionsAppearanceForTintStyle:(int)arg1;
+ (id)defaultBarAppearance;
@property(retain, nonatomic) UIImage *optionsBackgroundImage; // @synthesize optionsBackgroundImage=_optionsBackgroundImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_newDividerImageKeyWithLeftState:(unsigned int)arg1 rightState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)styleSegmentedControl:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)dealloc;

@end

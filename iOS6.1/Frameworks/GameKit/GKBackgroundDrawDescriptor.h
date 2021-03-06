/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIImage;

@interface GKBackgroundDrawDescriptor : NSObject
{
    UIImage *_borderImage;
    struct UIEdgeInsets _borderInsets;
    int _sectionLocation;
    BOOL _drawOutline;
}

@property(nonatomic) BOOL drawOutline; // @synthesize drawOutline=_drawOutline;
@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
- (id)description;
- (void)dealloc;

@end


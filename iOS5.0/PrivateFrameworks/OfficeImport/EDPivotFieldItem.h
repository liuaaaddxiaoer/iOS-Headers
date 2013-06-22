/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface EDPivotFieldItem : NSObject
{
    _Bool mChildItems;
    _Bool mExpanded;
    _Bool mCalculatedMember;
    _Bool mMissed;
    _Bool mHidden;
    _Bool mDetailsHidden;
    int mType;
    unsigned int mItemIndex;
}

+ (id)pivotFieldItem;
- (id)init;
- (_Bool)childItems;
- (void)setChildItems:(_Bool)arg1;
- (_Bool)expanded;
- (void)setExpanded:(_Bool)arg1;
- (_Bool)calculatedMember;
- (void)setCalculatedMember:(_Bool)arg1;
- (_Bool)missed;
- (void)setMissed:(_Bool)arg1;
- (_Bool)hidden;
- (void)setHidden:(_Bool)arg1;
- (_Bool)detailsHidden;
- (void)setDetailsHidden:(_Bool)arg1;
- (unsigned int)itemIndex;
- (void)setItemIndex:(unsigned int)arg1;
- (int)type;
- (void)setType:(int)arg1;

@end

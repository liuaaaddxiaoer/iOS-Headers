/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableData, NSObject<OS_dispatch_queue>;

@interface MPReshuffledArrayIndexMap : NSObject <NSCoding, NSCopying>
{
    unsigned int _arrayCount;
    unsigned int _identityIndexesCount;
    NSObject<OS_dispatch_queue> *_shuffledIndexesQueue;
    NSMutableData *_shuffledIndexesData;
    struct _NSRange _focusedRange;
}

@property(nonatomic) struct _NSRange focusedRange; // @synthesize focusedRange=_focusedRange;
- (unsigned int)sourceArrayIndexForIndex:(unsigned int)arg1;
- (BOOL)_onQueueExtendMap;
@property(readonly, nonatomic) unsigned int countOfArrayIndexMappings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSourceArrayCount:(unsigned int)arg1 identityArraysCount:(unsigned int)arg2;
- (id)initWithSourceArrayCount:(unsigned int)arg1 identityIndexesCount:(unsigned int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCRCArgumentHolderPrivate;

__attribute__((visibility("hidden")))
@interface SCRCArgumentHolder : NSObject
{
    SCRCArgumentHolderPrivate *_private;
}

- (BOOL)isRequired;
- (void)setIsRequired:(BOOL)arg1;
- (id)argumentDescription;
- (void)setArgumentDescription:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)argument;
- (void)setArgument:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (int)compare:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)process;
- (void)dealloc;
- (id)init;

@end


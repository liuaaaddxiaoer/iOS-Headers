/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TUAudioController : NSObject
{
    struct dispatch_semaphore_s *_modifyingStateLock;
    struct dispatch_group_s *_outstandingRequestsGroup;
}

- (void)blockUntilOutstandingRequestsComplete;
- (void)dealloc;
- (id)init;

@end

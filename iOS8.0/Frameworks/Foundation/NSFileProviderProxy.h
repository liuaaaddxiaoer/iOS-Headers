//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileReactorProxy.h>

__attribute__((visibility("hidden")))
@interface NSFileProviderProxy : NSFileReactorProxy
{
    BOOL _wantsWriteNotifications;
}

@property BOOL wantsWriteNotifications; // @synthesize wantsWriteNotifications=_wantsWriteNotifications;
- (void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2;
- (void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4;
- (void)provideLogicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providePhysicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)provideItemAtURL:(id)arg1 forAccessClaim:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1;
- (void)setItemLocation:(id)arg1;

@end

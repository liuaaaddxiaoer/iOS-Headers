//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject
{
    NSURLProtocolInternal *_internal;
}

+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)unregisterClass:(Class)arg1;
+ (BOOL)registerClass:(Class)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (BOOL)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(BOOL)arg3;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)_canonicalRequestForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (Class)_protocolClassForRequest:(id)arg1 allowCF:(BOOL)arg2;
+ (id)_registeredClasses;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;
- (id)cachedResponse;
- (id)request;
- (id)client;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)_releaseProtocolClientReference;

@end


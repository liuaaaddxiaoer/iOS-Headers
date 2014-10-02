//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSFeedback.h>

@class NSString, NSURLRequest;

@interface PRSSearchFeedback : PRSFeedback
{
    int _type;
    BOOL _cached;
    BOOL _error;
    int _latency;
    int _ttfb;
    NSString *_error_code;
    int _delta_ref;
    int _delta;
    NSURLRequest *_urlRequest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(nonatomic) int delta; // @synthesize delta=_delta;
@property(nonatomic) int delta_ref; // @synthesize delta_ref=_delta_ref;
@property(retain, nonatomic) NSString *error_code; // @synthesize error_code=_error_code;
@property(nonatomic) BOOL error; // @synthesize error=_error;
@property(nonatomic) BOOL cached; // @synthesize cached=_cached;
@property(nonatomic) int ttfb; // @synthesize ttfb=_ttfb;
@property(nonatomic) int latency; // @synthesize latency=_latency;
- (void).cxx_destruct;
- (void)validate;
- (id)plist;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 type:(int)arg2 timestamp:(int)arg3;

@end

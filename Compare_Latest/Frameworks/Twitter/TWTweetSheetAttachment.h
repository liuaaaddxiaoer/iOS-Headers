/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TWBevelledImageView, UIImage;

@interface TWTweetSheetAttachment : NSObject
{
    int _type;
    id _payload;
    UIImage *_previewImage;
    TWBevelledImageView *_previewView;
    int _downsampleStatus;
}

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;
@property(nonatomic) int downsampleStatus; // @synthesize downsampleStatus=_downsampleStatus;
@property(retain, nonatomic) TWBevelledImageView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end

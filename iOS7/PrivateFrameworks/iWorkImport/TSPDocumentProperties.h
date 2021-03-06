/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSUUID;

// Not exported
@interface TSPDocumentProperties : NSObject <NSCopying>
{
    NSUUID *_documentUUID;
    NSUUID *_versionUUID;
    unsigned long long _fileFormatVersion;
    NSUUID *_nextVersionUUID;
    NSDictionary *_additionalProperties;
}

+ (_Bool)documentIsEncryptedAtURL:(id)arg1;
+ (id)documentUUIDAtURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(copy, nonatomic) NSUUID *nextVersionUUID; // @synthesize nextVersionUUID=_nextVersionUUID;
@property(nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;
@property(copy, nonatomic) NSUUID *versionUUID; // @synthesize versionUUID=_versionUUID;
@property(copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithAdditionalProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool hasCurrentFileFormatVersion;
- (void)updateVersionUUID;
- (void)updateDocumentUUID;
- (id)documentIdentifierURLForDocumentURL:(id)arg1;
- (id)documentPropertiesURLForDocumentURL:(id)arg1;
- (_Bool)writeToPropertiesURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToDocumentURL:(id)arg1 error:(id *)arg2;
- (id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2;
- (void)readDocumentPropertiesFromDictionary:(id)arg1;
- (id)initWithPropertiesURL:(id)arg1 error:(id *)arg2;
- (id)initWithDocumentURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end


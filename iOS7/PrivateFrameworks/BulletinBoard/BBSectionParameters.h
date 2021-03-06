/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class BBSectionIcon, BBSectionSubtypeParameters, NSLock, NSMutableDictionary, NSString;

@interface BBSectionParameters : NSObject <NSSecureCoding>
{
    NSLock *_lock;
    _Bool _showsSubtitle;
    _Bool _usesVariableLayout;
    _Bool _orderSectionUsingRecencyDate;
    _Bool _showsDateInFloatingLockScreenAlert;
    _Bool _displaysCriticalBulletins;
    unsigned long long _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSString *_uniqueIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)copyCachedSectionParametersWithIdentifier:(id)arg1;
+ (void)removeSectionParametersFromCache:(id)arg1;
+ (void)addSectionParametersToCache:(id)arg1;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) _Bool displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property(nonatomic) _Bool showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property(nonatomic) _Bool orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property(nonatomic) _Bool usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;
@property(nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) _Bool showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parametersForSubtype:(long long)arg1;
- (void)dealloc;
- (id)init;

@end


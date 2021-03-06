//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class GKGameInternal, GKStoreItemInternal, NSDictionary, NSNumber, NSString;

@interface GKGame : NSObject <NSCoding, NSSecureCoding>
{
    GKGameInternal *_internal;
    int _environment;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)updateGames:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTopGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(int)arg2;
+ (id)currentGameIncludingGameCenter:(BOOL)arg1;
+ (id)currentGame;
+ (BOOL)isGameCenter;
+ (BOOL)isPreferences;
+ (void)markGameRecommendationsViewed:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)markGameRecommendationsDisplayed:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property(retain) GKGameInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isInstalled) BOOL installedGame;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isStoreItemUnexpired;
@property(readonly, nonatomic) struct GKGameInfo gameInfo;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isGameCenter;
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadGameRatingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isGameRecommendation; // @dynamic isGameRecommendation;

// Remaining properties
@property(readonly, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, nonatomic) NSString *defaultCategory; // @dynamic defaultCategory;
@property(retain, nonatomic) NSString *engineID; // @dynamic engineID;
@property(readonly, nonatomic) NSNumber *externalVersion; // @dynamic externalVersion;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned char platform; // @dynamic platform;
@property(nonatomic, getter=isPrerendered) BOOL prerendered; // @dynamic prerendered;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @dynamic storeItem;
@property(readonly, nonatomic) BOOL supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(readonly, nonatomic) BOOL supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;

@end


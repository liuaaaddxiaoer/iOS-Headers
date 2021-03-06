/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class LBSGLocation, NSMutableArray;

@interface LBSGLocReplyElement : PBCodable
{
    int _status;
    LBSGLocation *_location;
    NSMutableArray *_deviceLocations;
}

@property(retain, nonatomic) NSMutableArray *deviceLocations; // @synthesize deviceLocations=_deviceLocations;
@property(retain, nonatomic) LBSGLocation *location; // @synthesize location=_location;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)deviceLocationAtIndex:(unsigned int)arg1;
- (unsigned int)deviceLocationsCount;
- (void)addDeviceLocation:(id)arg1;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)dealloc;

@end


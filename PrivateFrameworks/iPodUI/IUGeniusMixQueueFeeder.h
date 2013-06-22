/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueryQueueFeeder.h>

@interface IUGeniusMixQueueFeeder : IUMediaQueryQueueFeeder
{
    id <IUGeniusMixQueueFeederDataSource> _dataSource;
    unsigned int _currentPlaylistOffset;
}

@property(retain, nonatomic) id <IUGeniusMixQueueFeederDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)_configureWithMix:(id)arg1 dataSource:(id)arg2 startEntityIndex:(unsigned int)arg3 startPlayback:(BOOL)arg4;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)query;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (BOOL)userCanChangeShuffleAndRepeatType;
- (unsigned int)realShuffleType;
- (unsigned int)realRepeatType;

@end

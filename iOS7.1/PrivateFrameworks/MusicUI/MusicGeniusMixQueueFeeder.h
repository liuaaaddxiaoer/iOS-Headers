//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicQueryQueueFeeder.h>

@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder
{
    unsigned int _currentPlaylistOffset;
    id <MusicGeniusMixQueueFeederDataSource> _dataSource;
}

@property(retain, nonatomic) id <MusicGeniusMixQueueFeederDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)_configureWithMix:(id)arg1 playbackContext:(id)arg2 startPlayback:(BOOL)arg3;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)query;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (unsigned int)shuffleType;
- (unsigned int)realRepeatType;
- (BOOL)userCanChangeShuffleAndRepeatType;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (unsigned int)itemCount;

@end

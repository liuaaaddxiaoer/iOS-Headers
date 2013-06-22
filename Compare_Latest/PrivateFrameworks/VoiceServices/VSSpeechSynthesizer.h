/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VSSpeechSynthesizer : NSObject
{
    void *_speechJob;
    void *_keepAlive;
    void *_inactiveKeepAlive;
    id <VSSpeechSynthesizerDelegate> _delegate;
    NSString *_voice;
    int _footprint;
    float _rate;
    float _pitch;
    float _volume;
    struct {
        unsigned int delegateStart:1;
        unsigned int delegateFinish:1;
        unsigned int delegateFinishWithPhonemesSpoken:1;
        unsigned int delegatePause:1;
        unsigned int delegateContinue:1;
        unsigned int delegateWillSpeak:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
}

+ (void)_localeDidChange;
+ (BOOL)isSystemSpeaking;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)availableVoices;
- (void)_handleSpeech:(struct __VSSpeech *)arg1 willSpeakMarkType:(int)arg2 inRange:(CDStruct_1ef3fb1f)arg3;
- (void)_handleSpeech:(struct __VSSpeech *)arg1 completed:(BOOL)arg2 phonemesSpoken:(struct __CFString *)arg3 withError:(id)arg4;
- (void)_handleSpeechContinued:(struct __VSSpeech *)arg1;
- (void)_handleSpeechPaused:(struct __VSSpeech *)arg1;
- (void)_handleSpeechStarted:(struct __VSSpeech *)arg1;
- (void)setMaintainInactivePersistentConnection:(BOOL)arg1;
- (void)setMaintainPersistentConnection:(BOOL)arg1;
- (int)footprint;
- (void)setFootprint:(int)arg1;
- (id)voice;
- (void)setVoice:(id)arg1;
- (float)volume;
- (id)setVolume:(float)arg1;
- (float)pitch;
- (id)setPitch:(float)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (id)setRate:(float)arg1;
- (float)rate;
- (id)speechString;
- (BOOL)isSpeaking;
- (id)continueSpeaking;
- (id)pauseSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2;
- (id)pauseSpeakingAtNextBoundary:(int)arg1;
- (id)stopSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2;
- (id)stopSpeakingAtNextBoundary:(int)arg1;
- (id)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3;
- (id)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2;
- (id)startSpeakingAttributedString:(id)arg1;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3;
- (id)startSpeakingString:(id)arg1 attributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4;
- (id)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2;
- (id)startSpeakingString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initForInputFeedback;
- (id)init;

@end

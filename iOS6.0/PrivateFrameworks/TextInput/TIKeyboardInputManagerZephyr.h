/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIKeyboardInputManager.h"

@class CPLRUDictionary, NSMutableArray, NSMutableString, TIKeyboardInputManagerConfig, TIWordTokenizer, UIKeyboardCandidate;

@interface TIKeyboardInputManagerZephyr : UIKeyboardInputManager
{
    struct TIInputManagerZephyr *m_impl;
    NSMutableString *m_composedText;
    unsigned int m_defaultCandidateIndex;
    TIWordTokenizer *m_wordTokenizer;
    struct RefPtr<TIAutoshiftRegularExpression> m_autoshift_regex;
    TIKeyboardInputManagerConfig *_config;
    NSMutableArray *_inputHistory;
    CPLRUDictionary *_autocorrectionHistory;
    int _autocapitalizationType;
    UIKeyboardCandidate *_revisitedCandidate;
}

@property(retain, nonatomic) UIKeyboardCandidate *revisitedCandidate; // @synthesize revisitedCandidate=_revisitedCandidate;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(retain, nonatomic) CPLRUDictionary *autocorrectionHistory; // @synthesize autocorrectionHistory=_autocorrectionHistory;
@property(readonly, nonatomic) NSMutableArray *inputHistory; // @synthesize inputHistory=_inputHistory;
@property(readonly, nonatomic) TIKeyboardInputManagerConfig *config; // @synthesize config=_config;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTypologyRecorder:(id)arg1;
- (BOOL)acceptsCharacter:(unsigned short)arg1;
- (void)deleteFromStrokeHistory;
- (int)keyHitTest:(struct CGPoint)arg1 touchStage:(int)arg2 atTime:(double)arg3 withTouch:(id)arg4 forceShift:(BOOL)arg5 forcingKey:(int)arg6;
- (void)registerKeyArea:(struct CGPoint)arg1 withRadii:(struct CGPoint)arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (void)clearKeyAreas;
- (BOOL)canHandleKeyHitTest;
- (void)clearAllCentroids;
- (void)registerCentroid:(struct CGPoint)arg1 forKey:(id)arg2;
- (unsigned int)defaultCandidateIndex;
- (id)candidates;
- (id)candidatesForString:(id)arg1;
- (BOOL)usesCandidateSelection;
- (id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(BOOL)arg3;
- (id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(BOOL)arg2;
- (unsigned int)maximumShortcutLengthAllowed;
- (BOOL)supportsShortcutConversion;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (id)autocorrectionCandidateForInput:(id)arg1 withWord:(const struct Word *)arg2;
- (id)autocorrection;
- (id)phraseCandidateCompletedByWord:(const struct String *)arg1 allowNoSuggest:(BOOL)arg2;
- (void)checkAutocorrectionDictionaries;
- (struct __CFDictionary *)chargedKeyProbabilities;
- (void)setAutoshiftFromInputContext;
- (BOOL)canStartSentenceAfterString:(id)arg1;
- (BOOL)nextInputWouldStartSentence;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)textPrecedingNextInput;
- (id)shadowTyping;
- (void)updateForRevisitedString:(id)arg1;
- (void)reviseInputHistoryForRetroCorrectionCandidates:(id)arg1 forInputs:(id)arg2;
- (id)updateInputHistoryForAcceptedText:(id)arg1;
- (void)inputLocationChanged;
- (void)candidateRejected:(id)arg1;
- (void)decreaseUserFrequency:(id)arg1 usageFlags:(unsigned int)arg2;
- (void)increaseUserFrequency:(id)arg1 usageFlags:(unsigned int)arg2;
- (void)textAccepted:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (id)defaultCandidate;
- (BOOL)stringIsExemptFromChecker:(id)arg1;
- (id)inputString;
- (BOOL)inputEmpty;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (unsigned int)wordHistoryDepth;
- (void)setInputIndex:(unsigned int)arg1;
- (void)clearInputContext;
- (BOOL)removeSuffixOfInputContext:(id)arg1;
- (void)appendToInputContext:(id)arg1;
- (id)inputContext;
- (void)acceptInput;
- (void)clearInput;
- (id)deleteFromInput:(unsigned int *)arg1;
- (unsigned int)deleteLengthForString:(id)arg1;
- (void)setInput:(id)arg1;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint)arg3 firstDelete:(unsigned int *)arg4 fromVariantKey:(BOOL)arg5;
- (void)clearDynamicDictionary;
- (void)setCalculatesChargedKeyProbabilities:(BOOL)arg1;
- (void)configureInputModeSpecificFeatures:(id)arg1 withLayout:(id)arg2;
- (BOOL)inHardwareKeyboardMode;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setLearnsCorrection:(BOOL)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)setCollatorLocale;
- (void)loadFavoniusLanguageModel;
- (void)loadDictionaries;
- (struct TIInputManagerZephyr *)initImplementation;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (BOOL)doesComposeText;
- (void)dealloc;
- (id)init;
- (id)initWithConfig:(id)arg1;

@end

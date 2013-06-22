/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPSwipableViewDelegate-Protocol.h"
#import "MPTransportControlsTarget-Protocol.h"
#import "MPVideoControllerProtocol-Protocol.h"
#import "MPVideoOverlayDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class MPAVController, MPAVItem, MPAudioVideoRoutingPopoverController, MPInlineAudioOverlay, MPInlineVideoFullscreenViewController, MPSwipableView, MPTVOutWindow, MPVideoBackgroundView, MPVideoContainerView, NSSet, NSString, NSTimer, UIActivityIndicatorView, UIAlertView, UIColor, UIImage, UINavigationController, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView, UIView<MPVideoOverlay>, UIWindow;

@interface MPInlineVideoController : NSObject <MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate, UIPopoverControllerDelegate>
{
    id _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    BOOL _allowsDetailScrubbing;
    BOOL _allowsWirelessPlayback;
    BOOL _alwaysAllowHidingControlsOverlay;
    int _artworkImageStyle;
    BOOL _attemptAutoPlayWhenControlsHidden;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    BOOL _canAnimateControlsOverlay;
    BOOL _canShowControlsOverlay;
    BOOL _controlsOverlayVisible;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    BOOL _disableAutoRotation;
    BOOL _disableControlsAutohide;
    BOOL _displayPlaybackErrorAlerts;
    BOOL _inlinePlaybackUsesTVOut;
    unsigned int _itemTypeOverride;
    BOOL _ownsStatusBar;
    UIImage *_posterImage;
    unsigned int _scaleMode;
    BOOL _TVOutEnabled;
    BOOL _TVOutEnabledMaster;
    BOOL _useHostedWindowWhenFullscreen;
    MPSwipableView *_view;
    UIView<MPVideoOverlay> *_videoOverlayView;
    unsigned long long _visibleParts;
    int _audioOverlayStyle;
    NSString *_playbackErrorDescription;
    int _videoOverlayStyle;
    UIAlertView *_alertSheet;
    UIWindow *_alternateTracksWindow;
    MPInlineAudioOverlay *_audioOverlayView;
    unsigned int _backgroundTaskId;
    BOOL _batteryMonitoringWasEnabled;
    UINavigationController *_chaptersContainerController;
    MPVideoContainerView *_containerView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    int _extendedModeNotifyToken;
    MPInlineVideoFullscreenViewController *_fullscreenViewController;
    BOOL _fullscreenViewSizeIsExternallyManaged;
    UIWindow *_fullscreenWindow;
    BOOL _hasShownFirstVideoFrame;
    NSTimer *_idleTimer;
    BOOL _inCloneMirrorMode;
    BOOL _isAnimatingOverlay;
    BOOL _isTransitioningFromFullscreen;
    BOOL _isTransitioningToFullscreen;
    UIActivityIndicatorView *_loadingIndicator;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
    int _savedStatusBarStyle;
    BOOL _savedIsStatusBarHidden;
    unsigned int _scaleModeOverride;
    BOOL _scheduledLoadingIndicator;
    BOOL _swallowNextTapGesture;
    UITapGestureRecognizer *_tapGestureRecognizer;
    MPTVOutWindow *_tvOutWindow;
    UIView *_videoBackgroundView;
    NSSet *_viewsToFade;
    BOOL _wantsOverlayVisibleWhenItemIsAvailable;
    BOOL _wasPlaying;
    UIWindow *_windowForDisablingAutorotation;
    UIWindow *_windowForFullscreenTransition;
}

@property(nonatomic) int audioOverlayStyle; // @synthesize audioOverlayStyle=_audioOverlayStyle;
@property(readonly, nonatomic) int savedStatusBarStyle; // @synthesize savedStatusBarStyle=_savedStatusBarStyle;
@property(readonly, nonatomic) BOOL savedIsStatusBarHidden; // @synthesize savedIsStatusBarHidden=_savedIsStatusBarHidden;
@property(copy, nonatomic) NSString *playbackErrorDescription; // @synthesize playbackErrorDescription=_playbackErrorDescription;
@property(nonatomic) int videoOverlayStyle; // @synthesize videoOverlayStyle=_videoOverlayStyle;
- (unsigned long long)visibleParts;
- (BOOL)TVOutEnabled;
- (void)setPosterImage:(id)arg1;
- (id)posterImage;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (unsigned int)itemTypeOverride;
- (BOOL)inlinePlaybackUsesTVOut;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (BOOL)displayPlaybackErrorAlerts;
- (unsigned long long)disabledParts;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (BOOL)disableAutoRotation;
- (unsigned long long)desiredParts;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (BOOL)controlsOverlayVisible;
- (BOOL)canShowControlsOverlay;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (BOOL)canAnimateControlsOverlay;
- (void)setBackstopColor:(id)arg1;
- (id)backstopColor;
- (id)backgroundView;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (void)setArtworkImageStyle:(int)arg1;
- (int)artworkImageStyle;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (BOOL)allowsDetailScrubbing;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (BOOL)_useInlineControls;
- (void)_updateTVOutEnabled;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)_updateDoubleTapGestureRecognizer;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateBackgroundViewInformation;
- (void)_updateBackgroundViewConfiguration:(BOOL)arg1;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_unregisterForPlayerNotifications;
- (void)_transitionToFullscreenDidEnd;
- (void)_transitionToFullscreenAnimated:(BOOL)arg1;
- (void)_transitionFromFullscreenDidEnd;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2;
- (void)_transitionFromFullscreenAnimated:(BOOL)arg1;
- (void)_tearDownTVOutWindow;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_showOverlayDidEnd;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_showChapters;
- (BOOL)_shouldShowDestinationPlaceholder;
- (void)_setupTVOutWindow;
- (void)_setupSubviews;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_resetOverlayIdleTimer;
- (void)_registerForPlayerNotifications;
- (void)_postViewControllerRequestsExitWithReason:(int)arg1;
- (void)_postScaleModeDidChange;
- (BOOL)_overlayViewIsVisible;
- (void)_overlayIdleTimerFired:(id)arg1;
- (unsigned int)_itemTypeWithActualTypePreference;
- (BOOL)_isAnimatingFullscreenTransition;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideLoadingIndicator;
- (void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_enableAirPlayVideoRoutesIfNecessary;
- (unsigned int)_effectiveItemType;
- (void)_doneWithChapters:(id)arg1;
- (void)_destroyVideoOverlayView;
- (void)_destroyAudioOverlayView;
- (void)_delayedUpdateBackgroundView;
- (void)_delayedShowLoadingIndicator;
- (BOOL)canShowQTAudioOnlyUI;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_cancelOverlayIdleTimer;
- (void)_validityChanged:(id)arg1;
- (void)_timedImageMetadataAvailable:(id)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_scaleModeDidChange:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_playbackError:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (void)_isAirPlayVideoActiveDidChange:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_bufferingStateChanged:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_availableRoutesChanged:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationResumedEventsOnly:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)chapterList:(id)arg1 selectedChapter:(unsigned int)arg2;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayDidDismissAlternateTracksPopover:(id)arg1;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)saveStatusBarState;
@property(readonly, nonatomic) UIView *fullscreenView;
- (void)fullscreenOverlayDidShow;
- (void)fullscreenOverlayDidHide;
- (void)fullscreenOverlayWillShowAnimated:(BOOL)arg1;
- (void)fullscreenOverlayWillHideAnimated:(BOOL)arg1;
- (void)exitFullscreen;
- (BOOL)viewControllerWillRequestExit;
- (id)videoView;
- (id)videoOverlayView;
- (void)showAlternateTracksController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsNeedLayout;
- (void)setClosedCaptions:(id)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (unsigned int)scaleMode;
- (void)prepareToDisplayVideo;
- (BOOL)ownsStatusBar;
- (BOOL)isFullscreen;
- (unsigned int)hostedWindowContextID;
- (id)hostedWindow;
- (void)displayVideoView;
- (BOOL)disableControlsAutohide;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canChangeScaleMode;
- (struct CGRect)backgroundViewSnapshotFrame;
@property(readonly, nonatomic) UIView *view;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
@property(nonatomic) int orientation;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MFMailComposeRemoteViewControllerDelegate-Protocol.h"

@class MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, NSError, NSMutableArray, NSMutableDictionary, NSString, _UIAsyncInvocation;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate>
{
    id <MFMailComposeViewControllerDelegate> _mailComposeDelegate;
    id _autorotationDelegate;
    MFMailComposePlaceholderViewController *_placeholderViewController;
    MFMailComposeRemoteViewController *_serviceViewController;
    _UIAsyncInvocation *_cancellationInvocation;
    NSMutableDictionary *_compositionValues;
    NSMutableArray *_attachments;
    NSString *_placeholderSubject;
    int _composeResult;
    NSError *_composeResultError;
    double _presentationDelayBeganTimestamp;
    unsigned int _hasDelayedPresentation:1;
    unsigned int _didEndDelayedPresentation:1;
    unsigned int _compositionValuesAreFinalized:1;
    unsigned int _remoteViewControllerIsConfigured:1;
    unsigned int _isAppearing:1;
    unsigned int _didAppear:1;
    unsigned int _didFinish:1;
    unsigned int _delegateRespondsToBodyFinishedLoadingWithResult:1;
}

@property(nonatomic) id autorotationDelegate; // @synthesize autorotationDelegate=_autorotationDelegate;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate; // @synthesize mailComposeDelegate=_mailComposeDelegate;
- (void)autosaveWithHandler:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)finalizeCompositionValues;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setContentVisible:(BOOL)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSubject:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1;
- (void)_notifyCompositionDidFinish;
- (void)compositionFinishedWithResult:(int)arg1 error:(id)arg2;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_cancelComposition:(id)arg1;
- (void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1;
- (void)_configureRemoteViewContoller;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (void)_didEndDelayingCompositionPresentation;
- (void)_endDelayingCompositionPresentation;
- (void)_beginDelayingCompositionPresenation;
- (void)willMoveToParentViewController:(id)arg1;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_setPlaceHolderSubject:(id)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1;
- (void)loadView;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

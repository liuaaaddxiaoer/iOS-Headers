//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SKUIItemListTableViewController;

@interface SKUIIPadChartsColumnView : UIView
{
    NSArray *_contentViewControllers;
    int _selectedViewControllerIndex;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (void).cxx_destruct;
- (void)_addSelectedViewController;
- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(int)arg1;
@property(readonly, nonatomic) SKUIItemListTableViewController *selectedViewController;

@end

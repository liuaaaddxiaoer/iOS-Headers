//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObject, NSString;

@protocol PLOrderKeyObject <NSObject>
- (NSManagedObject *)childManagedObject;
- (NSString *)secondaryOrderSortKey;
- (void)setIsSpecial:(BOOL)arg1;
- (BOOL)isSpecial;
- (void)setOrderValue:(long long)arg1;
- (long long)orderValue;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JNWCollectionView, NSIndexPath;

@protocol JNWCollectionViewListLayoutDelegate <NSObject>

@optional
- (double)collectionView:(JNWCollectionView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)collectionView:(JNWCollectionView *)arg1 heightForHeaderInSection:(long long)arg2;
- (double)collectionView:(JNWCollectionView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
@end

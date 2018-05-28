//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "MMViewerWindowDelegate.h"
#import "NSTextViewDelegate.h"

@class NSString, NSTextView;

@interface MMSystemMessageCellView : MMMessageCellView <NSTextViewDelegate, MMViewerWindowDelegate>
{
    NSTextView *_msgTextView;
}

+ (id)_formattedSystemMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) NSTextView *msgTextView; // @synthesize msgTextView=_msgTextView;
- (void).cxx_destruct;
- (id)getReTransferedTipsForContent:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)showsContextMenuButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)_relayoutTextView;
- (void)populateWithMessage:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//  GJGCCommonInputBar.h
//  Connect
//
//  Created by KivenLin on 14-10-28.
//  Copyright (c) 2014年 Connect. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GJGCChatInputBarItem.h"
#import "GJGCChatInputTextView.h"
#import "GJGCChatInputConst.h"

@class GJGCChatInputBar;

/**
 *  inputbar change frame
 *
 *  @param inputBar
 *  @param changeToFrame
 */
typedef void (^GJGCChatInputBarDidChangeFrameBlock)(GJGCChatInputBar *inputBar, CGFloat changeDelta);

/**
 *  inputbar change action
 *
 *  @param inputBar
 *  @param toActionType
 */
typedef void (^GJGCChatInputBarDidChangeActionBlock)(GJGCChatInputBar *inputBar, GJGCChatInputBarActionType toActionType);

/**
 *  inputbar send text
 *
 *  @param inputBar
 *  @param text
 */
typedef void (^GJGCChatInputBarDidTapOnSendTextBlock)(GJGCChatInputBar *inputBar, NSString *text);


@interface GJGCChatInputBar : UIView

@property(nonatomic, assign) CGFloat barHeight;

@property(nonatomic, assign) CGFloat inputTextStateBarHeight;

@property(nonatomic, strong) NSString *panelIdentifier;

@property(nonatomic, strong) NSString *inputTextViewPlaceHolder;
@property(nonatomic, readonly) GJGCChatInputBarActionType currentActionType;
@property(nonatomic, assign) GJGCChatInputBarActionType disableActionType;

/**
 *  config frame change
 *
 *  @param changeBlock
 */
- (void)configBarDidChangeFrameBlock:(GJGCChatInputBarDidChangeFrameBlock)changeBlock;

/**
 *  config action change
 *
 *  @param actionBlock 
 */
- (void)configBarDidChangeActionBlock:(GJGCChatInputBarDidChangeActionBlock)actionBlock;

/**
 *  config record change
 *
 *  @param actionBlock 
 */
- (void)configInputBarRecordActionChangeBlock:(GJGCChatInputTextViewRecordActionChangeBlock)actionBlock;

/**
 *  config send text
 *
 *  @param sendTextBlock 
 */
- (void)configBarTapOnSendTextBlock:(GJGCChatInputBarDidTapOnSendTextBlock)sendTextBlock;

- (void)setupForCommentBarStyle;

/**
 * reserve state
 */
- (void)reserveState;

- (void)reserveCommentState;

- (void)inputTextResigionFirstResponse;

- (BOOL)isInputTextFirstResponse;

- (void)inputTextBecomeFirstResponse;

- (void)clearInputText;

- (void)recordRightStartLimit;

@end

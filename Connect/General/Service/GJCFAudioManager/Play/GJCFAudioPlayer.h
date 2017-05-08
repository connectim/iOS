//
//  GJCFAudioPlayer.h
//  GJCommonFoundation
//
//  Created by KivenLin on 14-9-16.
//  Copyright (c) 2014年 ConnectSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "GJCFAudioPlayerDelegate.h"
#import "GJCFAudioModel.h"

@interface GJCFAudioPlayer : NSObject

@property (nonatomic,readonly)BOOL isPlaying;

@property (nonatomic,weak)id<GJCFAudioPlayerDelegate> delegate;

- (GJCFAudioModel *)getCurrentPlayingAudioFile;

- (void)playAudioFile:(GJCFAudioModel *)audioFile;

- (void)play;

- (void)stop;

- (void)pause;

- (NSTimeInterval)getLocalWavFileDuration:(NSString *)audioPath;

- (NSInteger)currentPlayAudioFileDuration;

- (NSString *)currentPlayAudioFileLocalPath;


@end

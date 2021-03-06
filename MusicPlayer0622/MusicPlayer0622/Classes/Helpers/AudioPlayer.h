//
//  AudioPlayer.h
//  MusicPlayer0622
//
//  Created by 郑建文 on 15/9/15.
//  Copyright (c) 2015年 Lanou. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AudioPlayer;
@protocol AudioPlayerDelegate<NSObject>
//再播放中每秒都执行的事件
- (void)audioplayerPlayWith:(AudioPlayer *)audioplayer Progress:(float)progress;

//当一首歌曲播放完成之后执行这个时间
- (void)audioplayerDidFinishItem:(AudioPlayer *)audioplayer;


@end


@interface AudioPlayer : NSObject
//指定delegate
@property (nonatomic,assign) id<AudioPlayerDelegate> delegate;

@property (nonatomic,assign) BOOL isPlaying;

+ (AudioPlayer *)sharedPlayer;

- (void)play;

- (void)pause;

- (void)seekToTime:(float)time;

- (void)setPrepareMusicWithURL:(NSString *)urlStr;

@end

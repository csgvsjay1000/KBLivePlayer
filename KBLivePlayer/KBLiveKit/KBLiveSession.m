//
//  KBLiveSession.m
//  KBLivePlayer
//
//  Created by chengshenggen on 7/29/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import "KBLiveSession.h"
#import "KBLiveStreamInfo.h"

@interface KBLiveSession ()

@property(nonatomic,assign)KBLiveType liveType;
@property(nonatomic,strong)KBLiveStreamInfo *streamInfo;

@end

@implementation KBLiveSession

#pragma mark - public method
-(void)startLive:(KBLiveStreamInfo *)streamInfo liveType:(KBLiveType)liveType{
    _streamInfo = streamInfo;
    _liveType = liveType;
    
}

@end

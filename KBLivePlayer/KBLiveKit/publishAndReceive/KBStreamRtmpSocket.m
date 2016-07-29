//
//  KBStreamRtmpSocket.m
//  KBLivePlayer
//
//  Created by chengshenggen on 7/29/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import "KBStreamRtmpSocket.h"
#import "rtmp.h"

@interface KBStreamRtmpSocket (){
    
}

@property (nonatomic, strong) KBLiveStreamInfo *stream;

@end

@implementation KBStreamRtmpSocket

-(instancetype)initWithStream:(KBLiveStreamInfo *)stream{
    self = [super init];
    if (self) {
        _stream = stream;
    }
    return self;
}

@end

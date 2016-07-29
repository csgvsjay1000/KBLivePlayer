//
//  KBLiveSession.h
//  KBLivePlayer
//
//  Created by chengshenggen on 7/29/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger,KBLiveType) {
    /// rtmp格式
    KBLiveRTMP = 0,
    /// tcp 传输flv格式
    KBLiveFLV = 1,
};

@class KBLiveStreamInfo;

@interface KBLiveSession : NSObject

-(void)startLive:(KBLiveStreamInfo *)streamInfo liveType:(KBLiveType)liveType;

@end

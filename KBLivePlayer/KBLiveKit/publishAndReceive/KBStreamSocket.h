//
//  KBStreamSocket.h
//  KBLivePlayer
//
//  Created by chengshenggen on 7/29/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KBLiveStreamInfo.h"

@protocol KBStreamSocket;
@protocol KBStreamSocketDelegate <NSObject>

/** callback socket current status(回调当前网络情况) */
-(void)socketStatus:(id<KBStreamSocket>)socket status:(KBLiveState)status;

-(void)socketDidError:(id<KBStreamSocket>)socket errorCode:(KBLiveSocketErrorCode)errorCode;

@end

@protocol KBStreamSocket <NSObject>

-(void)start;
-(void)stop;
-(instancetype)initWithStream:(KBLiveStreamInfo *)stream;
-(void)setDelegate:(id<KBStreamSocketDelegate>)delegate;

@end

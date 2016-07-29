//
//  KBLiveStreamInfo.h
//  KBLivePlayer
//
//  Created by chengshenggen on 7/29/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 流状态
typedef NS_ENUM(NSUInteger, KBLiveState){
    /// 准备
    KBLiveReady = 0,
    /// 连接中
    KBLivePending = 1,
    /// 已连接
    KBLiveStart = 2,
    /// 已断开
    KBLiveStop = 3,
    /// 连接出错
    KBLiveError = 4
};

typedef NS_ENUM(NSUInteger,KBLiveSocketErrorCode) {
    KBLiveSocketError_PreView               = 201,///< 预览失败
    KBLiveSocketError_GetStreamInfo         = 202,///< 获取流媒体信息失败
    KBLiveSocketError_ConnectSocket         = 203,///< 连接socket失败
    KBLiveSocketError_Verification          = 204,///< 验证服务器失败
    KBLiveSocketError_ReConnectTimeOut      = 205///< 重新连接服务器超时
};

@interface KBLiveStreamInfo : NSObject

@property (nonatomic, copy) NSString *streamId;
#pragma mark -- FLV
@property (nonatomic, copy) NSString *host;
@property (nonatomic, assign) NSInteger port;
#pragma mark -- RTMP
@property (nonatomic, copy) NSString *url;          ///< 接收地址 (RTMP用就好了)

@end

//
//  LBffmpegTool.h
//  LBffmpegDemo
//
//  Created by gold on 17/7/11.
//  Copyright © 2017年 Bison. All rights reserved.
//

#import <Foundation/Foundation.h>
/*----------------解码必须导入-----------------*/
#import "avformat.h"
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
/*-------------------------------------------*/
/*----------------推流必须导入-----------------*/
//#include <libavformat/avformat.h>
#include <libavutil/mathematics.h>
#include <libavutil/time.h>
/*----------------系统摄像头必须导入-----------------*/

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
/*-------------------------------------------*/

/*----------------ffmpeg摄像头必须导入-----------------*/
#include <stdio.h>
#ifdef __cplusplus
extern "C"
{
#endif
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libavdevice/avdevice.h>
    
#ifdef __cplusplus
};
#endif
/*---------------------------------------------------*/

//Refresh Event
#define SFM_REFRESH_EVENT  (SDL_USEREVENT + 1)

#define SFM_BREAK_EVENT  (SDL_USEREVENT + 2)


@interface LBffmpegTool : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate>


@property(nonatomic, strong) AVCaptureSession                *captureSession;
@property(nonatomic, strong) AVCaptureDevice                 *captureDevice;
@property(nonatomic, strong) AVCaptureDeviceInput            *captureDeviceInput;
@property(nonatomic, strong) AVCaptureVideoDataOutput        *captureVideoDataOutput;
@property(nonatomic, assign) CGSize                          videoSize;
@property(nonatomic, strong) AVCaptureConnection             *videoCaptureConnection;
@property(nonatomic, strong) AVCaptureVideoPreviewLayer      *previewLayer;



+(instancetype)sharedInstance;

/*input_str  输入的文件路径
 *output_str 输出的文件路径
 *return 解码后的信息
 */
- (NSString *)decoder:(NSString *)input_str output_str:(NSString *)output_str;

/*
 *
 *input_str  输入的文件路径
 *output_str 输出的推流链接
 *
 */
- (void)pushFlow:(NSString *)input_str output_str:(NSString *)output_rtmpStr;

///iOS系统获取摄像头
- (void)getMovieDevice:(UIView *)view;

///ffmpeg系统获取摄像头
- (void)showDevice;


@end

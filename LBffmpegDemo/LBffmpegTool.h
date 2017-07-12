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
/*----------------推流必须导入-----------------*/

@interface LBffmpegTool : NSObject

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

@end

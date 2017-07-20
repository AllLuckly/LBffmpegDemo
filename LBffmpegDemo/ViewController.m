//
//  ViewController.m
//  LBffmpegDemo
//
//  Created by gold on 17/7/7.
//  Copyright © 2017年 Bison. All rights reserved.
//

#import "ViewController.h"
#import "LBffmpegTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    //解码
//    NSString *info_ns = [[LBffmpegTool sharedInstance] decoder:@"resource.bundle/sintel.mov" output_str:@"resource.bundle/test1.yuv"];
//    NSLog(@"解码后的信息%@",info_ns);
    /*
     *在运行在真机的代码中必须把地址换成你自己的电脑IP（10.10.10.134）（不能再用local 本地了）
     *运行服务器的电脑和手机保证在同一WiFi下
     */
    
    //推流
//    [[LBffmpegTool sharedInstance] pushFlow:@"resource.bundle/war3end.mp4" output_str:@"rtmp://10.10.10.134:1992/liveApp/room"];
        //FFmpeg获取摄像头设备
    //    [[LBffmpegTool sharedInstance] showDevice];
    [[LBffmpegTool sharedInstance]getMovieDevice:self.view];

}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

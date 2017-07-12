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
    
    //推流
    [[LBffmpegTool sharedInstance] pushFlow:@"resource.bundle/war3end.mp4" output_str:@"rtmp://localhost:1991/liveApp/room"];

}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

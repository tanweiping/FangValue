//
//  MineViewController.h
//  FangChuang
//
//  Created by 朱天超 on 13-12-26.
//  Copyright (c) 2013年 蓝色互动. All rights reserved.
//

#import "ParentViewController.h"
#import "AsyncSocket.h"
#import "JSONKit.h"
#import "FangChuangInsiderViewController.h"
@interface MineViewController : ParentViewController<UIScrollViewDelegate>
{
    UIImageView *BJImage;
}
@property (nonatomic,strong)FangChuangInsiderViewController *view;
@end

//
//  KENViewPaiZhen.h
//  KENDivination
//
//  Created by 刘坤 on 14-5-17.
//  Copyright (c) 2014年 ken. All rights reserved.
//

#import "KENViewBase.h"

@interface KENViewPaiZhen : KENViewBase

-(void)showViewWithType:(KENViewType)type;
-(void)jumpToFanPai;

@property (nonatomic, assign) BOOL finishStatus;
@property (assign) BOOL fromMemory;

@end

//
//  YDViewProtocol.h
//  YiDing
//
//  Created by 王隆帅 on 16/3/21.
//  Copyright © 2016年 王隆帅. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZJLViewModelProtocol;

@protocol ZJLViewProtocol <NSObject>

@optional

- (instancetype)initWithViewModel:(id <ZJLViewModelProtocol>)viewModel;

- (void)yd_bindViewModel;
- (void)yd_setupViews;
- (void)yd_addReturnKeyBoard;

@end


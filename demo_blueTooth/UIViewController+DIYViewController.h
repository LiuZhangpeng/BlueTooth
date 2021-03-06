//
//  UIViewController+DIYViewController.h
//  Angel
//
//  Created by LZP on 2017/7/2.
//  Copyright © 2017年 garenge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (DIYViewController)


/**
 警告框 确定/取消

 @param title 标题
 @param message 信息
 @param controllerStyle 控制器样式
 @param yesTitle 确定
 @param yesAction 确定事件
 @param noTitle 取消
 @param noAction 取消事件
 */
- (void)alertControllerWithTitle:(NSString *)title
                         message:(NSString *)message
                  preferredStyle:(UIAlertControllerStyle)controllerStyle
                        YESTitle:(NSString *)yesTitle
                       YESAction:(void(^)())yesAction
                         NOTitle:(NSString *)noTitle
                        NoAction:(void(^)())noAction;


/**
 警告框 事件一/事件二

 @param title 标题
 @param message 信息
 @param controllerStyle 控制器样式
 @param title1 标题1
 @param actionStyle1 样式1
 @param action1 事件1
 @param title2 标题2
 @param actionStyle2 样式2
 @param action2 事件2
 */
- (void)alertControllerWithTitle:(NSString *)title
                         message:(NSString *)message
                  preferredStyle:(UIAlertControllerStyle)controllerStyle
                          Title1:(NSString *)title1
                    ActionStyle1:(UIAlertActionStyle)actionStyle1
                         Action1:(void(^)())action1
                          Title2:(NSString *)title2
                    ActionStyle2:(UIAlertActionStyle)actionStyle2
                         Action2:(void(^)())action2;

/**
 警告框 确定
 
 @param title 标题
 @param message 信息
 @param controllerStyle 控制器样式
 @param yesTitle 确定
 @param yesAction 确定事件
 */
- (void)alertControllerWithTitle:(NSString *)title
                         message:(NSString *)message
                  preferredStyle:(UIAlertControllerStyle)controllerStyle
                        YESTitle:(NSString *)yesTitle
                       YESAction:(void(^)())yesAction;


/**
 警告框 事件
 
 @param title 标题
 @param message 信息
 @param controllerStyle 控制器样式
 @param title1 标题1
 @param actionStyle1 样式1
 @param action1 事件1
 */
- (void)alertControllerWithTitle:(NSString *)title
                         message:(NSString *)message
                  preferredStyle:(UIAlertControllerStyle)controllerStyle
                          Title1:(NSString *)title1
                    ActionStyle1:(UIAlertActionStyle)actionStyle1
                         Action1:(void(^)())action1;

@end

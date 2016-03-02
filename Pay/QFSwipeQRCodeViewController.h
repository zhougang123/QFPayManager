//
//  QFSwipeQRCodeViewController.h
//  Demo
//
//  Created by mac on 16/2/17.
//  Copyright © 2016年 qfpay. All rights reserved.
//

#import <UIKit/UIKit.h>

//void QFAlert(NSString *title, NSString *msg, NSString *buttonText, void (^cancelBlock) ());

@interface QFSwipeQRCodeViewController : UIViewController

@property (nonatomic, copy  ) NSString *leftTitle;             //navigation bar左边按钮的文字

@property (nonatomic, copy  ) NSString *centerTitle;           //navigation bar中间的title

@property (nonatomic, copy  ) UIImage  *guideImage;            //navigation bar右边操作指引显示图片，不设置图片则不显示按钮

@property (nonatomic, copy  ) NSString *scanTips;              //二维码扫描窗口下面的扫描说明

@property (nonatomic, strong) UIColor  *naviBarBackgroundColor;//navigation bar的背景颜色

@property (nonatomic, copy  ) UIColor  *outSquareColor;        //外层框的颜色 默认 蓝色

@property (nonatomic, copy  ) UIColor  *centerSquareColor;      //内层框的颜色 默认绿色

@property (nonatomic, copy  ) UIColor  *scanLineColor;         //中间扫描线的颜色 默认 红色

@property (nonatomic, copy)void (^fetchQRCodeBlock)(NSString *QRCode);  //成功获取二维码的回调

@property (nonatomic, copy)void (^fetchQRCodeFailedBlock)(NSString *errorMsg);  //获取二维码失败的回调

@end

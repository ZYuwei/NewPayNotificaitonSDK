//
//  Re_new_PayNotificationStateApiManager.h
//  PayNotificationSDK
//
//  Created by qiaoming on 2019/1/22.
//  Copyright © 2019年 qiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Re_new_PayNotificationModel.h"
#import <AFNetworking/AFNetworking.h>
#import "Re_new_PayNotificationHTTPResponse.h"

NS_ASSUME_NONNULL_BEGIN

//typedef void (^GMPayStateApiCompleteBlock) (GMNetHTTPResponse *response);
typedef void (^PayNotificationStateApiCompleteBlock) (Re_new_PayNotificationHTTPResponse *response);

@interface Re_new_PayNotificationStateApiManager : AFHTTPSessionManager
+ (Re_new_PayNotificationStateApiManager *)sharedManager;
//支付成功新增后台 通知接口
-(void)checkiOSIAPPayOrderWithPayNotificationModel:(Re_new_PayNotificationModel *)payNotificationModel  complete:(PayNotificationStateApiCompleteBlock)complete;
@end

NS_ASSUME_NONNULL_END

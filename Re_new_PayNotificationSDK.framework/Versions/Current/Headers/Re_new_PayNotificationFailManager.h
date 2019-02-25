//
//  Re_new_PayNotificationFailManager.h
//  FMDB
//
//  Created by qiaoming on 2018/12/27.
//

#import <Foundation/Foundation.h>
#import "Re_new_PayNotificationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface Re_new_PayNotificationFailManager : NSObject

//通知服务器的内容先缓存到本地 再上传
+(void)saveToCacheWithProductId:(NSString *)product_id;
+(Re_new_PayNotificationModel*)unSerializedStatisticBeanFromFile:(NSString*)serializedBeanPath;
+(void)delSerializedBean:(Re_new_PayNotificationModel*)bean;
+(NSArray <Re_new_PayNotificationModel *>*)getSerializedStatisticBeanLst;
//再次上传失败的通知记录
+(void)retryUploadPaynotificationRecordFormLocal;
@end

NS_ASSUME_NONNULL_END

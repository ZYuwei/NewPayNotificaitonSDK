//
//  GMPayNotificationModel.h
//  FMDB
//
//  Created by qiaoming on 2018/12/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Re_new_PayNotificationModel : NSObject<NSCoding>

@property (nonatomic, copy) NSString *uuid;

@property (nonatomic, copy) NSString *product_id;

@property (nonatomic, copy) NSString *receipt;

@end

NS_ASSUME_NONNULL_END

//
//  AccountRepository.h
//  OCleanup
//
//  Created by JoshLin on 2018/8/26.
//  Copyright © 2018年 JoshLin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AccountInfoModel.h"

@interface AccountRepository : NSObject

+ (instancetype)sharedInstance;

- (AccountInfoModel*)getAccountInfo;

- (void)removeAccountInfo;


- (void)loadAccountInfoFromAccountID:(NSString*)accountId;
- (void)loadAccountPhotoFromAccountID:(NSString*)accountId;
@end
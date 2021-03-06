//
//  XXUser.h
//  XXWB
//
//  Created by 刘超 on 14/12/18.
//  Copyright (c) 2014年 Leo. All rights reserved.
//  微博用户模型

#import <Foundation/Foundation.h>

@interface XXUser : NSObject

/** 用户id */
@property (nonatomic, copy) NSString *idstr;
/** 用户头像 */
@property (nonatomic, copy) NSString *profile_image_url;
/** 用户昵称 */
@property (nonatomic, copy) NSString *name;
/** vip类型 */
@property (nonatomic, assign) int mbtype;
/** vip等级 */
@property (nonatomic, assign) int mbrank;

@end

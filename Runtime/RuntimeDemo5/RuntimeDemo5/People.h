//
//  People.h
//  RuntimeDemo5
//
//  Created by daiyan on 16/6/17.
//  Copyright © 2016年 DaiYan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface People : NSObject

@property (nonatomic, copy) NSString *name; //姓名
@property (nonatomic, strong) NSNumber *age; //年龄
@property (nonatomic, copy) NSString *occupation; //职业
@property (nonatomic, copy) NSString *nationality; //国籍

///生成Model
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

///转换成字典
- (NSDictionary *)coverToDictionary;

@end

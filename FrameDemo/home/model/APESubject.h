//
//  APESubject.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    APEUserSubject0,
    APEUserSubject1,
    APEUserSubject2,
} APEUserSubjectStatus;

@interface APESubject : NSObject

@property (nonatomic, strong, nullable) NSNumber *id;
@property (nonatomic, strong, nullable) NSString *name;

@end

@interface APEUserSubject : NSObject

@property (nonatomic, strong, nullable) NSNumber *id;
@property (nonatomic, strong, nullable) NSNumber *updatedTime;
///  On or Off
@property (nonatomic) APEUserSubjectStatus status;

@end
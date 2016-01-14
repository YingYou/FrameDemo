//
//  APESubjectDataController.h
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEBaseDataController.h"
#import "APEHomePracticeDataController.h"

@interface APESubjectDataController : APEBaseDataController

-(void)requestAllSubjectsWithCallback:(APEDataCallback)callback;

@end

//
//  APEHomePraticeViewController.h
//  FrameDemo
//
//  Created by yw on 16/1/13.
//  Copyright © 2016年 yw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "APEHomePracticeDataController.h"
#import "APEHomePracticeActivityView.h"
#import "APEHomePracticeBannerView.h"
#import "APEHomePracticeSubjectsView.h"

@interface APEHomePraticeViewController : UIViewController

@property (nonatomic, strong, nullable) UIScrollView *contentView;

@property (nonatomic, strong, nullable) APEHomePracticeBannerView *bannerView;
@property (nonatomic, strong, nullable) APEHomePracticeActivityView *activityView;
@property (nonatomic, strong, nullable) APEHomePracticeSubjectsView *subjectsView;

@property (nonatomic, strong, nullable) APEHomePracticeDataController *dataController;

@end

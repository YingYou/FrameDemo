//
//  APEHomePraticeViewController.m
//  FrameDemo
//
//  Created by yw on 16/1/13.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEHomePraticeViewController.h"
#import "APEHomePracticeSubjectsViewModel.h"

@interface APEHomePraticeViewController ()<APEHomePracticeSubjectsViewDelegate>

@end

@implementation APEHomePraticeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
}

- (void)setupContentView {
    self.contentView = [[UIScrollView alloc] init];
    [self.view addSubview:self.contentView];
    
    self.bannerView = [[APEHomePracticeBannerView alloc] init];
    self.activityView = [[APEHomePracticeActivityView alloc] init];
    self.subjectsView = [[APEHomePracticeSubjectsView alloc] init];
    self.subjectsView.delegate = self;
    
    [self.contentView addSubview:self.bannerView];
    [self.contentView addSubview:self.activityView];
    [self.contentView addSubview:self.subjectsView];
    // Layout Views ...
}

- (void)fetchSubjectData {
    [self.dataController requestSubjectDataWithCallback:^(NSError *error) {
        if (error == nil) {
            [self renderSubjectView];
        }
    }];
}

- (void)renderSubjectView {

    APEHomePracticeSubjectsViewModel *viewModel = [APEHomePracticeSubjectsViewModel viewModelWithSubjects:self.dataController.openSubjects];
    [self.subjectsView bindDataWithViewModel:viewModel];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

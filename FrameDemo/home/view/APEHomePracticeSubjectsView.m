//
//  APEHomePracticeSubjectsView.m
//  FrameDemo
//
//  Created by yw on 16/1/14.
//  Copyright © 2016年 yw. All rights reserved.
//

#import "APEHomePracticeSubjectsView.h"

@implementation APEHomePracticeSubjectsView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

-(void)bindDataWithViewModel:(APEHomePracticeSubjectsViewModel*)viewModel{

  //  self.viewModel = viewModel;
    //self.backgroundColor = viewModel.backgroundColor;
    //[self.collectionView reloadData];
    [self setNeedsUpdateConstraints];
}


//- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:
//(NSIndexPath *)indexPath {
//    APEHomePracticeSubjectsCollectionViewCell *cell = [collectionView
//                                                       dequeueReusableCellWithReuseIdentifier:@"Cell" forIndexPath:indexPath];
//    if (0 <= indexPath.row && indexPath.row < self.viewModel.cellViewModels.count) {
//        APEHomePracticeSubjectsCollectionCellViewModel *vm =
//        self.viewModel.cellViewModels[indexPath.row];
//        [cell bindDataWithViewModel:vm];
//    }
//    return cell;
//}

@end

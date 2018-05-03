//
//  TableViewController.m
//  IDCardOCRDemo
//
//  Created by iOS Pan on 2018/5/3.
//  Copyright © 2018年 PanPan. All rights reserved.
//

#import "TableViewController.h"
#import "CaptureViewController.h"

@interface TableViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *userImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *genderLabel;
@property (weak, nonatomic) IBOutlet UILabel *nationLabel;
@property (weak, nonatomic) IBOutlet UILabel *adresslabel;
@property (weak, nonatomic) IBOutlet UILabel *IDNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *authorityLabel;
@property (weak, nonatomic) IBOutlet UILabel *validityLabel;

@end

@implementation TableViewController
#pragma mark - Life Circle
- (void)viewDidLoad {
    [super viewDidLoad];
    self.tableView.rowHeight = 45;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

/**
 身份证正面扫描

 @param sender 按钮
 */
- (IBAction)IDCardFrontClick:(UIButton *)sender {
    CaptureViewController *captureViewController = [[CaptureViewController alloc] init];
    captureViewController.scanType = FrontOfIDCardScan;
    __weak __typeof(self)weakSelf = self;
    captureViewController.IDCardInfoBlock = ^(IDCardModel *result, UIImage *image) {
        weakSelf.userImageView.image = image;
        weakSelf.IDNumberLabel.text = result.IDNumber;
        weakSelf.nameLabel.text = result.name;
        weakSelf.genderLabel.text = result.gender;
        weakSelf.nationLabel.text = result.nation;
        weakSelf.adresslabel.text = result.address;
        weakSelf.authorityLabel.text = result.authority;
        weakSelf.validityLabel.text = result.validity;
    };
    [self.navigationController pushViewController:captureViewController animated:YES];
}

/**
 身份证背面扫描

 @param sender 按钮
 */
- (IBAction)IDCardBackClick:(UIButton *)sender {
    CaptureViewController *captureViewController = [[CaptureViewController alloc] init];
    captureViewController.scanType = BackOfIDCardScan;
    __weak __typeof(self)weakSelf = self;
    captureViewController.IDCardInfoBlock = ^(IDCardModel *result, UIImage *image) {
        weakSelf.userImageView.image = image;
        weakSelf.IDNumberLabel.text = result.IDNumber;
        weakSelf.nameLabel.text = result.name;
        weakSelf.genderLabel.text = result.gender;
        weakSelf.nationLabel.text = result.nation;
        weakSelf.adresslabel.text = result.address;
        weakSelf.authorityLabel.text = result.authority;
        weakSelf.validityLabel.text = result.validity;
    };
    [self.navigationController pushViewController:captureViewController animated:YES];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 7;
}

@end

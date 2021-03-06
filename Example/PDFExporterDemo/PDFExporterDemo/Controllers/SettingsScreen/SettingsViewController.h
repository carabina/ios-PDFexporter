//
//  SettingsViewController.h
//  PDFExporterDemo
//
//  Copyright © 2015 3Pillar Global. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SettingsViewController;

@protocol SettingsViewControllerDelegate <NSObject>

- (void)settingsViewController:(SettingsViewController *)settingsViewController didChangePaperSize:(CGSize)paperSize;
- (void)settingsViewController:(SettingsViewController *)settingsViewController didChangePaperInsets:(UIEdgeInsets)paperInsets;

@end

@interface SettingsViewController : UIViewController

@property (weak, nonatomic) id<SettingsViewControllerDelegate> delegate;

@property (nonatomic) UIEdgeInsets contentPaperInsets;
@property (nonatomic) CGSize paperSize;

@end

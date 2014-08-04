//
//  DetailViewController.h
//  BlogReader
//
//  Created by Kevin Egstorf on 04/08/14.
//  Copyright (c) 2014 devcodechef. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

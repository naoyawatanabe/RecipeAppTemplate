//
//  RecipeDetailViewController.h
//  RecipeApp
//
//  Created by nao on 2014/03/10.
//  Copyright (c) 2014年 Appcoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeDetailViewController : UIViewController

@property (nonatomic, weak) IBOutlet UILabel *recipeLabel;
@property (nonatomic, weak) NSString *recipeName;

@end

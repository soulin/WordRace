//
//  GameOverViewController.h
//  wordrace
//
//  Created by Taha Selim Bebek on 8/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Facebook.h"
#import "MGTwitterEngine.h"

#define FACEBOOKAPPID @"107620642677158"
#define FACEBOOKAPPSECRET @"7b4e98effc1afdafae4abd97a066d363"

@interface GameOverViewController : UIViewController <FBSessionDelegate,FBDialogDelegate,MGTwitterEngineDelegate>
{
    UILabel* gameOverTitleLabel;

    UILabel* nameLabel;
    UILabel* scoreLabel;
    UILabel* highScoreLabel;
    
    UILabel* nameTitleLabel;
    UILabel* scoreTitleLabel;
    UILabel* highScoreTitleLabel;
    
    NSString* name;
    NSUInteger score;
    NSUInteger highScore;
    
    UIViewController* parentGamePlayViewController;
    NSUInteger currentGameMode;
    NSUInteger currentLevel;
    
    UILabel* restartLabel;
    UILabel* scoresLabel;
    UILabel* postToFacebookLabel;
    UIImageView* postToFacebookImage;
    UILabel* postToTwitterLabel;
    UIImageView* postToTwitterImage;
    UILabel* goToMainMenuLabel;
    UILabel* moreGamesLabel;
    
    Facebook* facebook;
    MGTwitterEngine* twitterEngine;
    OAToken *token;
    NSString* gameMode;
}
@property(nonatomic,retain) IBOutlet UILabel* gameOverTitleLabel;
@property(nonatomic,assign) UIViewController* parentGamePlayViewController;
@property(nonatomic,assign) NSUInteger currentGameMode;
@property(nonatomic,assign) NSUInteger currentLevel;
@property(nonatomic,retain) IBOutlet UILabel* nameLabel;
@property(nonatomic,retain) IBOutlet UILabel* scoreLabel;
@property(nonatomic,retain) IBOutlet UILabel* highScoreLabel;
@property(nonatomic,retain) IBOutlet UILabel* nameTitleLabel;
@property(nonatomic,retain) IBOutlet UILabel* scoreTitleLabel;
@property(nonatomic,retain) IBOutlet UILabel* highScoreTitleLabel;
@property(nonatomic,retain) NSString* name;
@property(nonatomic,assign) NSUInteger score;
@property(nonatomic,assign) NSUInteger highScore;

@property(nonatomic,retain) IBOutlet UILabel* restartLabel;
@property(nonatomic,retain) IBOutlet UILabel* scoresLabel;
@property(nonatomic,retain) IBOutlet UILabel* postToFacebookLabel;
@property(nonatomic,retain) IBOutlet UIImageView* postToFacebookImage;
@property(nonatomic,retain) IBOutlet UILabel* postToTwitterLabel;
@property(nonatomic,retain) IBOutlet UIImageView* postToTwitterImage;
@property(nonatomic,retain) IBOutlet UILabel* goToMainMenuLabel;
@property(nonatomic,retain) IBOutlet UILabel* moreGamesLabel;
@property(nonatomic,retain) Facebook* facebook;
@property(nonatomic,retain) MGTwitterEngine* twitterEngine;
@property(nonatomic,retain) OAToken *token;
@property(nonatomic,retain) NSString* gameMode;

-(IBAction)restartGame:(id)sender;
-(IBAction)goToMainMenu:(id)sender;
-(IBAction)postToFacebook:(id)sender;
-(IBAction)postToTwitter:(id)sender;
-(IBAction)showScores:(id)sender;
-(IBAction)showMoreGames:(id)sender;

-(IBAction)restartGameTouchDown:(id)sender;
-(IBAction)goToMainMenuTouchDown:(id)sender;
-(IBAction)postToFacebookTouchDown:(id)sender;
-(IBAction)postToTwitterTouchDown:(id)sender;
-(IBAction)showScoresTouchDown:(id)sender;
-(IBAction)showMoreGamesTouchDown:(id)sender;

-(IBAction)restartGameTouchCancel:(id)sender;
-(IBAction)goToMainMenuTouchCancel:(id)sender;
-(IBAction)postToFacebookTouchCancel:(id)sender;
-(IBAction)postToTwitterTouchCancel:(id)sender;
-(IBAction)showScoresTouchCancel:(id)sender;
-(IBAction)showMoreGamesTouchCancel:(id)sender;

-(IBAction)restartGameTouchDragExit:(id)sender;
-(IBAction)goToMainMenuTouchDragExit:(id)sender;
-(IBAction)postToFacebookTouchDragExit:(id)sender;
-(IBAction)postToTwitterTouchDragExit:(id)sender;
-(IBAction)showScoresTouchDragExit:(id)sender;
-(IBAction)showMoreGamesTouchDragExit:(id)sender;

@end

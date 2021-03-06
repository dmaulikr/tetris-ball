//
//  GameScene.h
//  tetris-ball
//

//  Copyright (c) 2016 Ideia do Luiz. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "View.h"
#import "ShapeBackground.h"

@protocol GameSceneTimerDelegate <NSObject>

@optional
- (void) didUpdateTimerWithParentScene:(SKScene *)gameScene;
- (void) didUpdateTimerDelayWithParentScene:(SKScene *)gameScene;
- (void) didUpdateParentScene:(SKScene *)gameScene;

@end

@interface GameScene : SKScene

@property (nonatomic, weak) id<ViewDelegate> viewDelegate;
@property (nonatomic)  NSMutableArray<id<GameSceneTimerDelegate>> *timerDelegateArr;
@property (nonatomic) ShapeBackground *background;
@property (nonatomic) ShapeBackground *background2;


- (void) moveToPage:(id<ViewDelegate>)page;

@end

//
//  View.h
//  tetris-ball
//
//  Created by CICCC1 on 2016-05-25.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Spritekit/SpriteKit.h>

#define FONT_TYPE @"Arcade"

@protocol ViewDelegate <NSObject>

- (void) viewClickReceivedWithLocation:(CGPoint)location;
- (void) buildViewWithParent:(SKScene *)parent;

@end

@interface View : NSObject

@end

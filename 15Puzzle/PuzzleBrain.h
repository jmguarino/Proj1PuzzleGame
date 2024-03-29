//
//  PuzzleBrain.h
//  15Puzzle
//
//  Created by student on 2/23/15.
//  Copyright (c) 2015 JustinGuarino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PuzzleBrain : NSObject
-(void) addButtons:(NSMutableArray*) buttons;
-(void) resetGame:(NSMutableArray*) buttons;
-(void) moveButton: (NSString*) direction;
-(BOOL) shouldTheGameContinue;
-(BOOL) isAnimating;
-(void) shuffleBoard:(int) num;
@end
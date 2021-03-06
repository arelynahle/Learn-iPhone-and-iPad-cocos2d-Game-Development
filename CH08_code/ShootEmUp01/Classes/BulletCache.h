//
//  BulletCache.h
//  ShootEmUp
//
//  Created by Steffen Itterheim on 18.08.10.
//  Copyright 2010 Steffen Itterheim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface BulletCache : CCNode 
{
	CCSpriteBatchNode* batch;
	int nextInactiveBullet;
}

-(void) shootBulletAt:(CGPoint)startPosition velocity:(CGPoint)velocity frameName:(NSString*)frameName;

@end

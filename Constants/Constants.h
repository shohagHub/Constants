//
//  Constants.h
//  Constants
//
//  Created by Saleh Enam Shohag on 24/11/18.
//  Copyright © 2018 Nazia Afroz. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Constants : NSObject
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
-(BOOL)isIphone;
@end

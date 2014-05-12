//
//  XYZToDoItem.h
//  Hello World
//
//  Created by Riccardo Mutschlechner on 5/11/14.
//  Copyright (c) 2014 Riccardo Mutschlechner. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
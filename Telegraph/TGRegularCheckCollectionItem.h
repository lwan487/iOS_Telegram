/*
 * This is the source code of BTCchat for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGCollectionItem.h"

@interface TGRegularCheckCollectionItem : TGCollectionItem

@property (nonatomic, strong) NSString *title;
@property (nonatomic) bool isChecked;
@property (nonatomic) SEL action;

- (instancetype)initWithTitle:(NSString *)title action:(SEL)action;

@end

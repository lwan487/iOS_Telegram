/*
 * This is the source code of BTCchat for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGActor.h"

#import "TL/TLMetaScheme.h"

@interface TGEncryptedChatResponseActor : TGActor

- (void)dhRequestSuccess:(TLmessages_DhConfig *)config;
- (void)dhRequestFailed;

- (void)acceptEncryptedChatSuccess:(TLEncryptedChat *)encryptedChat date:(int)date;
- (void)acceptEncryptedChatFailed;

@end
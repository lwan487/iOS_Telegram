/*
 * This is the source code of BTCchat for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGActor.h"

#import "TL/TLMetaScheme.h"

@interface TGSynchronizePreferencesActor : TGActor

- (void)preferencesRequestSuccess:(TLhelp_AppPrefs *)preferences;
- (void)preferencesRequestFailed;

@end

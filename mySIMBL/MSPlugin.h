//
//  MSPlugin.h
//  mySIMBL
//
//  Created by Wolfgang Baird on 6/22/17.
//  Copyright © 2017 Wolfgang Baird. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSPlugin : NSObject
    
// Local or Repo
@property NSString      *bundleID;  // Must be unique
@property NSString      *bundleImage;

// Repo Files
@property NSDictionary  *webPlist;
@property NSString      *webDeveloperDonate;
@property NSString      *webDeveloperEmail;
@property NSString      *webRepository;
@property NSString      *webName;
@property NSString      *webDescription;
@property NSString      *webDescriptionShort;
@property NSString      *webTarget;
@property NSString      *webPublishDate;
@property NSString      *webVersion;
@property NSString      *webPrice;
@property NSString      *webDeveloper;
@property NSString      *webCompatability;
@property NSString      *webFileName;
@property NSString      *webSize;

// Local Files
@property NSDictionary  *localPlist;
@property NSString      *localName;
@property NSString      *localVersion;
@property NSString      *localDescription;
@property NSString      *localPath;
@property NSString      *localSize;
@property Boolean       needsUpdate;
@property Boolean       isInstalled;
@property Boolean       isEnabled;

@end

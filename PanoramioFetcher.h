//
//  PanoramioFetcher.h
//  PhotoCity
//
//  Created by Ruthwick Pathireddy on 8/28/14.
//  Copyright (c) 2014 Darkking. All rights reserved.
//

#import <Foundation/Foundation.h>

// Key to photos array from the Panoramio results
#define PANORAMIO_RESULTS_PHOTO @"photos"

// Keys to get photo information from a photo dictionary
#define PANORAMIO_PHOTO_LATITUDE @"latitude"
#define PANORAMIO_PHOTO_LONGITUDE @"longitude"
#define PANORAMIO_PHOTO_FILE_URL @"photo_file_url"
#define PANORAMIO_PHOTO_TITLE @"photo_title"
#define PANORAMIO_PHOTO_OWNER @"owner_name"
#define PANORAMIO_PHOTO_OWNER_URL @"owner_url"
#define PANORAMIO_PHOTO_ID @"photo_id"

// Photo Formats
#define PanoramioPhotoFormatOriginal @"original"
#define PanoramioPhotoFormatMedium @"medium"
#define PanoramioPhotoFormatSmall @"small"
#define PanoramioPhotoFormatThumbnail @"thumbnail"
#define PanoramioPhotoFormatSquare @"square"
#define PanoramioPhotoFormatMiniSquare @"mini_square"

@interface PanoramioFetcher : NSObject

// Returns URL for the top popular photos given a
// geographic range (max 100). Default photo size is medium
+ (NSURL *)URLForPopularPhotosFromMinLatitude:(float) minLatitude
                                 MinLongitude:(float) minLongitude
                                  MaxLatitude:(float) maxLatitude
                                 MaxLongitude:(float) maxLongitude;


// Returns URL for the top popular photos given a
// geographic range (max 100). Photo size is determined by format
+ (NSURL *)URLForPopularPhotosFromMinLatitude:(float) minLatitude
                                 MinLongitude:(float) minLongitude
                                  MaxLatitude:(float) maxLatitude
                                 MaxLongitude:(float) maxLongitude
                                    photoFormat:(NSString *)photoFormat;

// Returns a url for popular photos in a medium photo
// format size (max 100)
+ (NSURL *)URLforPopularPhotos;

// Returns a url for popular photos in a specific photo
// format size (max 100)
+ (NSURL *)URLforPopularPhotos:(NSString *)photoFormat;


@end

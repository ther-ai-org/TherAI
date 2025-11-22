#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The "AppIconDisplay" asset catalog image resource.
static NSString * const ACImageNameAppIconDisplay AC_SWIFT_PRIVATE = @"AppIconDisplay";

/// The "icons8-google-48 copy" asset catalog image resource.
static NSString * const ACImageNameIcons8Google48Copy AC_SWIFT_PRIVATE = @"icons8-google-48 copy";

#undef AC_SWIFT_PRIVATE

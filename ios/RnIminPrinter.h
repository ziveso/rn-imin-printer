
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnIminPrinterSpec.h"

@interface RnIminPrinter : NSObject <NativeRnIminPrinterSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnIminPrinter : NSObject <RCTBridgeModule>
#endif

@end

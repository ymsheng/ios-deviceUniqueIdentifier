//
//  UIDevice(Identifier).h
//  UIDeviceAddition
//
//  Created by Georg Kitz on 20.08.11.
//  Copyright 2011 Aurora Apps. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UIDevice (IdentifierAddition)

/*
 * @method uniqueDeviceIdentifier
 * @description use this method when you need a unique identifier in one app.
 * It generates a hash from the MAC-address in combination with the bundle identifier
 * of your app.
 */

- (NSString *) uniqueDeviceIdentifier;

/*
 * @method uniqueGlobalDeviceIdentifier
 * @description use this method when you need a unique global identifier to track a device
 * with multiple apps. as example a advertising network will use this method to track the device
 * from different apps.
 * It generates a hash from the MAC-address only.
 */

- (NSString *) uniqueGlobalDeviceIdentifier;

/*
 * @method uniqueAdvertisingIdentifier
 * @description In iOS 7 and later, if you ask for the MAC address of an iOS device, the system returns the value 02:00:00:00:00:00. 
 * If you need to identify the device, use the identifierForVendor  property of UIDevice instead. 
 * Apps that need an identifier for their own advertising purposes should consider using the advertisingIdentifier  property of ASIdentifierManager instead.
 */
- (NSString *) uniqueAdvertisingIdentifier;

- (NSString *) mydeviceUniqueIdentifier;

@end

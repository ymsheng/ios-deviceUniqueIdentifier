ios-deviceUniqueIdentifier
==========================

介于ios7.0后访问MAC address of an iOS device,系统只返回 02:00:00:00:00:00，做了根据系统返回md5后的唯一标识


In iOS 7 and later, if you ask for the MAC address of an iOS device, the system returns the value 02:00:00:00:00:00.
If you need to identify the device, 
use the identifierForVendor  property of UIDevice instead. 
(Apps that need an identifier for their own advertising purposes should consider using the advertisingIdentifier  property of ASIdentifierManager instead.)


很早就不用uidevice 里面id了，6.0或之前都在用mac地址md5后做为设备的唯一标识，

但是最近发布的ios7，说是都会返回一个固定的string

所以用advertisingIdentifier做md5后作为设备的唯一标识

详情查看  "UIDevice+IdentifierAddition.h"

- (NSString *) mydeviceUniqueIdentifier 此方法会根据系统小于7.0，会用mac地址md5后作为唯一标识，反之用advertisingIdentifier！

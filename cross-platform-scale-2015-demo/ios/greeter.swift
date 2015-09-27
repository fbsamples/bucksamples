import Foundation

@objc public class SwiftGreeter : NSObject {
  public class func sayHello() -> String {
    let hello = String(UTF8String: helloString()) ?? "(greeting could not be decoded)"
    return "Swift says: " + hello;
  }
}

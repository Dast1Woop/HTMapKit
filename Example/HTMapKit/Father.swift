//
//  HTMDemoTest.swift
//  HTMapKit_Example
//
//  Created by LongMa on 2021/7/23.
//  Copyright © 2021 641540230@qq.com. All rights reserved.
//

import Foundation
import HTMapKit

@objcMembers
@objc public class Father:NSObject{
    public func hello()  {
        let mapv = HTMapView.init()
        print("swift-mapV,hello:",mapv)
        
        let testOC = HTMDemoTestOC.init()
        print(testOC)
    }
}

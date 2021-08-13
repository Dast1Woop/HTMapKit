#
# Be sure to run `pod lib lint HTMapKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HTMapKit'
  s.version          = '0.9.0'
  s.summary          = 'A short description of HTMapKit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  HTMapKit,based on MAMapkit
                       DESC

  s.homepage         = 'https://github.com/Dast1Woop/HTMapKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '641540230@qq.com' => 'myldast1@126.com' }
  s.source           = { :git => 'https://github.com/Dast1Woop/HTMapKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  #s.requires_arc = true#默认为true了

#  s.source_files = 'HTMapKit/Classes/**/*'
  
  # s.resource_bundles = {
  #   'HTMapKit' => ['HTMapKit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'Foundation'
  s.dependency 'AFNetworking', '~>4.0.1'
  s.dependency 'YYModel', '~> 1.0.4'
  #,:modular_headers => true #not supported
  
  s.dependency 'AMap3DMap-NO-IDFA', '~>7.9.0'
  
  s.dependency 'SnapKit', '~>5.0.1'
  
  s.pod_target_xcconfig = { "DEFINES_MODULE" => "YES" }
  
  s.swift_versions = ['4.0', '4.2', '5.0']
  
  s.pod_target_xcconfig = {
      'OTHER_LDFLAGS' => '-lObjC',
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.static_framework = true
  
  #表示pod库项目依赖自己的framework
  s.vendored_frameworks = 'HTMapKit/*.{framework}'
  #s.resource = 'HTMapBundle.bundle'#会报错,用 below
#  s.resource_bundles = {
#      'HTMapBundle' => ['IndoorMapFramework/HTMapBundle/*.xcassets']
#  }
end

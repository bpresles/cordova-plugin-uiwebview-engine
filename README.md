<!--
# license: Licensed to the Apache Software Foundation (ASF) under one
#         or more contributor license agreements.  See the NOTICE file
#         distributed with this work for additional information
#         regarding copyright ownership.  The ASF licenses this file
#         to you under the Apache License, Version 2.0 (the
#         "License"); you may not use this file except in compliance
#         with the License.  You may obtain a copy of the License at
#
#           http://www.apache.org/licenses/LICENSE-2.0
#
#         Unless required by applicable law or agreed to in writing,
#         software distributed under the License is distributed on an
#         "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
#         KIND, either express or implied.  See the License for the
#         specific language governing permissions and limitations
#         under the License.
-->

|AppVeyor|Travis CI|
|:-:|:-:|
|[![Build status](https://ci.appveyor.com/api/projects/status/github/bpresles/cordova-plugin-uiwebview-engine?branch=master)](https://ci.appveyor.com/project/bpresles/cordova-plugin-uiwebview-engine)|[![Build Status](https://travis-ci.org/bpresles/cordova-plugin-uiwebview-engine.svg?branch=master)](https://travis-ci.org/bpresles/cordova-plugin-uiwebview-engine)|

Cordova UIWebView Engine
======

This plugin makes `Cordova` use the `UIWebView` component instead of the default `UIWebView` component.

Installation
-----------

This plugin needs cordova-ios >4.0.0.

To install the current release:

    cordova create uiwvtest my.project.id uiwvtest
    cd uiwvtest
    cordova platform add ios@4
    cordova plugin add cordova-plugin-uiwebview-engine

To test the development version:

    cordova create uiwvtest my.project.id wkwvtest
    cd uiwvtest
    cordova platform add https://github.com/apache/cordova-ios.git#master
    cordova plugin add https://github.com/apache/cordova-plugin-uiwebview-engine.git#master

You also must have at least Xcode 7 (iOS 9 SDK) installed. Check your Xcode version by running:

    xcode-select --print-path

Required Permissions
-----------
UIWebView may not fully launch (the deviceready event may not fire) unless if the following is included in config.xml. This should already be installed by Cordova in your platform config.xml when the plugin is installed.

#### config.xml

```xml
<feature name="BPRUIWebViewEngine">
  <param name="ios-package" value="BPRUIWebViewEngine" />
</feature>

<preference name="CordovaWebViewEngine" value="BPRUIWebViewEngine" />
```

Application Transport Security (ATS) in iOS 9
-----------

Starting with [cordova-cli 5.4.0](https://www.npmjs.com/package/cordova), it will support automatic conversion of the [&lt;access&gt;](http://cordova.apache.org/docs/en/edge/guide/appdev/whitelist/index.html) tags in config.xml to Application Transport Security [ATS](https://developer.apple.com/library/prerelease/ios/documentation/General/Reference/InfoPlistKeyReference/Articles/CocoaKeys.html#//apple_ref/doc/uid/TP40009251-SW33) directives.

Upgrade to at least version 5.4.0 of the cordova-cli to use this new functionality.

Supported Platforms
-------------------

- iOS

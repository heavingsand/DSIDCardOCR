# DSIDCardOCR

![Platform](https://img.shields.io/badge/platform-iOS-red.svg)
![Language](https://img.shields.io/badge/Language-Object--C-blue.svg)
![Version](https://img.shields.io/badge/version-1.0.1-brightgreen.svg)

## 项目简介
二代身份证扫描,可自动快速读出身份证上的信息（姓名、性别、民族、住址、身份证号码）并截取到身份证图像

![](https://github.com/HappyDeveloperPan/DSIDCardOCR/blob/master/291525340899.jpg)

## Usage
将该功能集成到你开发的app里:

```
1、请把IDCardRecognition文件夹拖入到你的项目里；

2、在你的项目的Info.plist文件中，添加相应权限描述（Key, Value）

Privacy - Camera Usage Description              是否允许访问相机

Privacy - Photo Library Usage Description       是否允许访问相册

3、在Build Setting里面搜索BitCode, 将YES改为NO

4、在你的项目中的相应处导入CaptureViewController头文件: 

#import "CaptureViewController.h"

在使用该功能的地方初始化控制器, 并且选择身份证正反面, 已经在结果回调(result和image)里面处理相关逻辑：

CaptureViewController *captureVC = [[CaptureViewController alloc] init];

captureViewController.scanType = BackOfIDCardScan;

captureViewController.IDCardInfoBlock = ^(IDCardModel *result, UIImage *image) {
    ......
};

[self.navigationController pushViewController:captureVC animated:YES];

```

## 参考
---

[快速高效 | iOS身份证识别](http://www.cocoachina.com/ios/20180105/21764.html)

[参考demo](https://github.com/xiaohange/IDCardRecognition)

---

## Author

DriftSand, 943147350@qq.com

//
//  BAUser.h
//  BAQMUIDemo
//
//  Created by 博爱 on 2017/2/23.
//  Copyright © 2017年 boaihome. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BAUser : NSObject

@property (nonatomic, copy) NSString *user_Name;
@property (nonatomic, copy) NSString *user_Id;
@property (nonatomic, copy) NSString *user_Image_url;
@property (nonatomic, copy) UIImage  *user_Image;
@property (nonatomic, copy) NSString *user_PhoneNumber;
/*！密码 */
@property (nonatomic, copy) NSString  *pwd;

/*！用户识别码：唯一【登录后才有】 */
@property (nonatomic, copy  ) NSString  *userCode;


@end

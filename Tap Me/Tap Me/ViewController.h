//
//  ViewController.h
//  Tap Me
//
//  Created by Apple on 2017/10/11.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLable;
    IBOutlet UILabel *timeLable;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
}

- (IBAction)buttonPressed;


@end


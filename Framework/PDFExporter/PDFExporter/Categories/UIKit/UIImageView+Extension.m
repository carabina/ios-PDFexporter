//
//  UIImageView+Extension.m
//  PDFExporter
//
//  Copyright © 2015 3Pillar Global. All rights reserved.
//

#import "UIImageView+Extension.h"
#import "UIView+SubclassExtension.h"

@implementation UIImageView (Extension)

- (void)drawContentWithPath:(UIBezierPath *)path {
    [super drawContentWithPath:path];
    
    CGContextRef context = UIGraphicsGetCurrentContext();
    if (self.clipsToBounds) {
        CGContextSaveGState(context);
        CGContextAddPath(context, path.CGPath);
        CGContextClip(context);
    }
    [self.image drawInRect:path.bounds];
    if (self.clipsToBounds) {
        CGContextRestoreGState(context);
    }
}

@end

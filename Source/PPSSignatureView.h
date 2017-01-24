#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol PPSSignatureViewDelegate <NSObject>

- (BOOL)shouldEraseOnLongPress;

@end

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

@property (weak, nonatomic) id<PPSSignatureViewDelegate> signatureDelegate;

- (void)erase;

@end

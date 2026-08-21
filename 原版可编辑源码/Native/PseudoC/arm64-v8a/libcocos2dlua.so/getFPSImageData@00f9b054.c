
/* cocos2d::Director::getFPSImageData(unsigned char**, long*) */

void __thiscall cocos2d::Director::getFPSImageData(Director *this,uchar **param_1,long *param_2)

{
  uint uVar1;
  
  *param_1 = &cc_fps_images_png;
  uVar1 = cc_fps_images_len((int)this);
  *param_2 = (ulong)uVar1;
  return;
}


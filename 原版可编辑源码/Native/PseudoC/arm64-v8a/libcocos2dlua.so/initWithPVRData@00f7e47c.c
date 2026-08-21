
/* cocos2d::Image::initWithPVRData(unsigned char const*, long) */

undefined8 __thiscall cocos2d::Image::initWithPVRData(Image *this,uchar *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = initWithPVRv2Data(this,param_1,param_2);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = initWithPVRv3Data(this,param_1,param_2);
  return uVar2;
}


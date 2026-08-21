
/* cocos2d::Texture2D::convertDataToFormat(unsigned char const*, long,
   cocos2d::Texture2D::PixelFormat, cocos2d::Texture2D::PixelFormat, unsigned char**, long*) */

ulong cocos2d::Texture2D::convertDataToFormat
                (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 *param_5
                ,undefined8 *param_6)

{
  ulong uVar1;
  
  if ((param_4 != param_3) && (param_4 != 0)) {
    switch(param_3) {
    case 2:
      uVar1 = convertRGBA8888ToFormat(param_1,param_2,param_4,param_5,param_6);
      return uVar1;
    case 3:
      uVar1 = convertRGB888ToFormat(param_1,param_2,param_4,param_5,param_6);
      return uVar1;
    case 6:
      uVar1 = convertI8ToFormat(param_1,param_2,param_4,param_5,param_6);
      return uVar1;
    case 7:
      uVar1 = convertAI88ToFormat(param_1,param_2,param_4,param_5,param_6);
      return uVar1;
    }
  }
  *param_5 = param_1;
  *param_6 = param_2;
  return (ulong)param_3;
}


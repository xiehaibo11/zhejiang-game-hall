
/* cocos2d::getDevicePixelFormat(cocos2d::Texture2D::PixelFormat) */

int cocos2d::getDevicePixelFormat(int param_1)

{
  Configuration *pCVar1;
  ulong uVar2;
  
  if (param_1 - 10U < 4) {
    pCVar1 = (Configuration *)Configuration::getInstance();
    uVar2 = Configuration::supportsPVRTC(pCVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 2;
    }
  }
  else if (param_1 == 0xe) {
    pCVar1 = (Configuration *)Configuration::getInstance();
    uVar2 = Configuration::supportsETC(pCVar1);
    param_1 = 0xe;
    if ((uVar2 & 1) == 0) {
      param_1 = 3;
    }
  }
  return param_1;
}


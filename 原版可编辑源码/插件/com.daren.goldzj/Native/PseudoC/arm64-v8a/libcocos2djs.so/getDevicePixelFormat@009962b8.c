
/* cocos2d::getDevicePixelFormat(cocos2d::Image::PixelFormat) */

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
                    /* catch() { ... } // from try @ 0099613c with catch @ 009962f8 */
    uVar2 = Configuration::supportsETC(pCVar1);
                    /* catch() { ... } // from try @ 00996130 with catch @ 009962fc */
                    /* catch() { ... } // from try @ 00996110 with catch @ 00996300 */
    param_1 = 0xe;
    if ((uVar2 & 1) == 0) {
      param_1 = 3;
    }
  }
                    /* catch() { ... } // from try @ 00996148 with catch @ 00996310 */
  return param_1;
}


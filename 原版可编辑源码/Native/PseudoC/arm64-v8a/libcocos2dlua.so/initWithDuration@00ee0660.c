
/* cocos2d::ResizeTo::initWithDuration(float, cocos2d::Size const&) */

undefined8 __thiscall
cocos2d::ResizeTo::initWithDuration(ResizeTo *this,float param_1,Size *param_2)

{
  float fVar1;
  
  fVar1 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar1 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar1;
  Size::operator=((Size *)(this + 0x60),param_2);
                    /* catch() { ... } // from try @ 00ee053c with catch @ 00ee06a0 */
  return 1;
}


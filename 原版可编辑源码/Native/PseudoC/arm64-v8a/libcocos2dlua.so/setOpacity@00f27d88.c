
/* cocos2d::__NodeRGBA::setOpacity(unsigned char) */

void __thiscall cocos2d::__NodeRGBA::setOpacity(__NodeRGBA *this,uchar param_1)

{
  this[0x219] = (__NodeRGBA)param_1;
  this[0x218] = (__NodeRGBA)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f27d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x508))();
  return;
}


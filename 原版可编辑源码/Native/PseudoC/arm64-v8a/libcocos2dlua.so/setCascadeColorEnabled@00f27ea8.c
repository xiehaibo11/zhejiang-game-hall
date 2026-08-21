
/* cocos2d::__NodeRGBA::setCascadeColorEnabled(bool) */

void __thiscall cocos2d::__NodeRGBA::setCascadeColorEnabled(__NodeRGBA *this,bool param_1)

{
                    /* catch() { ... } // from try @ 00f27e74 with catch @ 00f27eac */
  if (this[0x220] == (__NodeRGBA)param_1) {
    return;
  }
  this[0x220] = (__NodeRGBA)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f27ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x518))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f27ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x520))();
  return;
}


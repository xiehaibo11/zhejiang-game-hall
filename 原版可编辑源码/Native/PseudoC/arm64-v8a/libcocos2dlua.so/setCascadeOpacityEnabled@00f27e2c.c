
/* cocos2d::__NodeRGBA::setCascadeOpacityEnabled(bool) */

void __thiscall cocos2d::__NodeRGBA::setCascadeOpacityEnabled(__NodeRGBA *this,bool param_1)

{
  if (this[0x221] == (__NodeRGBA)param_1) {
    return;
  }
  this[0x221] = (__NodeRGBA)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f27e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00f27e7c with catch @ 00f27e50 */
    (**(code **)(*(long *)this + 0x508))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f27e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x510))();
  return;
}


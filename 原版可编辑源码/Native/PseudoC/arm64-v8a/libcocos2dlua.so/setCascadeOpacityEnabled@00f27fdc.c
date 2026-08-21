
/* non-virtual thunk to cocos2d::__NodeRGBA::setCascadeOpacityEnabled(bool) */

void __thiscall cocos2d::__NodeRGBA::setCascadeOpacityEnabled(__NodeRGBA *this,bool param_1)

{
  if (this[-0xd7] == (__NodeRGBA)param_1) {
    return;
  }
  this[-0xd7] = (__NodeRGBA)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f28004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + -0x2f8) + 0x508))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f2800c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x510))();
  return;
}


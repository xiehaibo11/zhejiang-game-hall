
/* non-virtual thunk to cocos2d::__NodeRGBA::setCascadeColorEnabled(bool) */

void __thiscall cocos2d::__NodeRGBA::setCascadeColorEnabled(__NodeRGBA *this,bool param_1)

{
  if (this[-0xd8] == (__NodeRGBA)param_1) {
    return;
  }
  this[-0xd8] = (__NodeRGBA)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f27fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(this + -0x2f8) + 0x518))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f27fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x520))();
  return;
}


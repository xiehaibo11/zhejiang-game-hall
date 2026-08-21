
/* cocos2d::ui::EditBoxImplCommon::setVisible(bool) */

void __thiscall cocos2d::ui::EditBoxImplCommon::setVisible(EditBoxImplCommon *this,bool param_1)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00def044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00def094 with catch @ 00def044 */
    (**(code **)(*(long *)this + 0x130))(this);
    return;
  }
  (**(code **)(*(long *)this + 0x198))(this,0);
  (**(code **)(**(long **)(this + 0x18) + 0x170))(*(long **)(this + 0x18),0);
                    /* try { // try from 00def07c to 00eef083 has its CatchHandler @ 00def0ac */
                    /* WARNING: Could not recover jumptable at 0x00def088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x170))(*(long **)(this + 0x20),0);
  return;
}


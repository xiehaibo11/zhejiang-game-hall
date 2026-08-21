
/* cocos2d::GridBase::setTextureFlipped(bool) */

void __thiscall cocos2d::GridBase::setTextureFlipped(GridBase *this,bool param_1)

{
  if (this[0x48] == (GridBase)param_1) {
    return;
  }
  this[0x48] = (GridBase)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f0773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))();
  return;
}



/* cocos2d::ui::AbstractCheckButton::setSelected(bool) */

void __thiscall
cocos2d::ui::AbstractCheckButton::setSelected(AbstractCheckButton *this,bool param_1)

{
  if ((AbstractCheckButton)param_1 == this[0x518]) {
    return;
  }
  this[0x518] = (AbstractCheckButton)param_1;
                    /* WARNING: Could not recover jumptable at 0x00dc3b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500));
  return;
}


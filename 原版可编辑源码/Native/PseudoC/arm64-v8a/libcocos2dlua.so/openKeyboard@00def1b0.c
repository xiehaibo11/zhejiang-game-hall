
/* cocos2d::ui::EditBoxImplCommon::openKeyboard() */

void __thiscall cocos2d::ui::EditBoxImplCommon::openKeyboard(EditBoxImplCommon *this)

{
  Widget::setBrightStyle(*(Widget **)(this + 0x10),1);
  (**(code **)(**(long **)(this + 0x18) + 0x170))(*(long **)(this + 0x18),0);
  (**(code **)(**(long **)(this + 0x20) + 0x170))(*(long **)(this + 0x20),0);
  this[0xb4] = (EditBoxImplCommon)0x1;
  (**(code **)(*(long *)this + 0x198))(this,1);
                    /* WARNING: Could not recover jumptable at 0x00def224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1b0))(this);
  return;
}


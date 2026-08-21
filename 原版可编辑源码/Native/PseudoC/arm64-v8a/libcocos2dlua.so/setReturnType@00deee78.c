
/* cocos2d::ui::EditBoxImplCommon::setReturnType(cocos2d::ui::EditBox::KeyboardReturnType) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setReturnType(EditBoxImplCommon *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00deee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x178))();
  return;
}



/* cocos2d::ui::EditBoxImplCommon::setInputFlag(cocos2d::ui::EditBox::InputFlag) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setInputFlag(EditBoxImplCommon *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00deee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x170))();
  return;
}


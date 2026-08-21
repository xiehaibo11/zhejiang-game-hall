
/* cocos2d::ui::EditBoxImplCommon::setPlaceholderFontColor(cocos2d::Color4B const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setPlaceholderFontColor(EditBoxImplCommon *this,Color4B *param_1)

{
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)param_1;
  (**(code **)(*(long *)this + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00deed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x598))(*(long **)(this + 0x20),param_1);
  return;
}


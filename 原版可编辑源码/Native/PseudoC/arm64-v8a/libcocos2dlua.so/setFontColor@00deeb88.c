
/* cocos2d::ui::EditBoxImplCommon::setFontColor(cocos2d::Color4B const&) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setFontColor(EditBoxImplCommon *this,Color4B *param_1)

{
                    /* try { // try from 00deeb88 to 00eeeb8f has its CatchHandler @ 00deef2c */
                    /* try { // try from 00deeb94 to 00eeebcb has its CatchHandler @ 00deef3c */
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)param_1;
  (**(code **)(*(long *)this + 0x150))();
                    /* WARNING: Could not recover jumptable at 0x00deebc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x18) + 0x598))(*(long **)(this + 0x18),param_1);
  return;
}


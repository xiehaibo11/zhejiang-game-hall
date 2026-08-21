
/* cocos2d::ui::EditBoxImplCommon::EditBoxImplCommon(cocos2d::ui::EditBox*) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::EditBoxImplCommon(EditBoxImplCommon *this,EditBox *param_1)

{
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(EditBox **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__EditBoxImplCommon_016e62f8;
  *(undefined8 *)(this + 0x28) = 0x400000006;
  Color4B::Color4B((Color4B *)(this + 0xa0),(Color3B *)&Color3B::WHITE,0xff);
  Color4B::Color4B((Color4B *)(this + 0xa4),(Color3B *)&Color3B::GRAY,0xff);
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  Size::Size((Size *)(this + 0xac));
  this[0xb4] = (EditBoxImplCommon)0x0;
  return;
}


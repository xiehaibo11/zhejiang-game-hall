
/* fairygui::TValue::setColor(cocos2d::Color4B const&) */

void __thiscall fairygui::TValue::setColor(TValue *this,Color4B *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NEON_ucvtf((uint)(byte)*param_1);
  *(undefined4 *)this = uVar1;
  uVar1 = NEON_ucvtf((uint)(byte)param_1[1]);
  *(undefined4 *)(this + 4) = uVar1;
  uVar1 = NEON_ucvtf((uint)(byte)param_1[2]);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = NEON_ucvtf((uint)(byte)param_1[3]);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


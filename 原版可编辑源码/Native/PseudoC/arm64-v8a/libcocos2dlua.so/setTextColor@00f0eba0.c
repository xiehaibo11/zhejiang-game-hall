
/* cocos2d::Label::setTextColor(cocos2d::Color4B const&) */

void __thiscall cocos2d::Label::setTextColor(Label *this,Color4B *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(int *)(this + 0x308) == 3) &&
     (uVar2 = Color4B::operator!=((Color4B *)(this + 0x4b0),param_1), (uVar2 & 1) != 0)) {
    this[0x30c] = (Label)0x1;
  }
  uVar1 = *(uint *)param_1;
  uVar2 = NEON_ushl(CONCAT44(uVar1,uVar1),0xfffffff0fffffff8,4);
  uVar3 = NEON_ucvtf(uVar2 & 0xff000000ff,4);
  *(float *)(this + 0x4b4) = (float)(uVar1 & 0xff) / 255.0;
  *(uint *)(this + 0x4b0) = uVar1;
  *(ulong *)(this + 0x4b8) = CONCAT44((float)((ulong)uVar3 >> 0x20) / 255.0,(float)uVar3 / 255.0);
  *(float *)(this + 0x4c0) = (float)(uVar1 >> 0x18) / 255.0;
  return;
}


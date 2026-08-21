
/* cocos2d::Value::asDouble() const */

undefined1  [16] __thiscall cocos2d::Value::asDouble(Value *this)

{
  byte *pbVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
    auVar3._0_8_ = NEON_ucvtf((ulong)(byte)*this);
    auVar3._8_8_ = 0;
    return auVar3;
  case 2:
    auVar4._0_8_ = (double)(long)*(int *)this;
    auVar4._8_8_ = 0;
    return auVar4;
  case 3:
    auVar5._0_8_ = NEON_ucvtf((ulong)*(uint *)this);
    auVar5._8_8_ = 0;
    return auVar5;
  case 4:
    auVar6._0_8_ = (double)*(float *)this;
    auVar6._8_8_ = 0;
    return auVar6;
  case 5:
    auVar7._0_8_ = *(ulong *)this;
    auVar7._8_8_ = 0;
    return auVar7;
  case 6:
    uVar2 = 0;
    if (*this != (Value)0x0) {
      uVar2 = 0x3ff0000000000000;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar2;
    return auVar8;
  case 7:
    break;
  default:
    return ZEXT816(0);
  }
  pbVar1 = *(byte **)this;
  if ((*pbVar1 & 1) != 0) {
    auVar8 = utils::atof(*(char **)(pbVar1 + 0x10));
    return auVar8;
  }
  auVar8 = utils::atof((char *)(pbVar1 + 1));
  return auVar8;
}



/* cocos2d::Value::asBool() const */

bool __thiscall cocos2d::Value::asBool(Value *this)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    bVar3 = *this == (Value)0x0;
    break;
  case 2:
  case 3:
    bVar3 = *(int *)this == 0;
    break;
  case 4:
    bVar3 = *(float *)this == 0.0;
    break;
  case 5:
    bVar3 = *(double *)this == 0.0;
    break;
  case 7:
    pbVar5 = *(byte **)this;
    bVar2 = *pbVar5;
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar5 + 8);
    }
    if (uVar1 == 5) {
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      iVar4 = memcmp(pbVar6,"false",5);
      bVar3 = iVar4 == 0;
    }
    else {
      if (uVar1 != 1) {
        return true;
      }
      pbVar6 = *(byte **)(pbVar5 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar6 = pbVar5 + 1;
      }
      bVar3 = *pbVar6 == 0x30;
    }
    break;
  default:
    return false;
  }
  return !bVar3;
}


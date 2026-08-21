
/* cocos2d::Value::asBool() const */

bool __thiscall cocos2d::Value::asBool(Value *this)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    return *this != (Value)0x0;
  case 2:
  case 3:
    return *(int *)this != 0;
  case 4:
    return *(float *)this != 0.0;
  case 5:
    return *(double *)this != 0.0;
  case 7:
    break;
  default:
    return false;
  }
  pbVar4 = *(byte **)this;
  bVar2 = *pbVar4;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  if (uVar1 != 5) {
    if (uVar1 == 1) {
      pbVar5 = *(byte **)(pbVar4 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar5 = pbVar4 + 1;
      }
      return *pbVar5 != 0x30;
    }
    return true;
  }
  pbVar5 = *(byte **)(pbVar4 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar5 = pbVar4 + 1;
  }
  iVar3 = memcmp(pbVar5,"false",5);
  return iVar3 != 0;
}


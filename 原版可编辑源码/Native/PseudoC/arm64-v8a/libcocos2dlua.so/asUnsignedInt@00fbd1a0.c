
/* cocos2d::Value::asUnsignedInt() const */

ulong __thiscall cocos2d::Value::asUnsignedInt(Value *this)

{
  ulong uVar1;
  byte *pbVar2;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    return (ulong)(byte)*this;
  case 2:
  case 3:
    return (ulong)*(uint *)this;
  case 4:
    return (ulong)(uint)(int)*(float *)this;
  case 5:
    return (ulong)(uint)(int)*(double *)this;
  case 7:
    break;
  default:
    return 0;
  }
  pbVar2 = *(byte **)this;
  if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  uVar1 = strtoul((char *)pbVar2,(char **)0x0,10);
  return uVar1;
}



/* cocos2d::Value::asByte() const */

uint __thiscall cocos2d::Value::asByte(Value *this)

{
  uint uVar1;
  byte *pbVar2;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
  case 6:
    return (uint)(byte)*this;
  case 2:
  case 3:
    return *(uint *)this;
  case 4:
    return (int)*(float *)this;
  case 5:
    return (int)*(double *)this;
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
  uVar1 = atoi((char *)pbVar2);
  return uVar1;
}


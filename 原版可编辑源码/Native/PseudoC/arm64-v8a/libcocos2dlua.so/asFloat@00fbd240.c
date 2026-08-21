
/* cocos2d::Value::asFloat() const */

float __thiscall cocos2d::Value::asFloat(Value *this)

{
  byte *pbVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
    uVar2 = (uint)(byte)*this;
    break;
  case 2:
    return (float)*(int *)this;
  case 3:
    uVar2 = *(uint *)this;
    break;
  case 4:
    return *(float *)this;
  case 5:
    dVar4 = *(double *)this;
    goto LAB_00fbd2f0;
  case 6:
    fVar3 = 0.0;
    if (*this != (Value)0x0) {
      fVar3 = 1.0;
    }
    return fVar3;
  case 7:
    pbVar1 = *(byte **)this;
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
    dVar4 = (double)utils::atof((char *)pbVar1);
LAB_00fbd2f0:
    return (float)dVar4;
  default:
    return 0.0;
  }
  fVar3 = (float)NEON_ucvtf(uVar2);
  return fVar3;
}


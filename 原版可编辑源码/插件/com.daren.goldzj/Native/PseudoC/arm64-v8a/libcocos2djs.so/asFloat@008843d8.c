
/* cocos2d::Value::asFloat() const */

float __thiscall cocos2d::Value::asFloat(Value *this)

{
  byte *pbVar1;
  float fVar2;
  double dVar3;
  
  switch(*(undefined4 *)(this + 8)) {
  case 1:
    fVar2 = (float)NEON_ucvtf((uint)(byte)*this);
    return fVar2;
  case 2:
    return (float)*(int *)this;
  case 3:
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)this);
    return fVar2;
  case 4:
    return *(float *)this;
  case 5:
    return (float)*(double *)this;
  case 6:
    fVar2 = 0.0;
    if (*this != (Value)0x0) {
      fVar2 = 1.0;
    }
    break;
  case 7:
    pbVar1 = *(byte **)this;
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
    dVar3 = (double)utils::atof((char *)pbVar1);
    return (float)dVar3;
  default:
    return 0.0;
  }
  return fVar2;
}


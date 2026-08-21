
/* cocos2d::Repeat::initWithAction(cocos2d::FiniteTimeAction*, unsigned int) */

undefined4 __thiscall
cocos2d::Repeat::initWithAction(Repeat *this,FiniteTimeAction *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (param_1 == (FiniteTimeAction *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    fVar3 = 1e-06;
    if (1e-06 < ABS(*(float *)(param_1 + 0x4c) * (float)param_2)) {
      fVar3 = *(float *)(param_1 + 0x4c) * (float)param_2;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(uint *)(this + 0x58) = param_2;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar3;
    *(FiniteTimeAction **)(this + 0x68) = param_1;
    Ref::retain((Ref *)param_1);
    lVar1 = __dynamic_cast(param_1,&FiniteTimeAction::typeinfo,&ActionInstant::typeinfo,0);
    this[100] = (Repeat)(lVar1 != 0);
    *(undefined4 *)(this + 0x5c) = 0;
  }
  return uVar2;
}


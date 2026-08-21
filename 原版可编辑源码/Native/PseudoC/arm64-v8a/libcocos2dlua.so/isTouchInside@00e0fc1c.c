
/* cocos2d::extension::ControlPotentiometer::isTouchInside(cocos2d::Touch*) */

bool cocos2d::extension::ControlPotentiometer::isTouchInside(Touch *param_1)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  
  fVar3 = (float)(**(code **)(*(long *)param_1 + 0x6a0))();
  pfVar1 = (float *)(**(code **)(**(long **)(param_1 + 0x370) + 0xb0))();
  fVar4 = *pfVar1;
  fVar7 = pfVar1[1];
  pfVar1 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  fVar5 = *pfVar1;
  lVar2 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
  fVar6 = *(float *)(lVar2 + 4);
  pfVar1 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  if (fVar6 * 0.5 <= fVar5 * 0.5) {
    pfVar1 = pfVar1 + 1;
  }
  return SQRT((fVar4 - fVar3) * (fVar4 - fVar3) + (fVar7 - in_s1) * (fVar7 - in_s1)) < *pfVar1 * 0.5
  ;
}


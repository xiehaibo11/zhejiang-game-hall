
/* cocos2d::extension::ControlPotentiometer::potentiometerMoved(cocos2d::Vec2) */

void cocos2d::extension::ControlPotentiometer::potentiometerMoved
               (float param_1,float param_2,long *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)(**(code **)(*(long *)param_3[0x6e] + 0xb0))();
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
                    /* try { // try from 00e0fe80 to 00f0fe8b has its CatchHandler @ 00e0ff2c */
  pfVar1 = (float *)(**(code **)(*(long *)param_3[0x6e] + 0xb0))((long *)param_3[0x6e]);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = *(float *)(param_3 + 0x6f);
                    /* try { // try from 00e0fe8c to 00f0ff83 has its CatchHandler @ 00e0fbc0 */
  fVar5 = *(float *)((long)param_3 + 0x37c);
  fVar6 = atan2f(param_1 - fVar6,param_2 - fVar7);
  fVar2 = atan2f(fVar4 - fVar2,fVar5 - fVar3);
  fVar6 = ((fVar6 - fVar2) * 180.0) / 3.1415927;
  if (fVar6 <= 180.0) {
    if (-180.0 <= fVar6) goto LAB_00e0ff04;
    fVar2 = 360.0;
  }
  else {
    fVar2 = -360.0;
  }
  fVar6 = fVar6 + fVar2;
LAB_00e0ff04:
  fVar3 = *(float *)(param_3 + 0x6c);
  fVar4 = *(float *)((long)param_3 + 0x35c);
  fVar2 = *(float *)(param_3 + 0x6b) + (fVar6 / 360.0) * (fVar3 - fVar4);
                    /* catch() { ... } // from try @ 00e0fe80 with catch @ 00e0ff2c */
  fVar6 = fVar4;
  if (fVar4 <= fVar2) {
    fVar6 = fVar2;
  }
  fVar2 = fVar3;
  if (fVar6 <= fVar3) {
    fVar2 = fVar6;
  }
  *(float *)(param_3 + 0x6b) = fVar2;
  fVar6 = (fVar2 - fVar4) / (fVar3 - fVar4);
  ProgressTimer::setPercentage((ProgressTimer *)param_3[0x6e],fVar6 * 100.0);
  (**(code **)(*(long *)param_3[0x6d] + 0x180))(fVar6 * 360.0);
  (**(code **)(*param_3 + 0x688))(param_3,0x100);
  *(float *)(param_3 + 0x6f) = param_1;
                    /* catch() { ... } // from try @ 00e0ffc0 with catch @ 00e0ff84
                       catch() { ... } // from try @ 00e1000c with catch @ 00e0ff84 */
  *(float *)((long)param_3 + 0x37c) = param_2;
  return;
}


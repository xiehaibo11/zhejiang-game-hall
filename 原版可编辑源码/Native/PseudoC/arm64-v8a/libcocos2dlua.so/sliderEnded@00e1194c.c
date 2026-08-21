
/* cocos2d::extension::ControlSlider::sliderEnded(cocos2d::Vec2) */

void cocos2d::extension::ControlSlider::sliderEnded(long *param_1)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x668))();
  if ((uVar1 & 1) != 0) {
    pfVar2 = (float *)(**(code **)(*(long *)param_1[0x6e] + 0xb0))();
                    /* try { // try from 00e11984 to 00f11987 has its CatchHandler @ 00e12024 */
    fVar3 = *pfVar2;
                    /* try { // try from 00e11988 to 00f11c8f has its CatchHandler @ 00e11350 */
    pfVar2 = (float *)(**(code **)(*(long *)param_1[0x71] + 0x168))((long *)param_1[0x71]);
    fVar3 = *(float *)((long)param_1 + 0x35c) +
            (fVar3 / *pfVar2) * (*(float *)(param_1 + 0x6c) - *(float *)((long)param_1 + 0x35c));
    if (*(float *)(param_1 + 0x6d) <= fVar3) {
      fVar3 = *(float *)(param_1 + 0x6d);
    }
    if (fVar3 <= *(float *)((long)param_1 + 0x364)) {
      fVar3 = *(float *)((long)param_1 + 0x364);
    }
    (**(code **)(*param_1 + 0x6d0))(fVar3,param_1);
  }
  (**(code **)(*(long *)param_1[0x6e] + 0x170))((long *)param_1[0x6e],1);
  (**(code **)(*(long *)param_1[0x6f] + 0x170))((long *)param_1[0x6f],0);
                    /* WARNING: Could not recover jumptable at 0x00e11a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x660))(param_1,0);
  return;
}


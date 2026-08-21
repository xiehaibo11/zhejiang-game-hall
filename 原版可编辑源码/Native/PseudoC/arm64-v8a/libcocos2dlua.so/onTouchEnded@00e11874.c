
/* cocos2d::extension::ControlSlider::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlSlider::onTouchEnded(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  
                    /* try { // try from 00e11880 to 00f1188b has its CatchHandler @ 00e12048 */
  uVar1 = (**(code **)(*(long *)param_1 + 0x668))();
                    /* try { // try from 00e11894 to 00f118a3 has its CatchHandler @ 00e12050 */
  if ((uVar1 & 1) != 0) {
    pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x370) + 0xb0))();
    fVar3 = *pfVar2;
    pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))
                                (*(long **)(param_1 + 0x388));
    fVar3 = *(float *)(param_1 + 0x35c) +
            (fVar3 / *pfVar2) * (*(float *)(param_1 + 0x360) - *(float *)(param_1 + 0x35c));
    if (*(float *)(param_1 + 0x368) <= fVar3) {
      fVar3 = *(float *)(param_1 + 0x368);
    }
    if (fVar3 <= *(float *)(param_1 + 0x364)) {
      fVar3 = *(float *)(param_1 + 0x364);
    }
    (**(code **)(*(long *)param_1 + 0x6d0))(fVar3,param_1);
  }
  (**(code **)(**(long **)(param_1 + 0x370) + 0x170))(*(long **)(param_1 + 0x370),1);
  (**(code **)(**(long **)(param_1 + 0x378) + 0x170))(*(long **)(param_1 + 0x378),0);
                    /* WARNING: Could not recover jumptable at 0x00e11948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x660))(param_1,0);
  return;
}


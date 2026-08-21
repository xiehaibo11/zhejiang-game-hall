
/* cocos2d::extension::ControlStepper::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlStepper::onTouchEnded(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
                    /* try { // try from 00e12a0c to 00f12a13 has its CatchHandler @ 00e12da8 */
                    /* try { // try from 00e12a14 to 00f12a4f has its CatchHandler @ 00e12978 */
  (**(code **)(**(long **)(param_1 + 0x390) + 0x4c0))(*(long **)(param_1 + 0x390),&Color3B::WHITE);
  (**(code **)(**(long **)(param_1 + 0x398) + 0x4c0))(*(long **)(param_1 + 0x398),&Color3B::WHITE);
  if (param_1[0x361] != (Touch)0x0) {
    Node::unschedule((_func_void_float *)param_1);
  }
                    /* try { // try from 00e12a50 to 00f12a5f has its CatchHandler @ 00e12dc4 */
                    /* try { // try from 00e12a60 to 00f12d53 has its CatchHandler @ 00e12978 */
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    fVar3 = (float)(**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
    dVar5 = *(double *)(param_1 + 0x358);
    pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x390) + 0x168))();
    dVar4 = 0.0 - *(double *)(param_1 + 0x378);
    if (*pfVar2 <= fVar3) {
      dVar4 = *(double *)(param_1 + 0x378);
    }
                    /* WARNING: Could not recover jumptable at 0x00e12acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x6d0))(dVar5 + dVar4,param_1);
    return;
  }
  return;
}


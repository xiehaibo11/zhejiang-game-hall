
/* cocos2d::extension::ControlStepper::updateLayoutUsingTouchLocation(cocos2d::Vec2) */

void __thiscall
cocos2d::extension::ControlStepper::updateLayoutUsingTouchLocation
          (float param_1,ControlStepper *this)

{
  float *pfVar1;
  long *plVar2;
  undefined2 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00e12720 to 00f1272b has its CatchHandler @ 00e1292c */
                    /* try { // try from 00e1272c to 00f12767 has its CatchHandler @ 00e1219c */
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x390) + 0x168))();
  if ((*pfVar1 <= param_1) || (*(double *)(this + 0x358) <= *(double *)(this + 0x368))) {
    pfVar1 = (float *)(**(code **)(**(long **)(this + 0x390) + 0x168))();
    if ((param_1 < *pfVar1) || (*(double *)(this + 0x370) <= *(double *)(this + 0x358))) {
                    /* try { // try from 00e127ec to 00f127f7 has its CatchHandler @ 00e12920 */
      *(undefined4 *)(this + 900) = 2;
                    /* try { // try from 00e127f8 to 00f12827 has its CatchHandler @ 00e1219c */
      puVar3 = &Color3B::WHITE;
      (**(code **)(**(long **)(this + 0x390) + 0x4c0))(*(long **)(this + 0x390),&Color3B::WHITE);
      plVar2 = *(long **)(this + 0x398);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x4c0);
    }
    else {
                    /* try { // try from 00e127b0 to 00f127bb has its CatchHandler @ 00e12924 */
      *(undefined4 *)(this + 900) = 1;
                    /* try { // try from 00e127bc to 00f127eb has its CatchHandler @ 00e1219c */
      (**(code **)(**(long **)(this + 0x390) + 0x4c0))(*(long **)(this + 0x390),&Color3B::WHITE);
      plVar2 = *(long **)(this + 0x398);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x4c0);
      puVar3 = &Color3B::GRAY;
    }
  }
  else {
    *(undefined4 *)(this + 900) = 0;
    (**(code **)(**(long **)(this + 0x390) + 0x4c0))(*(long **)(this + 0x390),&Color3B::GRAY);
                    /* try { // try from 00e12768 to 00f12773 has its CatchHandler @ 00e12928 */
    plVar2 = *(long **)(this + 0x398);
                    /* try { // try from 00e12774 to 00f127af has its CatchHandler @ 00e1219c */
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x4c0);
    puVar3 = &Color3B::WHITE;
  }
                    /* WARNING: Could not recover jumptable at 0x00e12824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,puVar3);
  return;
}


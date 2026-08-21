
/* cocos2d::extension::ControlStepper::setValueWithSendingEvent(double, bool) */

void __thiscall
cocos2d::extension::ControlStepper::setValueWithSendingEvent
          (ControlStepper *this,double param_1,bool param_2)

{
  long lVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  Color3B aCStack_58 [8];
  Color3B aCStack_50 [8];
  long local_48;
  
                    /* try { // try from 00e124f8 to 00f125bb has its CatchHandler @ 00e1219c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  dVar6 = *(double *)(this + 0x368);
  if (dVar6 <= param_1) {
    dVar7 = *(double *)(this + 0x370);
    if (this[0x362] != (ControlStepper)0x0) {
      dVar7 = dVar6;
    }
    if (param_1 <= *(double *)(this + 0x370)) {
      dVar7 = param_1;
    }
    *(double *)(this + 0x358) = dVar7;
    if (this[0x362] != (ControlStepper)0x0) goto joined_r0x00e1263c;
  }
  else {
    if (this[0x362] != (ControlStepper)0x0) {
      *(undefined8 *)(this + 0x358) = *(undefined8 *)(this + 0x370);
      goto joined_r0x00e1263c;
    }
    *(double *)(this + 0x358) = dVar6;
    dVar7 = dVar6;
  }
  plVar5 = *(long **)(this + 0x3a0);
                    /* try { // try from 00e125bc to 00f125c7 has its CatchHandler @ 00e12940 */
  if (dVar7 == dVar6) {
    uVar2 = 0x93;
    uVar3 = 0x93;
                    /* try { // try from 00e125c8 to 00f125ff has its CatchHandler @ 00e1219c */
    uVar4 = 0x93;
  }
  else {
    uVar2 = '7';
    uVar3 = '7';
    uVar4 = '7';
  }
  Color3B::Color3B(aCStack_50,uVar2,uVar3,uVar4);
  (**(code **)(*plVar5 + 0x4c0))(plVar5,aCStack_50);
  plVar5 = *(long **)(this + 0x3a8);
                    /* try { // try from 00e12600 to 00f1260b has its CatchHandler @ 00e1293c */
  if (dVar7 == *(double *)(this + 0x370)) {
    uVar2 = 0x93;
                    /* try { // try from 00e1260c to 00f1264f has its CatchHandler @ 00e1219c */
    uVar3 = 0x93;
    uVar4 = 0x93;
  }
  else {
    uVar2 = '7';
    uVar3 = '7';
    uVar4 = '7';
  }
  Color3B::Color3B(aCStack_58,uVar2,uVar3,uVar4);
  (**(code **)(*plVar5 + 0x4c0))(plVar5,aCStack_58);
joined_r0x00e1263c:
  if (param_2) {
    (**(code **)(*(long *)this + 0x688))(this,0x100);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


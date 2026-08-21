
/* universe::HeBaiChuan::~HeBaiChuan() */

void __thiscall universe::HeBaiChuan::~HeBaiChuan(HeBaiChuan *this)

{
  long lVar1;
  HeBaiChuan *pHVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__HeBaiChuan_016a22c0;
  local_50 = (long *)0x0;
  Device::setNetStateChangeCallback((function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00a0d300:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00a0d2f0 to 00b0d36f has its CatchHandler @ 00a0d460 */
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00a0d300;
  }
  pHVar2 = *(HeBaiChuan **)(this + 0x30);
  if (this + 0x10 == pHVar2) {
    pcVar4 = *(code **)(*(long *)pHVar2 + 0x20);
  }
  else {
    if (pHVar2 == (HeBaiChuan *)0x0) goto LAB_00a0d330;
    pcVar4 = *(code **)(*(long *)pHVar2 + 0x28);
  }
  (*pcVar4)();
LAB_00a0d330:
  plVar3 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_016a0200;
  *(undefined8 *)(this + 8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a0d370 to 00b0d387 has its CatchHandler @ 00a0d43c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


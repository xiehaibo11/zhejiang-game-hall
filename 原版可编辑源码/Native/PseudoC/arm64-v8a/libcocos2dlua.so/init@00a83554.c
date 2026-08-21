
/* fairygui::GObject::init() */

undefined8 __thiscall fairygui::GObject::init(GObject *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  GObject *local_88;
  long *local_80;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  GObject *local_58;
  undefined ***local_50;
  long local_38;
  
                    /* try { // try from 00a8355c to 00b8356f has its CatchHandler @ 00a835b0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a83570 to 00b835cb has its CatchHandler @ 00a834a4 */
  (**(code **)(*(long *)this + 0x50))();
  plVar2 = *(long **)(this + 0xa8);
  if (plVar2 == (long *)0x0) goto LAB_00a836ec;
  local_70 = (undefined **)0x3f80000000000000;
  (**(code **)(*plVar2 + 0x148))(plVar2,&local_70);
                    /* catch() { ... } // from try @ 00a834f4 with catch @ 00a835b0
                       catch() { ... } // from try @ 00a8355c with catch @ 00a835b0 */
  (**(code **)(**(long **)(this + 0xa8) + 0x4a8))(*(long **)(this + 0xa8),1);
  uStack_90 = 1;
  local_98 = 0x90;
  local_a0 = &PTR_FUN_016a6260;
  uStack_60 = 1;
  local_68 = 0x90;
  local_88 = this;
  local_80 = (long *)&local_a0;
  local_70 = local_a0;
  local_58 = this;
  local_50 = &local_70;
  FUN_008820fc(&local_70,*(long *)(this + 0xa8) + 0x230);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
LAB_00a83628:
    (*pcVar3)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_50)[5];
    goto LAB_00a83628;
  }
  if (&local_a0 == (undefined ***)local_80) {
    pcVar3 = *(code **)(*local_80 + 0x20);
LAB_00a83654:
    (*pcVar3)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar3 = *(code **)(*local_80 + 0x28);
    goto LAB_00a83654;
  }
  local_a0 = &PTR_FUN_016a6260;
  uStack_90 = 1;
  local_98 = 0x98;
                    /* try { // try from 00a8368c to 00b836db has its CatchHandler @ 00a8368c
                       catch() { ... } // from try @ 00a8368c with catch @ 00a8368c
                       catch() { ... } // from try @ 00a83714 with catch @ 00a8368c
                       catch() { ... } // from try @ 00a83758 with catch @ 00a8368c */
  uStack_60 = 1;
  local_68 = 0x98;
  local_88 = this;
  local_80 = (long *)&local_a0;
  local_70 = local_a0;
  local_58 = this;
  local_50 = &local_70;
  FUN_008820fc(&local_70,*(long *)(this + 0xa8) + 0x260);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
LAB_00a836bc:
    (*pcVar3)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_50)[5];
    goto LAB_00a836bc;
  }
  if (&local_a0 == (undefined ***)local_80) {
    pcVar3 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00a836ec;
    pcVar3 = *(code **)(*local_80 + 0x28);
                    /* try { // try from 00a836dc to 00b83713 has its CatchHandler @ 00a83798 */
  }
  (*pcVar3)();
LAB_00a836ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a83714 to 00b83743 has its CatchHandler @ 00a8368c */
  __stack_chk_fail();
}


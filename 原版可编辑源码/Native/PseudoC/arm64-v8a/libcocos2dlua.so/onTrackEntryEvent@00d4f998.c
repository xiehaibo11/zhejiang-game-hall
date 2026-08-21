
/* spine::SkeletonAnimation::onTrackEntryEvent(spTrackEntry*, spEventType, spEvent*) */

void __thiscall
spine::SkeletonAnimation::onTrackEntryEvent
          (undefined8 param_1_00,long param_1,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) goto switchD_00d4f9dc_default;
                    /* try { // try from 00d4f9dc to 00e4f9e3 has its CatchHandler @ 00d4fbe0 */
  switch(param_3) {
  case 0:
    plVar2 = *(long **)(lVar3 + 0x20);
                    /* try { // try from 00d4f9e4 to 00e4fa1f has its CatchHandler @ 00d4f838 */
    break;
  case 1:
    plVar2 = *(long **)(lVar3 + 0x50);
    goto joined_r0x00d4f9fc;
  case 2:
    plVar2 = *(long **)(lVar3 + 0x80);
joined_r0x00d4f9fc:
    if (plVar2 == (long *)0x0) goto switchD_00d4f9dc_default;
    goto LAB_00d4fa18;
  case 3:
    plVar2 = *(long **)(lVar3 + 0xe0);
    break;
  case 4:
    plVar2 = *(long **)(lVar3 + 0xb0);
    break;
  case 5:
    plVar2 = *(long **)(lVar3 + 0x110);
    if (plVar2 != (long *)0x0) {
      local_38 = param_4;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_38);
    }
  default:
    goto switchD_00d4f9dc_default;
  }
  if (plVar2 != (long *)0x0) {
LAB_00d4fa18:
                    /* try { // try from 00d4fa20 to 00e4fa27 has its CatchHandler @ 00d4fbdc */
    local_30 = param_1;
                    /* try { // try from 00d4fa28 to 00e4fc03 has its CatchHandler @ 00d4f838 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
switchD_00d4f9dc_default:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


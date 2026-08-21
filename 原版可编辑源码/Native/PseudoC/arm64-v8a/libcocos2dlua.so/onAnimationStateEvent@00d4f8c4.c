
/* spine::SkeletonAnimation::onAnimationStateEvent(spTrackEntry*, spEventType, spEvent*) */

void __thiscall
spine::SkeletonAnimation::onAnimationStateEvent
          (SkeletonAnimation *this,undefined8 param_1,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_3) {
  case 0:
    plVar2 = *(long **)(this + 0x3e0);
    break;
  case 1:
    plVar2 = *(long **)(this + 0x410);
    goto joined_r0x00d4f920;
  case 2:
    plVar2 = *(long **)(this + 0x440);
joined_r0x00d4f920:
    if (plVar2 == (long *)0x0) goto switchD_00d4f900_default;
    goto LAB_00d4f93c;
  case 3:
    plVar2 = *(long **)(this + 0x4a0);
    break;
  case 4:
    plVar2 = *(long **)(this + 0x470);
    break;
  case 5:
    plVar2 = *(long **)(this + 0x4d0);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00d4f988 to 00e4f98f has its CatchHandler @ 00d4fbe4 */
      local_38 = param_4;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_38);
                    /* try { // try from 00d4f990 to 00e4f9db has its CatchHandler @ 00d4f838 */
    }
  default:
    goto switchD_00d4f900_default;
  }
  if (plVar2 != (long *)0x0) {
LAB_00d4f93c:
    local_30 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
switchD_00d4f900_default:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


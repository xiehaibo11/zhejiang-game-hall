
/* spine::SkeletonAnimation::onAnimationStateEvent(spine::TrackEntry*, spine::EventType,
   spine::Event*) */

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
    plVar2 = *(long **)(this + 0xe0);
    break;
  case 1:
    plVar2 = *(long **)(this + 0x110);
    goto joined_r0x00d0f3a0;
  case 2:
    plVar2 = *(long **)(this + 0x140);
joined_r0x00d0f3a0:
    if (plVar2 == (long *)0x0) goto switchD_00d0f380_default;
    goto LAB_00d0f3bc;
  case 3:
    plVar2 = *(long **)(this + 0x1a0);
    break;
  case 4:
    plVar2 = *(long **)(this + 0x170);
    break;
  case 5:
    plVar2 = *(long **)(this + 0x1d0);
    if (plVar2 != (long *)0x0) {
      local_38 = param_4;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_30,&local_38);
    }
  default:
    goto switchD_00d0f380_default;
  }
  if (plVar2 != (long *)0x0) {
LAB_00d0f3bc:
    local_30 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
switchD_00d0f380_default:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


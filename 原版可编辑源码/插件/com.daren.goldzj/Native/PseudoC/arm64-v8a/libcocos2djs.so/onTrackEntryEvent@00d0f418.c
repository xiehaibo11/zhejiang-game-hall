
/* spine::SkeletonAnimation::onTrackEntryEvent(spine::TrackEntry*, spine::EventType, spine::Event*)
    */

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
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) goto switchD_00d0f45c_default;
  switch(param_3) {
  case 0:
    plVar2 = *(long **)(lVar3 + 0x20);
    break;
  case 1:
    plVar2 = *(long **)(lVar3 + 0x50);
    goto joined_r0x00d0f47c;
  case 2:
    plVar2 = *(long **)(lVar3 + 0x80);
joined_r0x00d0f47c:
    if (plVar2 == (long *)0x0) goto switchD_00d0f45c_default;
    goto LAB_00d0f498;
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
    goto switchD_00d0f45c_default;
  }
  if (plVar2 != (long *)0x0) {
LAB_00d0f498:
    local_30 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
switchD_00d0f45c_default:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FUN_00fa4938(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  EventDispatcher *this;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_2;
  if (*(char *)(lVar5 + 0x80) != '\0') {
    plVar3 = *(long **)(param_1 + 8);
    this = *(EventDispatcher **)(param_1 + 0x18);
    *(undefined8 *)(*plVar3 + 0x30) = *(undefined8 *)(lVar5 + 0x88);
    lVar4 = *plVar3;
    switch(*(undefined4 *)(lVar4 + 0x38)) {
    case 0:
      plVar3 = *(long **)(lVar5 + 0xc0);
      break;
    case 1:
      plVar3 = *(long **)(lVar5 + 0xf0);
      break;
    case 2:
      plVar3 = *(long **)(lVar5 + 0x120);
      break;
    case 3:
      plVar3 = *(long **)(lVar5 + 0x150);
      break;
    default:
      goto switchD_00fa49a0_default;
    }
    if (plVar3 != (long *)0x0) {
      local_40 = lVar4;
      (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_1 + 0x10),&local_40);
    }
switchD_00fa49a0_default:
    if (((Event *)**(undefined8 **)(param_1 + 8))[0x28] != (Event)0x0) {
      cocos2d::EventDispatcher::updateListeners(this,(Event *)**(undefined8 **)(param_1 + 8));
      uVar2 = 1;
      goto LAB_00fa4a00;
    }
  }
  uVar2 = 0;
LAB_00fa4a00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


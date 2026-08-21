
/* fairygui::UIEventDispatcher::addEventListener(int, std::__ndk1::function<void
   (fairygui::EventContext*)> const&, fairygui::EventTag const&) */

void __thiscall
fairygui::UIEventDispatcher::addEventListener
          (UIEventDispatcher *this,int param_1,function *param_2,EventTag *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  EventCallbackItem *pEVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  EventCallbackItem *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)param_3 != 0) {
    for (plVar4 = *(long **)(this + 0x28); plVar4 != *(long **)(this + 0x30); plVar4 = plVar4 + 1) {
      lVar6 = *plVar4;
                    /* try { // try from 00aaf6f0 to 00baf74b has its CatchHandler @ 00ab03cc */
      if ((*(int *)(lVar6 + 0x30) == param_1) && (*(long *)(lVar6 + 0x38) == *(long *)param_3)) {
        plVar4 = *(long **)(param_2 + 0x20);
        if (plVar4 == (long *)0x0) {
          local_60 = (long *)0x0;
        }
        else if ((long *)param_2 == plVar4) {
          local_60 = alStack_80;
                    /* try { // try from 00aaf850 to 00baf8ab has its CatchHandler @ 00ab03e4 */
          (**(code **)(*plVar4 + 0x18))(plVar4,alStack_80);
        }
        else {
          local_60 = (long *)(**(code **)(*plVar4 + 0x10))();
        }
        FUN_00aaff00(alStack_80,lVar6);
        if (alStack_80 == local_60) {
          (**(code **)(*local_60 + 0x20))();
        }
        else if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x28))();
        }
        goto LAB_00aaf80c;
      }
    }
  }
  pEVar3 = operator_new(0x50);
  *(undefined8 *)(pEVar3 + 8) = 0;
  *(undefined8 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 0x18) = 0;
  *(undefined8 *)(pEVar3 + 0x10) = 0;
  *(undefined8 *)(pEVar3 + 0x28) = 0;
  *(undefined8 *)(pEVar3 + 0x20) = 0;
  *(undefined8 *)(pEVar3 + 0x38) = 0;
  *(undefined8 *)(pEVar3 + 0x30) = 0;
  *(undefined8 *)(pEVar3 + 0x48) = 0;
  *(undefined8 *)(pEVar3 + 0x40) = 0;
  plVar4 = *(long **)(param_2 + 0x20);
  local_88 = pEVar3;
  if (plVar4 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar4) {
    local_60 = alStack_80;
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar4 + 0x10))();
                    /* try { // try from 00aaf76c to 00baf7c7 has its CatchHandler @ 00ab03f4 */
  }
  FUN_00aaff00(alStack_80,pEVar3);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00aaf7c8;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00aaf7c8:
  *(int *)(local_88 + 0x30) = param_1;
  if ((EventTag *)(local_88 + 0x38) != param_3) {
                    /* try { // try from 00aaf7dc to 00baf837 has its CatchHandler @ 00ab03d4 */
    *(undefined8 *)(local_88 + 0x38) = *(undefined8 *)param_3;
  }
  *(undefined4 *)(local_88 + 0x40) = 0;
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 == *(undefined8 **)(this + 0x38)) {
    std::__ndk1::
    vector<fairygui::UIEventDispatcher::EventCallbackItem*,std::__ndk1::allocator<fairygui::UIEventDispatcher::EventCallbackItem*>>
    ::__push_back_slow_path<fairygui::UIEventDispatcher::EventCallbackItem*const&>
              ((vector<fairygui::UIEventDispatcher::EventCallbackItem*,std::__ndk1::allocator<fairygui::UIEventDispatcher::EventCallbackItem*>>
                *)(this + 0x28),&local_88);
  }
  else {
    *puVar1 = local_88;
    *(undefined8 **)(this + 0x30) = puVar1 + 1;
  }
LAB_00aaf80c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocostudio::timeline::ActionTimeline::emitFrameEvent(cocostudio::timeline::Frame*) */

void __thiscall
cocostudio::timeline::ActionTimeline::emitFrameEvent(ActionTimeline *this,Frame *param_1)

{
  long lVar1;
  long *plVar2;
  Frame *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0xe0);
  if (plVar2 != (long *)0x0) {
    local_30 = param_1;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


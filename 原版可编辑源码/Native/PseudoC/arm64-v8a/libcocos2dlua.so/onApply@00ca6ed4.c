
/* cocostudio::timeline::PositionFrame::onApply(float) */

void __thiscall cocostudio::timeline::PositionFrame::onApply(PositionFrame *this,float param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    fVar3 = (float)*(undefined8 *)(this + 0x60);
    fVar4 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
    if (((bool)(~(fVar3 == 0.0) & 1)) || ((bool)(~(fVar4 == 0.0) & 1))) {
      local_30 = CONCAT44(fVar4 * param_1 + (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20),
                          fVar3 * param_1 + (float)*(undefined8 *)(this + 0x58));
      (**(code **)(*plVar2 + 0x98))(plVar2,&local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


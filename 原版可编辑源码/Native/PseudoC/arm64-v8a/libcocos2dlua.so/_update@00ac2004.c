
/* fairygui::GTweener::_update(float) */

void __thiscall fairygui::GTweener::_update(GTweener *this,float param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  GTweener *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x1b4) == 0) {
    fVar3 = *(float *)(this + 0xc0) * param_1;
    if (*(float *)(this + 0xc0) == 1.0) {
      fVar3 = param_1;
    }
    if (fVar3 == 0.0) goto LAB_00ac2084;
    *(float *)(this + 0x1b8) = fVar3 + *(float *)(this + 0x1b8);
    update(this);
    if ((*(int *)(this + 0x1b4) == 0) || (this[0x9c] != (GTweener)0x0)) goto LAB_00ac2084;
  }
  plVar2 = *(long **)(this + 0x170);
  if (plVar2 != (long *)0x0) {
    local_30 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x30))();
  }
  this[0x9c] = (GTweener)0x1;
LAB_00ac2084:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* fairygui::GTweener::kill(bool) */

void __thiscall fairygui::GTweener::kill(GTweener *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  GTweener *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x9c] == (GTweener)0x0) {
    if (param_1) {
      if (*(int *)(this + 0x1b4) == 0) {
        fVar3 = *(float *)(this + 0xa8);
        if (0.0 <= fVar3) {
          fVar4 = *(float *)(this + 0xa0);
        }
        else {
          fVar3 = *(float *)(this + 0xa0);
          fVar4 = *(float *)(this + 0xa4);
          if (*(int *)(this + 0xb8) < 0) {
            fVar4 = fVar4 + fVar4;
          }
          else {
            fVar4 = fVar4 * (float)(*(int *)(this + 0xb8) + 1);
          }
        }
        *(float *)(this + 0x1b8) = fVar3 + fVar4;
        update(this);
      }
      plVar2 = *(long **)(this + 0x170);
      if (plVar2 != (long *)0x0) {
        local_30 = this;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
      }
      if (*(long **)(this + 0x1a0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x1a0) + 0x30))();
      }
    }
    this[0x9c] = (GTweener)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* fairygui::GObject::setPivot(float, float, bool) */

void __thiscall fairygui::GObject::setPivot(GObject *this,float param_1,float param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*(float *)(this + 0xd8) != param_1) || (*(float *)(this + 0xdc) != param_2)) ||
     (this[0xe8] != (GObject)param_3)) {
    plVar2 = *(long **)(this + 0xa8);
    *(float *)(this + 0xd8) = param_1;
    *(float *)(this + 0xdc) = param_2;
    this[0xe8] = (GObject)param_3;
    if (plVar2 != (long *)0x0) {
      fStack_2c = 1.0 - param_2;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_30);
    }
    (**(code **)(*(long *)this + 0x70))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


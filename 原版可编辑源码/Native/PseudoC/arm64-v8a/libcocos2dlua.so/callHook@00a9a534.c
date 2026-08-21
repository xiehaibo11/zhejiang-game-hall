
/* fairygui::Transition::callHook(fairygui::TransitionItem*, bool) */

void __thiscall
fairygui::Transition::callHook(Transition *this,TransitionItem *param_1,bool param_2)

{
  long *plVar1;
  
  if (param_2) {
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x60);
  }
  else {
    if (*(float *)param_1 < *(float *)(this + 0xcc)) {
      return;
    }
    plVar1 = *(long **)(param_1 + 0x70);
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a9a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}


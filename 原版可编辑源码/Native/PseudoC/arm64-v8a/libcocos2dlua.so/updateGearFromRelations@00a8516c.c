
/* fairygui::GObject::updateGearFromRelations(int, float, float) */

void fairygui::GObject::updateGearFromRelations(int param_1,float param_2,float param_3)

{
  long *plVar1;
  int in_w1;
  
  plVar1 = *(long **)((ulong)(uint)param_1 + (long)in_w1 * 8 + 0x140);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a85180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}


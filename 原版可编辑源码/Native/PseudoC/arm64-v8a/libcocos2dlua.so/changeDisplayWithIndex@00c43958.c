
/* cocostudio::DisplayManager::changeDisplayWithIndex(int, bool) */

void __thiscall
cocostudio::DisplayManager::changeDisplayWithIndex(DisplayManager *this,int param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  this[0x5c] = (DisplayManager)param_2;
  if (*(int *)(this + 0x58) == param_1) {
    return;
  }
  *(int *)(this + 0x58) = param_1;
  if (param_1 < 0) {
    plVar1 = *(long **)(this + 0x40);
    if (plVar1 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
    uVar2 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x18);
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + (long)param_1 * 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00c439d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,uVar2);
  return;
}


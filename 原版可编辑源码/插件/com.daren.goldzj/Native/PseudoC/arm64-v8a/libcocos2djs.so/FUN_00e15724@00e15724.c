
void FUN_00e15724(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 0x98);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 0x10);
      if (lVar2 == param_1) {
        lVar3 = 0;
      }
      else {
        do {
          lVar3 = lVar2;
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == 0) {
            return;
          }
        } while (lVar2 != param_1);
      }
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x10);
      }
      *plVar1 = *(long *)(param_1 + 0x10);
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      FUN_00e155a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00e157c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x10))(lVar4,param_1);
      return;
    }
  }
  return;
}



undefined8 FUN_014917c0(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 == 0) {
    if (param_2 != 0) {
      return 0;
    }
  }
  else if ((uVar3 & 1) == 0) {
    if (uVar3 != param_2) {
      return 0;
    }
  }
  else {
    if ((param_2 & 1) == 0) {
      return 0;
    }
    if (1 < ((uint)uVar3 ^ (uint)param_2)) {
      return 0;
    }
  }
  lVar4 = *param_3;
  lVar5 = param_3[1];
  if ((ulong)(lVar5 - lVar4 >> 3) < 2) {
    return 0;
  }
  if (lVar5 != lVar4) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(lVar4 + uVar3 * 8);
      if (((ulong)plVar1 & 1) == 0) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar2 = (**(code **)(*plVar1 + 0x30))();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar4 = *param_3;
        lVar5 = param_3[1];
      }
      else {
        if ((*(ulong *)(param_1 + 0x10) & 1) == 0) {
          return 0;
        }
        if (((uint)*(ulong *)(param_1 + 0x10) & ((uint)plVar1 ^ 0xffffffff) & 0xfffffffe) != 0) {
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar5 - lVar4 >> 3));
  }
  return 1;
}


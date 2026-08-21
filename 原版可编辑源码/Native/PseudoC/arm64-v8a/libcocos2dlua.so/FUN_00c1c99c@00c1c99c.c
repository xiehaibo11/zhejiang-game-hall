
uint FUN_00c1c99c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 < 2) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar2 - 1;
    if (*(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 8) == -1) {
      uVar8 = 1;
      while( true ) {
        uVar7 = uVar2;
        uVar6 = uVar7 + uVar8 >> 1;
        if (uVar7 - uVar8 < 2) break;
        uVar2 = uVar6;
        if (*(long *)(*(long *)(param_1 + 0x10) + (ulong)(uVar6 - 1) * 8) != -1) {
          uVar2 = uVar7;
          uVar8 = uVar6;
        }
      }
      return uVar8 - 1;
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return uVar8;
  }
  uVar6 = uVar8 + 1;
  while( true ) {
    if (uVar6 < uVar2) {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar6 * 8);
    }
    else {
      plVar5 = (long *)FUN_00c1bbc0(param_1,uVar6);
    }
    if ((plVar5 == (long *)0x0) || (uVar7 = uVar6 << 1, *plVar5 == -1)) break;
    uVar8 = uVar6;
    uVar6 = uVar7;
    if (0x7ffffffd < uVar7) {
      uVar8 = 1;
      while( true ) {
        if (uVar8 < uVar2) {
          plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar8 * 8);
        }
        else {
          plVar5 = (long *)FUN_00c1bbc0(param_1,uVar8);
        }
        if ((plVar5 == (long *)0x0) || (*plVar5 == -1)) break;
        uVar8 = uVar8 + 1;
      }
      return uVar8 - 1;
    }
  }
  do {
    uVar3 = uVar6 - uVar8;
    uVar7 = uVar6 + uVar8;
    uVar4 = uVar6;
    while( true ) {
      if (uVar3 < 2) {
        return uVar8;
      }
      uVar6 = uVar7 >> 1;
      if (uVar6 < uVar2) {
        plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar6 * 8);
      }
      else {
        plVar5 = (long *)FUN_00c1bbc0(param_1,uVar6);
      }
      if (plVar5 == (long *)0x0) break;
      uVar1 = uVar6;
      if (*plVar5 != -1) {
        uVar1 = uVar4;
        uVar8 = uVar6;
      }
      uVar3 = uVar1 - uVar8;
      uVar7 = uVar1 + uVar8;
      uVar4 = uVar1;
    }
  } while( true );
}


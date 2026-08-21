
undefined8 FUN_001364f4(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    lVar5 = *(long *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = uVar2;
    }
    if (uVar2 - lVar5 < uVar1) {
      iVar3 = FUN_00135af4(param_2);
      if (iVar3 == 0) {
        lVar5 = *(long *)(param_2 + 0x20);
LAB_00136590:
        *(ulong *)(param_2 + 0x20) = lVar5 + uVar1;
        return 0;
      }
      lVar5 = *(long *)(param_2 + 0x20);
      if ((ulong)(*(long *)(param_2 + 0x28) - lVar5) < uVar1) goto LAB_00136590;
    }
    *(ulong *)(param_2 + 0x20) = lVar5 + uVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      return 0;
    }
    uVar4 = switchD_00136940::caseD_ff(param_1,*(long *)(param_2 + 0x18) + lVar5,uVar1);
    uVar2 = 0;
    if ((int)uVar4 != 0) {
      uVar2 = uVar1;
    }
    param_3 = param_3 - uVar2;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  } while( true );
}


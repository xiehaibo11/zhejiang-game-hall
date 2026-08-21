
undefined8 FUN_00a49604(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x908) == 0) {
    FUN_00a38a08(param_1,"No URL set!");
                    /* try { // try from 00a4976c to 00b4979f has its CatchHandler @ 00a4986c */
    uVar3 = 3;
  }
  else {
    uVar3 = FUN_00a2dfbc(param_1,*(undefined8 *)(param_1 + 0x5b8));
    if ((int)uVar3 == 0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined1 *)(param_1 + 0x8b18) = 0;
      *(undefined1 *)(param_1 + 0x8b60) = 0;
      *(undefined4 *)(param_1 + 0x8ca4) = 0;
      *(undefined1 *)(param_1 + 0x8c38) = 0;
      *(ulong *)(param_1 + 0x8bf8) = *(ulong *)(param_1 + 0x268);
      *(ulong *)(param_1 + 0x8c18) = *(ulong *)(param_1 + 0x270);
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db8));
      *(undefined8 *)(param_1 + 0x8db8) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x388);
      if (*(int *)(param_1 + 0x430) != 4) {
        puVar1 = (undefined8 *)(param_1 + 0x2a0);
      }
      *(undefined8 *)(param_1 + 0x8cf8) = *puVar1;
      if (*(long *)(param_1 + 0x928) != 0) {
        FUN_00a31328(param_1);
      }
      if ((*(long *)(param_1 + 0x930) == 0) || (uVar3 = FUN_00a3033c(param_1), (int)uVar3 == 0)) {
        *(undefined1 *)(param_1 + 0x8b70) = 1;
        FUN_00a47c70(param_1);
        FUN_00a30e84(param_1);
        FUN_00a30fe4(param_1);
        if (*(long *)(param_1 + 0x358) != 0) {
          FUN_00a27148(param_1);
        }
        if (*(long *)(param_1 + 0x360) != 0) {
          FUN_00a27148(param_1);
        }
        *(ulong *)(param_1 + 0x8c00) = *(ulong *)(param_1 + 0x8c00) & *(ulong *)(param_1 + 0x8bf8);
        *(ulong *)(param_1 + 0x8c20) = *(ulong *)(param_1 + 0x8c20) & *(ulong *)(param_1 + 0x8c18);
        if (((*(char *)(param_1 + 0x888) == '\0') || (*(long *)(param_1 + 0x8d48) != 0)) ||
           (iVar2 = FUN_00a4a418(param_1 + 0x8d30), iVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x1b;
        }
      }
    }
  }
  return uVar3;
}



undefined8 FUN_00c0df20(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong *puVar5;
  
  *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xc4) = 0xffffffff;
  iVar1 = FUN_00c06678(param_1,param_3);
  pcVar4 = *(char **)(param_3 + 0x88);
  if (pcVar4 == (char *)0x0) {
    if (iVar1 == 0) goto LAB_00c0df78;
  }
  else {
    if (iVar1 == 0) {
      pcVar4 = strchr(pcVar4,0x74);
      if (pcVar4 == (char *)0x0) goto LAB_00c0dfd0;
LAB_00c0df78:
      uVar2 = FUN_00c0dd40(param_3);
      goto LAB_00c0df84;
    }
    pcVar4 = strchr(pcVar4,0x62);
    if (pcVar4 == (char *)0x0) {
LAB_00c0dfd0:
      puVar5 = *(ulong **)(param_1 + 0x28);
      *(ulong **)(param_1 + 0x28) = puVar5 + 1;
      uVar3 = FUN_00bfab64(param_1,0x817);
      *puVar5 = uVar3 | 0xfffd800000000000;
                    /* WARNING: Subroutine does not return */
      FUN_00bfa980(param_1,3);
    }
  }
  uVar2 = FUN_00c20144(param_3);
LAB_00c0df84:
  uVar3 = FUN_00bfbec8(param_1,uVar2,*(undefined8 *)(param_1 + 0x48));
  puVar5 = *(ulong **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar5 + 1;
  *puVar5 = uVar3 | 0xfffb800000000000;
  return 0;
}


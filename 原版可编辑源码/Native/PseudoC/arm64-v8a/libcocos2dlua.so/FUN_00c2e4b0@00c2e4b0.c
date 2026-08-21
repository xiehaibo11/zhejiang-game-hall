
uint FUN_00c2e4b0(long param_1,FILE *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar9 = 0;
  uVar5 = 0;
  iVar1 = 0x400;
  do {
    iVar7 = iVar1;
    uVar8 = (ulong)uVar5;
    lVar3 = FUN_00c1a5a8(param_1,iVar7);
    pcVar4 = fgets((char *)(lVar3 + uVar8),iVar7 - uVar5,param_2);
    if (pcVar4 == (char *)0x0) {
LAB_00c2e548:
      puVar6 = *(ulong **)(param_1 + 0x28);
      *(ulong **)(param_1 + 0x28) = puVar6 + 1;
      uVar8 = FUN_00bfba1c(param_1,lVar3,uVar8);
      *puVar6 = uVar8 | 0xfffd800000000000;
      if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)) {
        FUN_00c19f80(param_1);
        return uVar9;
      }
      return uVar9;
    }
    sVar2 = strlen((char *)(lVar3 + uVar8));
    uVar5 = uVar5 + (int)sVar2;
    uVar9 = uVar9 | uVar5;
    if ((uVar5 != 0) && (*(char *)(lVar3 + (ulong)(uVar5 - 1)) == '\n')) {
      uVar8 = (ulong)(uVar5 - param_3);
      goto LAB_00c2e548;
    }
    iVar1 = iVar7 << 1;
    if (uVar5 < iVar7 - 0x40U) {
      iVar1 = iVar7;
    }
  } while( true );
}


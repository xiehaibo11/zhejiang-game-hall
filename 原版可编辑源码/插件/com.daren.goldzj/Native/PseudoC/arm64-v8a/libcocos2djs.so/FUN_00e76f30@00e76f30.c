
ulong FUN_00e76f30(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong *puVar10;
  
  if (param_3 < 1) {
    uVar9 = 0;
  }
  else {
    puVar10 = *(ulong **)(param_1 + 8);
    uVar9 = 0;
    do {
      puVar1 = (uint *)(param_2 + uVar9 * 0x10);
      if (*puVar1 == 0) {
        pcVar5 = (char *)FUN_00e7752c(puVar10);
        if (1 < (int)puVar10[3]) break;
        pcVar6 = (char *)*puVar10;
        pcVar4 = pcVar6 + -1;
        if (pcVar6 < (char *)puVar10[2]) {
          do {
            pcVar7 = pcVar6;
            pcVar6 = pcVar7 + 1;
            *puVar10 = (ulong)pcVar6;
            cVar3 = *pcVar7;
            if ((cVar3 == '\n') || (cVar3 == '\r')) {
              uVar8 = 2;
              goto LAB_00e7743c;
            }
          } while ((cVar3 != '\x1a') && (pcVar6 < (char *)puVar10[2]));
          pcVar6 = pcVar7 + 1;
        }
        uVar8 = 3;
LAB_00e7743c:
        *(undefined4 *)(puVar10 + 3) = uVar8;
        uVar2 = *puVar1;
      }
      else {
        pcVar4 = (char *)FUN_00e77490(puVar10);
        if (pcVar4 == (char *)0x0) break;
        pcVar6 = (char *)*puVar10;
        uVar2 = *puVar1;
        pcVar5 = pcVar4;
      }
      if (uVar2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00e77398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*(code *)(&UNK_00e76f80 + (ulong)*(ushort *)(&DAT_0197b764 + (ulong)uVar2 * 2) * 4)
                )(pcVar5,(long)pcVar6 - (long)pcVar4);
        return uVar9;
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)param_3);
  }
  return uVar9 & 0xffffffff;
}


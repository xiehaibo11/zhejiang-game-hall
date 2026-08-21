
void FUN_00e78cd4(long param_1,long *param_2)

{
  int iVar1;
  short sVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar9 + 0x58) == '\0') {
    psVar10 = *(short **)(lVar9 + 0x28);
    lVar11 = param_2[1];
    lVar5 = *param_2;
    *(undefined1 *)(lVar9 + 0x58) = 1;
    if (psVar10 == (short *)0x0) {
      iVar4 = 3;
      piVar7 = *(int **)(param_1 + 0x30);
      iVar1 = *piVar7;
      goto joined_r0x00e78e0c;
    }
    if (*(char *)(lVar9 + 0x59) == '\0') {
      sVar2 = *psVar10;
LAB_00e78e20:
      *psVar10 = sVar2 + 1;
      lVar6 = *(long *)(lVar9 + 0x18);
      if (((int)*(short *)(lVar6 + 0x1a) + (int)*(short *)(lVar6 + 0x62) + 1U <=
           *(uint *)(lVar6 + 8)) || (iVar4 = FUN_00e13cd0(lVar6,1,0), iVar4 == 0)) {
        lVar6 = *(long *)(lVar9 + 0x28);
        if (*(char *)(lVar9 + 0x59) != '\0') {
          sVar2 = *(short *)(lVar6 + 2);
          lVar8 = *(long *)(lVar6 + 0x10);
          plVar3 = (long *)(*(long *)(lVar6 + 8) + (long)sVar2 * 0x10);
          plVar3[1] = lVar11 >> 10;
          *plVar3 = lVar5 >> 10;
          *(undefined1 *)(lVar8 + sVar2) = 1;
        }
        *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
        goto LAB_00e78d00;
      }
    }
    else {
      lVar6 = *(long *)(lVar9 + 0x18);
      if (((int)*(short *)(lVar6 + 0x18) + (int)*(short *)(lVar6 + 0x60) + 1U <=
           *(uint *)(lVar6 + 0xc)) || (iVar4 = FUN_00e13cd0(lVar6,0,1), iVar4 == 0)) {
        sVar2 = *psVar10;
        if (0 < (long)sVar2) {
          *(short *)(*(long *)(psVar10 + 0xc) + (long)sVar2 * 2 + -2) = psVar10[1] + -1;
          sVar2 = *psVar10;
        }
        goto LAB_00e78e20;
      }
    }
  }
  else {
LAB_00e78d00:
    lVar5 = *(long *)(lVar9 + 0x18);
    lVar6 = param_2[3];
    lVar11 = param_2[2];
    if (((int)*(short *)(lVar5 + 0x1a) + (int)*(short *)(lVar5 + 0x62) + 1U <= *(uint *)(lVar5 + 8))
       || (iVar4 = FUN_00e13cd0(lVar5,1,0), iVar4 == 0)) {
      lVar5 = *(long *)(lVar9 + 0x28);
      if (*(char *)(lVar9 + 0x59) != '\0') {
        sVar2 = *(short *)(lVar5 + 2);
        lVar9 = *(long *)(lVar5 + 0x10);
        plVar3 = (long *)(*(long *)(lVar5 + 8) + (long)sVar2 * 0x10);
        plVar3[1] = lVar6 >> 10;
        *plVar3 = lVar11 >> 10;
        *(undefined1 *)(lVar9 + sVar2) = 1;
      }
      *(short *)(lVar5 + 2) = *(short *)(lVar5 + 2) + 1;
      return;
    }
  }
  piVar7 = *(int **)(param_1 + 0x30);
  iVar1 = *piVar7;
joined_r0x00e78e0c:
  if (iVar1 == 0) {
    *piVar7 = iVar4;
  }
  return;
}


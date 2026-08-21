
void FUN_00e78ec4(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  short *psVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar12 + 0x58) == '\0') {
    psVar8 = *(short **)(lVar12 + 0x28);
    lVar10 = param_2[1];
    lVar6 = *param_2;
    *(undefined1 *)(lVar12 + 0x58) = 1;
    if (psVar8 == (short *)0x0) {
      iVar5 = 3;
      piVar9 = *(int **)(param_1 + 0x30);
      iVar1 = *piVar9;
      goto joined_r0x00e79054;
    }
    if (*(char *)(lVar12 + 0x59) == '\0') {
      sVar3 = *psVar8;
LAB_00e79088:
      *psVar8 = sVar3 + 1;
      lVar7 = *(long *)(lVar12 + 0x18);
      if (((int)*(short *)(lVar7 + 0x1a) + (int)*(short *)(lVar7 + 0x62) + 1U <=
           *(uint *)(lVar7 + 8)) || (iVar5 = FUN_00e13cd0(lVar7,1,0), iVar5 == 0)) {
        lVar7 = *(long *)(lVar12 + 0x28);
        if (*(char *)(lVar12 + 0x59) != '\0') {
          sVar3 = *(short *)(lVar7 + 2);
          lVar11 = *(long *)(lVar7 + 0x10);
          plVar4 = (long *)(*(long *)(lVar7 + 8) + (long)sVar3 * 0x10);
          plVar4[1] = lVar10 >> 10;
          *plVar4 = lVar6 >> 10;
          *(undefined1 *)(lVar11 + sVar3) = 1;
        }
        *(short *)(lVar7 + 2) = *(short *)(lVar7 + 2) + 1;
        goto LAB_00e78ef0;
      }
    }
    else {
      lVar7 = *(long *)(lVar12 + 0x18);
      if (((int)*(short *)(lVar7 + 0x18) + (int)*(short *)(lVar7 + 0x60) + 1U <=
           *(uint *)(lVar7 + 0xc)) || (iVar5 = FUN_00e13cd0(lVar7,0,1), iVar5 == 0)) {
        sVar3 = *psVar8;
        if (0 < (long)sVar3) {
          *(short *)(*(long *)(psVar8 + 0xc) + (long)sVar3 * 2 + -2) = psVar8[1] + -1;
          sVar3 = *psVar8;
        }
        goto LAB_00e79088;
      }
    }
  }
  else {
LAB_00e78ef0:
    lVar6 = *(long *)(lVar12 + 0x18);
    if (((int)*(short *)(lVar6 + 0x1a) + (int)*(short *)(lVar6 + 0x62) + 3U <= *(uint *)(lVar6 + 8))
       || (iVar5 = FUN_00e13cd0(lVar6,3,0), iVar5 == 0)) {
      lVar6 = *(long *)(lVar12 + 0x28);
      if (*(char *)(lVar12 + 0x59) == '\0') {
        *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
        lVar10 = lVar6;
      }
      else {
        lVar7 = param_2[2];
        sVar3 = *(short *)(lVar6 + 2);
        lVar10 = *(long *)(lVar6 + 0x10);
        plVar4 = (long *)(*(long *)(lVar6 + 8) + (long)sVar3 * 0x10);
        plVar4[1] = param_2[3] >> 10;
        *plVar4 = lVar7 >> 10;
        *(undefined1 *)(lVar10 + sVar3) = 2;
        cVar2 = *(char *)(lVar12 + 0x59);
        lVar10 = *(long *)(lVar12 + 0x28);
        *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + 1;
        if (cVar2 != '\0') {
          lVar7 = param_2[4];
          sVar3 = *(short *)(lVar10 + 2);
          lVar6 = *(long *)(lVar10 + 0x10);
          plVar4 = (long *)(*(long *)(lVar10 + 8) + (long)sVar3 * 0x10);
          plVar4[1] = param_2[5] >> 10;
          *plVar4 = lVar7 >> 10;
          *(undefined1 *)(lVar6 + sVar3) = 2;
          cVar2 = *(char *)(lVar12 + 0x59);
          lVar12 = *(long *)(lVar12 + 0x28);
          *(short *)(lVar10 + 2) = *(short *)(lVar10 + 2) + 1;
          if (cVar2 == '\0') {
            psVar8 = (short *)(lVar12 + 2);
          }
          else {
            lVar10 = param_2[6];
            psVar8 = (short *)(lVar12 + 2);
            sVar3 = *psVar8;
            lVar6 = *(long *)(lVar12 + 0x10);
            plVar4 = (long *)(*(long *)(lVar12 + 8) + (long)sVar3 * 0x10);
            plVar4[1] = param_2[7] >> 10;
            *plVar4 = lVar10 >> 10;
            *(undefined1 *)(lVar6 + sVar3) = 1;
          }
          goto LAB_00e7906c;
        }
      }
      psVar8 = (short *)(lVar10 + 2);
      *psVar8 = *(short *)(lVar10 + 2) + 1;
LAB_00e7906c:
      *psVar8 = *psVar8 + 1;
      return;
    }
  }
  piVar9 = *(int **)(param_1 + 0x30);
  iVar1 = *piVar9;
joined_r0x00e79054:
  if (iVar1 == 0) {
    *piVar9 = iVar5;
  }
  return;
}


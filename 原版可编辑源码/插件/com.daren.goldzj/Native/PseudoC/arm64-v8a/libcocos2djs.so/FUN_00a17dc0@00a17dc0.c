
undefined8 FUN_00a17dc0(long *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  
                    /* try { // try from 00a17dcc to 00b17dd7 has its CatchHandler @ 00a17e6c */
  lVar10 = *param_1;
  if ((int)param_1[0x30] == 2) {
    bVar2 = *(char *)((long)param_1 + (long)param_4 + 0x3d9) == '\0';
  }
  else {
    bVar2 = false;
  }
  plVar1 = param_1 + 0x2b;
  if (!bVar2) {
    plVar1 = param_1 + 0x16;
  }
  lVar9 = plVar1[2];
  plVar1 = param_1 + 0x67;
  if (bVar2) {
    iVar11 = (int)param_1[0x33];
    plVar1 = param_1 + 0x6f;
  }
  else {
    iVar11 = (int)param_1[0x34];
  }
  *param_2 = 0;
  if (*(char *)(lVar10 + 0x5b0) != '\0') {
    pbVar6 = *(byte **)(lVar10 + 0x70);
    if ((pbVar6 == (byte *)0x0) || ((*pbVar6 >> 4 & 1) == 0)) {
      pbVar6 = (byte *)(lVar10 + 0x8b38);
      lVar7 = *(long *)(lVar10 + 0x5b8);
    }
    else {
      pbVar6 = pbVar6 + 0x68;
      lVar7 = *(long *)(lVar10 + 0x5b8);
    }
    if (lVar7 != 0) {
      uVar12 = 0;
      lVar7 = 0x20;
      do {
        lVar8 = *(long *)(lVar10 + 0x8b30);
        if ((*(long *)(lVar8 + lVar7 + -8) != 0) &&
           (iVar3 = FUN_00a33710(lVar9,*(undefined8 *)(lVar8 + lVar7 + -0x20)), iVar3 != 0)) {
          lVar5 = *(long *)(lVar8 + lVar7 + -0x18);
          if (*(char *)((long)param_1 + 0x3bb) == '\0') {
            if (lVar5 == 0) goto LAB_00a17edc;
          }
          else if ((lVar5 != 0) && (iVar3 = FUN_00a33710(param_1[0x1d]), iVar3 != 0)) {
LAB_00a17edc:
            iVar3 = *(int *)(lVar8 + lVar7 + 0x14);
            if (*(char *)((long)param_1 + 0x3bc) == '\0') {
              if (iVar3 == -1) goto LAB_00a17f0c;
            }
            else if ((iVar3 != -1) && (*(int *)((long)param_1 + 0x1a4) == iVar3)) {
LAB_00a17f0c:
              if ((iVar11 == *(int *)(lVar8 + lVar7 + 0x10)) &&
                 (iVar3 = FUN_00a33710(*(undefined8 *)param_1[0x80],
                                       *(undefined8 *)(lVar8 + lVar7 + -0x10)), iVar3 != 0)) {
                lVar5 = lVar8 + lVar7;
                uVar4 = FUN_00a178f0(plVar1,lVar5 + 0x18);
                if ((uVar4 & 1) != 0) {
                  lVar10 = *(long *)pbVar6;
                  *(long *)pbVar6 = lVar10 + 1;
                  *(long *)(lVar5 + 8) = lVar10 + 1;
                  *param_2 = *(undefined8 *)(lVar5 + -8);
                  if (param_3 != (undefined8 *)0x0) {
                    *param_3 = *(undefined8 *)(lVar8 + lVar7);
                    return 0;
                  }
                  return 0;
                }
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
        lVar7 = lVar7 + 0x78;
      } while (uVar12 < *(ulong *)(lVar10 + 0x5b8));
    }
  }
  return 1;
}


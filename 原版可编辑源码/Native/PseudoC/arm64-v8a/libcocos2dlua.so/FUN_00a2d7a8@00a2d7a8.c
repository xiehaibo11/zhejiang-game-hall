
undefined8 FUN_00a2d7a8(long *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

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
                    /* try { // try from 00a2d850 to 00b2d89f has its CatchHandler @ 00a2d850
                       catch() { ... } // from try @ 00a2d850 with catch @ 00a2d850
                       catch() { ... } // from try @ 00a2d8e8 with catch @ 00a2d850
                       catch() { ... } // from try @ 00a2d968 with catch @ 00a2d850 */
    if (lVar7 != 0) {
      uVar12 = 0;
      lVar7 = 0x20;
      do {
        lVar8 = *(long *)(lVar10 + 0x8b30);
        if ((*(long *)(lVar8 + lVar7 + -8) != 0) &&
           (iVar3 = FUN_00a4a0f8(lVar9,*(undefined8 *)(lVar8 + lVar7 + -0x20)), iVar3 != 0)) {
                    /* try { // try from 00a2d8a0 to 00b2d8b7 has its CatchHandler @ 00a2d980 */
          lVar5 = *(long *)(lVar8 + lVar7 + -0x18);
          if (*(char *)((long)param_1 + 0x3bb) == '\0') {
            if (lVar5 == 0) goto LAB_00a2d8c4;
          }
          else if ((lVar5 != 0) && (iVar3 = FUN_00a4a0f8(param_1[0x1d]), iVar3 != 0)) {
LAB_00a2d8c4:
            iVar3 = *(int *)(lVar8 + lVar7 + 0x14);
            if (*(char *)((long)param_1 + 0x3bc) == '\0') {
              if (iVar3 == -1) goto LAB_00a2d8f4;
            }
            else if ((iVar3 != -1) && (*(int *)((long)param_1 + 0x1a4) == iVar3)) {
LAB_00a2d8f4:
                    /* try { // try from 00a2d910 to 00b2d923 has its CatchHandler @ 00a2d980 */
              if ((iVar11 == *(int *)(lVar8 + lVar7 + 0x10)) &&
                 (iVar3 = FUN_00a4a0f8(*(undefined8 *)param_1[0x80],
                                       *(undefined8 *)(lVar8 + lVar7 + -0x10)), iVar3 != 0)) {
                lVar5 = lVar8 + lVar7;
                uVar4 = FUN_00a2d2d8(plVar1,lVar5 + 0x18);
                if ((uVar4 & 1) != 0) {
                    /* try { // try from 00a2d968 to 00b2d99b has its CatchHandler @ 00a2d850 */
                  lVar10 = *(long *)pbVar6;
                  *(long *)pbVar6 = lVar10 + 1;
                  *(long *)(lVar5 + 8) = lVar10 + 1;
                    /* catch() { ... } // from try @ 00a2d8bc with catch @ 00a2d97c
                       catch() { ... } // from try @ 00a2d960 with catch @ 00a2d97c */
                  *param_2 = *(undefined8 *)(lVar5 + -8);
                    /* catch() { ... } // from try @ 00a2d8a0 with catch @ 00a2d980
                       catch() { ... } // from try @ 00a2d910 with catch @ 00a2d980 */
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
                    /* try { // try from 00a2d960 to 00b2d967 has its CatchHandler @ 00a2d97c */
  return 1;
}


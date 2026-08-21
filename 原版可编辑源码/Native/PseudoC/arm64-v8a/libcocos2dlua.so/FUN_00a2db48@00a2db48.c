
undefined8 FUN_00a2db48(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  lVar11 = *param_1;
  plVar1 = (long *)(lVar11 + 0x8b30);
  plVar12 = (long *)*plVar1;
  lVar14 = plVar12[5];
  if ((int)param_1[0x30] == 2) {
    bVar4 = *(char *)((long)param_1 + (long)param_4 + 0x3d9) == '\0';
  }
  else {
    bVar4 = false;
  }
  plVar2 = param_1 + 0x2b;
  if (!bVar4) {
    plVar2 = param_1 + 0x16;
  }
  plVar3 = param_1 + 0x6f;
  if (!bVar4) {
    plVar3 = param_1 + 0x67;
  }
  lVar5 = (*(code *)PTR_strdup_01769a10)(plVar2[2]);
  if (lVar5 == 0) {
    return 0x1b;
  }
  if (*(char *)((long)param_1 + 0x3bb) == '\0') {
    lVar6 = 0;
    if (*(char *)((long)param_1 + 0x3bc) != '\0') goto LAB_00a2dc0c;
LAB_00a2dc20:
    uVar7 = 0xffffffff;
  }
  else {
    lVar6 = (*(code *)PTR_strdup_01769a10)(param_1[0x1d]);
    if (lVar6 == 0) goto LAB_00a2ddec;
                    /* try { // try from 00a2dc08 to 00b2dc3b has its CatchHandler @ 00a2dd08 */
    if (*(char *)((long)param_1 + 0x3bc) == '\0') goto LAB_00a2dc20;
LAB_00a2dc0c:
    uVar7 = *(undefined4 *)((long)param_1 + 0x1a4);
  }
  pbVar8 = *(byte **)(lVar11 + 0x70);
  if ((pbVar8 == (byte *)0x0) || ((*pbVar8 >> 4 & 1) == 0)) {
                    /* try { // try from 00a2dc3c to 00b2dc4f has its CatchHandler @ 00a2dcd4 */
    pbVar8 = (byte *)(lVar11 + 0x8b38);
  }
  else {
    pbVar8 = pbVar8 + 0x68;
  }
  uVar9 = *(ulong *)(lVar11 + 0x5b8);
  if (uVar9 < 2) {
    uVar10 = 1;
    if (uVar9 != 1) goto LAB_00a2dd58;
LAB_00a2dca4:
    if ((SSL_SESSION *)plVar12[3] != (SSL_SESSION *)0x0) {
      SSL_SESSION_free((SSL_SESSION *)plVar12[3]);
      plVar12[3] = 0;
      plVar12[5] = 0;
      (*(code *)PTR_free_01769a00)(plVar12[10]);
      plVar12[10] = 0;
                    /* catch() { ... } // from try @ 00a2dc3c with catch @ 00a2dcd4 */
                    /* catch() { ... } // from try @ 00a2dc54 with catch @ 00a2dcd8 */
      (*(code *)PTR_free_01769a00)(plVar12[9]);
      plVar12[9] = 0;
      (*(code *)PTR_free_01769a00)(plVar12[0xe]);
      plVar12[0xe] = 0;
      (*(code *)PTR_free_01769a00)(plVar12[0xd]);
      plVar12[0xd] = 0;
                    /* catch() { ... } // from try @ 00a2dc08 with catch @ 00a2dd08 */
      (*(code *)PTR_free_01769a00)(plVar12[0xc]);
      plVar12[0xc] = 0;
      (*(code *)PTR_free_01769a00)(plVar12[0xb]);
      plVar12[0xb] = 0;
      (*(code *)PTR_free_01769a00)(*plVar12);
      *plVar12 = 0;
      (*(code *)PTR_free_01769a00)(plVar12[1]);
      plVar12[1] = 0;
    }
  }
  else {
    uVar10 = 1;
    plVar13 = plVar12;
    plVar2 = (long *)*plVar1;
    do {
      plVar12 = plVar13;
      if (plVar2[0x12] == 0) break;
      uVar10 = uVar10 + 1;
                    /* try { // try from 00a2dc88 to 00b2dd23 has its CatchHandler @ 00a2db08 */
      plVar12 = plVar2 + 0xf;
      lVar11 = plVar2[0x14];
      if (lVar14 <= plVar2[0x14]) {
        plVar12 = plVar13;
        lVar11 = lVar14;
      }
      lVar14 = lVar11;
      plVar13 = plVar12;
      plVar2 = plVar2 + 0xf;
    } while (uVar10 < uVar9);
    if (uVar10 == uVar9) goto LAB_00a2dca4;
LAB_00a2dd58:
    plVar12 = (long *)(*plVar1 + uVar10 * 0x78);
  }
  plVar12[3] = param_2;
  plVar12[4] = param_3;
  plVar12[5] = *(long *)pbVar8;
  (*(code *)PTR_free_01769a00)(*plVar12);
  (*(code *)PTR_free_01769a00)(plVar12[1]);
  *plVar12 = lVar5;
  plVar12[1] = lVar6;
  *(undefined4 *)((long)plVar12 + 0x34) = uVar7;
  if (bVar4) {
    uVar7 = (undefined4)param_1[0x33];
  }
  else {
    uVar7 = (undefined4)param_1[0x34];
  }
  *(undefined4 *)(plVar12 + 6) = uVar7;
  plVar12[2] = *(long *)param_1[0x80];
  uVar9 = FUN_00a2d374(plVar3,plVar12 + 7);
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  plVar12[3] = 0;
  (*(code *)PTR_free_01769a00)(lVar5);
  lVar5 = lVar6;
LAB_00a2ddec:
  (*(code *)PTR_free_01769a00)(lVar5);
                    /* try { // try from 00a2de08 to 00b2de5f has its CatchHandler @ 00a2de08
                       catch() { ... } // from try @ 00a2de08 with catch @ 00a2de08
                       catch() { ... } // from try @ 00a2de64 with catch @ 00a2de08 */
  return 0x1b;
}


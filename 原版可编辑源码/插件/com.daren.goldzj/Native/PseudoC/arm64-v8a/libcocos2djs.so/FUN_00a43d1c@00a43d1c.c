
undefined8 FUN_00a43d1c(char *param_1,long param_2,undefined1 *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = 0;
  cVar2 = *param_1;
  while (((cVar2 != '\0' && (cVar2 != '=')) && ((int)lVar6 != 0xff))) {
    *(char *)(param_2 + lVar6) = cVar2;
    lVar6 = lVar6 + 1;
                    /* try { // try from 00a43d34 to 00b43d8f has its CatchHandler @ 00a43d34
                       catch() { ... } // from try @ 00a43d34 with catch @ 00a43d34
                       catch() { ... } // from try @ 00a43f50 with catch @ 00a43d34 */
    cVar2 = param_1[lVar6];
  }
  param_1 = param_1 + lVar6;
  *(undefined1 *)(param_2 + lVar6) = 0;
  pbVar7 = (byte *)(param_1 + 1);
  uVar4 = 0;
  if (*param_1 == '=') {
    pbVar8 = (byte *)(param_1 + 2);
    pbVar9 = pbVar8;
    if (*pbVar7 != 0x22) {
      pbVar9 = pbVar7;
    }
    uVar10 = (uint)*pbVar9;
    if (*pbVar9 != 0) {
      if (*pbVar7 == 0x22) {
        bVar3 = false;
        iVar11 = 0x3ff;
                    /* try { // try from 00a43d90 to 00b43da7 has its CatchHandler @ 00a43fd4 */
        puVar5 = param_3;
        do {
          while( true ) {
            param_3 = puVar5;
            pbVar9 = pbVar8;
            if (iVar11 == 0) goto LAB_00a43ea0;
            iVar11 = iVar11 + -1;
            if (0x21 < uVar10) break;
                    /* try { // try from 00a43db0 to 00b43dbb has its CatchHandler @ 00a43fd0 */
            if (uVar10 == 10) {
              bVar1 = pbVar8[1];
            }
            else {
              if (uVar10 != 0xd) goto LAB_00a43e08;
                    /* try { // try from 00a43dbc to 00b43dc7 has its CatchHandler @ 00a43fcc */
              bVar1 = pbVar8[1];
            }
            iVar11 = 0;
joined_r0x00a43dec:
            uVar10 = (uint)bVar1;
            pbVar8 = pbVar8 + 1;
            puVar5 = param_3;
            pbVar9 = pbVar8;
            if (uVar10 == 0) goto LAB_00a43ea0;
          }
          if (uVar10 != 0x5c) {
            if ((uVar10 != 0x22) || (bVar3)) goto LAB_00a43e08;
            iVar11 = 0;
            bVar3 = false;
            bVar1 = pbVar8[1];
            goto joined_r0x00a43dec;
          }
          if (bVar3) {
LAB_00a43e08:
            bVar3 = false;
            *puVar5 = (char)uVar10;
            bVar1 = pbVar8[1];
            param_3 = puVar5 + 1;
            goto joined_r0x00a43dec;
          }
          param_3 = puVar5 + 1;
          *puVar5 = 0x5c;
          bVar3 = true;
          pbVar8 = pbVar8 + 1;
          uVar10 = (uint)*pbVar8;
          puVar5 = param_3;
          pbVar9 = pbVar8;
        } while (uVar10 != 0);
      }
      else {
        bVar3 = false;
        iVar11 = 0x3ff;
        puVar5 = param_3;
        do {
          param_3 = puVar5;
          pbVar9 = pbVar7;
          if (iVar11 == 0) break;
          if ((uVar10 < 0x2d) && ((1L << ((ulong)uVar10 & 0x3f) & 0x100000002400U) != 0)) {
            iVar11 = 0;
          }
          else {
            iVar11 = iVar11 + -1;
            if ((uVar10 != 0x5c) || (bVar3)) {
              bVar3 = false;
              param_3 = puVar5 + 1;
              *puVar5 = (char)uVar10;
            }
            else {
              param_3 = puVar5 + 1;
              *puVar5 = 0x5c;
              bVar3 = true;
            }
          }
          pbVar7 = pbVar7 + 1;
          uVar10 = (uint)*pbVar7;
          puVar5 = param_3;
          pbVar9 = pbVar7;
        } while (uVar10 != 0);
      }
    }
LAB_00a43ea0:
    uVar4 = 1;
    *param_3 = 0;
    *param_4 = (long)pbVar9;
  }
  return uVar4;
}


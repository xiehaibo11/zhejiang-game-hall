
undefined8 FT_Done_Library(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  
  if (param_1 == (long *)0x0) {
    uVar5 = 0x21;
  }
  else {
    lVar9 = param_1[0x2d];
                    /* catch() { ... } // from try @ 01060d50 with catch @ 01060d18 */
    iVar4 = (int)lVar9 + -1;
    *(int *)(param_1 + 0x2d) = iVar4;
    if (iVar4 == 0 || (int)lVar9 < 1) {
      lVar9 = *param_1;
      if (*(int *)((long)param_1 + 0x14) != 0) {
        uVar14 = 0;
        do {
          puVar15 = (undefined8 *)param_1[(ulong)uVar14 + 3];
                    /* try { // try from 01060d48 to 01160d4f has its CatchHandler @ 01060db4 */
          pbVar10 = (byte *)*puVar15;
                    /* try { // try from 01060d50 to 01160dcf has its CatchHandler @ 01060d18 */
          iVar4 = strcmp(*(char **)(pbVar10 + 0x10),"type42");
          if ((iVar4 == 0) && ((*pbVar10 & 1) != 0)) {
            lVar7 = puVar15[4];
joined_r0x01060d64:
            if (lVar7 != 0) {
              lVar11 = *(long *)(lVar7 + 0x10);
              lVar12 = *(long *)(lVar11 + 0xb0);
              plVar6 = *(long **)(lVar12 + 0x20);
              iVar4 = *(int *)(*(long *)(lVar11 + 0xf0) + 0x6c);
              do {
                do {
                } while (lVar11 == 0 || lVar12 == 0);
                iVar3 = iVar4 + -1;
                bVar1 = 0 < iVar4;
                iVar4 = iVar3;
              } while ((iVar3 != 0 && bVar1) || (plVar6 == (long *)0x0));
              *(int *)(*(long *)(lVar11 + 0xf0) + 0x6c) = iVar3;
              lVar13 = *(long *)(lVar12 + 0x10);
              do {
                    /* catch() { ... } // from try @ 01060d48 with catch @ 01060db4 */
                if (plVar6[2] == lVar11) {
                  lVar7 = *plVar6;
                  plVar6 = (long *)plVar6[1];
                  puVar2 = (undefined8 *)(lVar7 + 8);
                  if (lVar7 == 0) {
                    puVar2 = (undefined8 *)(lVar12 + 0x20);
                  }
                  *puVar2 = plVar6;
                  if (plVar6 == (long *)0x0) {
                    plVar6 = (long *)(lVar12 + 0x28);
                  }
                  *plVar6 = lVar7;
                  (**(code **)(lVar13 + 0x10))(lVar13);
                  FUN_0105db48(lVar13,lVar11,lVar12);
                  lVar7 = puVar15[4];
                  break;
                }
                plVar6 = (long *)plVar6[1];
              } while (plVar6 != (long *)0x0);
              goto joined_r0x01060d64;
            }
          }
          uVar8 = *(uint *)((long)param_1 + 0x14);
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar8);
        if (uVar8 != 0) {
          uVar14 = 0;
          do {
            puVar15 = (undefined8 *)param_1[(ulong)uVar14 + 3];
            if (((*(byte *)*puVar15 & 1) != 0) && (lVar7 = puVar15[4], lVar7 != 0)) {
              do {
                lVar11 = *(long *)(lVar7 + 0x10);
                lVar12 = *(long *)(lVar11 + 0xb0);
                plVar6 = *(long **)(lVar12 + 0x20);
                iVar4 = *(int *)(*(long *)(lVar11 + 0xf0) + 0x6c);
                do {
                  do {
                  } while (lVar11 == 0 || lVar12 == 0);
                  iVar3 = iVar4 + -1;
                  bVar1 = 0 < iVar4;
                  iVar4 = iVar3;
                } while ((iVar3 != 0 && bVar1) || (plVar6 == (long *)0x0));
                *(int *)(*(long *)(lVar11 + 0xf0) + 0x6c) = iVar3;
                lVar13 = *(long *)(lVar12 + 0x10);
                do {
                  if (plVar6[2] == lVar11) {
                    lVar7 = *plVar6;
                    plVar6 = (long *)plVar6[1];
                    puVar2 = (undefined8 *)(lVar7 + 8);
                    if (lVar7 == 0) {
                      puVar2 = (undefined8 *)(lVar12 + 0x20);
                    }
                    /* catch() { ... } // from try @ 01060ef4 with catch @ 01060ebc */
                    *puVar2 = plVar6;
                    if (plVar6 == (long *)0x0) {
                      plVar6 = (long *)(lVar12 + 0x28);
                    }
                    *plVar6 = lVar7;
                    (**(code **)(lVar13 + 0x10))(lVar13);
                    FUN_0105db48(lVar13,lVar11,lVar12);
                    lVar7 = puVar15[4];
                    break;
                  }
                  plVar6 = (long *)plVar6[1];
                } while (plVar6 != (long *)0x0);
              } while (lVar7 != 0);
                    /* try { // try from 01060eec to 01160ef3 has its CatchHandler @ 01060f58 */
              uVar8 = *(uint *)((long)param_1 + 0x14);
            }
            uVar14 = uVar14 + 1;
                    /* try { // try from 01060ef4 to 01160f73 has its CatchHandler @ 01060ebc */
          } while (uVar14 < uVar8);
          while (uVar8 != 0) {
            FT_Remove_Module(param_1,param_1[(ulong)(uVar8 - 1) + 3]);
            uVar8 = *(uint *)((long)param_1 + 0x14);
          }
        }
      }
      if (param_1[0x27] != 0) {
        (**(code **)(lVar9 + 0x10))(lVar9);
      }
      param_1[0x27] = 0;
      param_1[0x28] = 0;
      (**(code **)(lVar9 + 0x10))(lVar9,param_1);
    }
    uVar5 = 0;
  }
                    /* catch() { ... } // from try @ 01060eec with catch @ 01060f58 */
  return uVar5;
}


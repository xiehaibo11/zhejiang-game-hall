
void FUN_010901bc(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  long local_88;
  ulong local_70;
  int local_64;
  
                    /* catch() { ... } // from try @ 0108fe60 with catch @ 010901d8
                       catch() { ... } // from try @ 01090198 with catch @ 010901d8 */
  lVar13 = param_2[4];
                    /* catch() { ... } // from try @ 010900c4 with catch @ 010901e8 */
  pbVar14 = (byte *)param_2[2];
                    /* catch() { ... } // from try @ 0108ffec with catch @ 010901ec */
  (*(code *)param_2[7])(param_2);
  pbVar6 = (byte *)*param_2;
                    /* catch() { ... } // from try @ 0109009c with catch @ 010901fc */
                    /* catch() { ... } // from try @ 01090068 with catch @ 01090200 */
                    /* catch() { ... } // from try @ 01090058 with catch @ 01090204 */
                    /* catch() { ... } // from try @ 0108ffc0 with catch @ 01090208 */
  if ((pbVar6 < pbVar14) && (*param_2 = (long)(pbVar6 + 1), *pbVar6 == 0x5b)) {
    (*(code *)param_2[7])(param_2);
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < pbVar14) {
      uVar11 = 0;
      uVar15 = 0;
      iVar9 = 0;
      lVar10 = 0;
      uVar12 = 0;
      bVar2 = false;
      local_88 = 0;
      do {
        bVar1 = *pbVar6;
        if (bVar1 == 0x3c) {
          (*(code *)param_2[8])(param_2);
                    /* try { // try from 010902e0 to 01190313 has its CatchHandler @ 010902e0
                       catch() { ... } // from try @ 010902e0 with catch @ 010902e0
                       catch() { ... } // from try @ 01090370 with catch @ 010902e0 */
          if ((int)param_2[3] != 0) {
LAB_01090558:
            if (!bVar2) {
              return;
            }
            goto LAB_01090524;
          }
          uVar3 = *param_2 - (long)pbVar6;
          uVar12 = uVar3;
          if (-1 < (long)(uVar3 - 1)) {
            uVar12 = uVar3 - 1;
          }
          if (2 < uVar3) {
            lVar7 = (long)uVar12 >> 1;
                    /* try { // try from 01090314 to 01190323 has its CatchHandler @ 01090460 */
            lVar10 = ft_mem_realloc(lVar13,1,local_88,lVar7,lVar10,&local_64);
            if (local_64 == 0) {
              *param_2 = (long)pbVar6;
                    /* try { // try from 01090350 to 01190363 has its CatchHandler @ 010903fc */
              bVar2 = true;
              (*(code *)param_2[0xb])(param_2,lVar10,lVar7,&local_70,1);
              uVar3 = local_70;
              local_88 = lVar7;
              if (lVar10 != 0) goto joined_r0x010902cc;
LAB_010904e0:
              local_64 = 3;
            }
            goto LAB_01090518;
          }
          break;
        }
        if (bVar1 == 0x5d) {
          *param_2 = (long)(pbVar6 + 1);
          goto LAB_01090558;
        }
                    /* catch() { ... } // from try @ 0108ff84 with catch @ 01090268 */
        if (bVar1 - 0x30 < 10) {
          if (!bVar2) {
            uVar3 = (*(code *)param_2[9])(param_2);
                    /* catch() { ... } // from try @ 0108ff74 with catch @ 01090288 */
            if (-1 < (long)uVar3) {
              (*(code *)param_2[8])(param_2);
                    /* catch() { ... } // from try @ 0108ff30 with catch @ 0109029c */
              if ((int)param_2[3] != 0) {
                return;
              }
              lVar7 = *param_2;
              lVar10 = lVar7 + 1;
              if ((long)uVar3 <= (long)pbVar14 - lVar7) {
                    /* catch() { ... } // from try @ 0108fdf4 with catch @ 010902c4 */
                bVar2 = false;
                *param_2 = lVar7 + uVar3 + 1;
                goto joined_r0x010902cc;
              }
              goto LAB_010904f0;
            }
            bVar2 = false;
          }
          local_64 = 3;
          goto LAB_01090518;
        }
        uVar3 = uVar12;
        if (lVar10 == 0) goto LAB_010904e0;
joined_r0x010902cc:
        uVar12 = uVar3;
                    /* try { // try from 01090370 to 0119047b has its CatchHandler @ 010902e0 */
        if (((uVar3 & 1) != 0) && (uVar12 = uVar3 - 1, *(char *)(lVar10 + (uVar3 - 1)) != '\0')) {
          uVar12 = uVar3;
        }
        if (uVar12 == 0) goto LAB_010904e0;
        if (0 < (long)uVar12) {
          lVar7 = 0;
          uVar3 = uVar15;
          do {
            if (iVar9 == 2) {
LAB_01090488:
              if (*(ulong *)(param_1 + 0x318) <= uVar3) goto LAB_010904e0;
              iVar9 = 2;
LAB_01090498:
              lVar5 = *(long *)(param_1 + 0x310);
LAB_0109049c:
              uVar15 = uVar3 + 1;
              *(undefined1 *)(lVar5 + uVar3) = *(undefined1 *)(lVar10 + lVar7);
            }
            else {
              if (iVar9 == 1) {
LAB_010903fc:
                    /* catch() { ... } // from try @ 01090350 with catch @ 010903fc */
                uVar15 = *(ulong *)(param_1 + 0x318);
                if (uVar3 < uVar15) {
                  iVar9 = 1;
                  goto LAB_01090498;
                }
                if (uVar11 != 0) {
                  uVar8 = (ulong)uVar11;
                  pbVar6 = (byte *)(*(long *)(param_1 + 0x310) + 0x1b);
                  do {
                    uVar8 = uVar8 - 1;
                    uVar15 = (((ulong)pbVar6[-3] << 0x18 | (ulong)pbVar6[-2] << 0x10 |
                               (ulong)pbVar6[-1] << 8 | (ulong)*pbVar6) + 3 & 0x1fffffffc) + uVar15;
                    *(ulong *)(param_1 + 0x318) = uVar15;
                    pbVar6 = pbVar6 + 0x10;
                  } while (uVar8 != 0);
                }
                    /* catch() { ... } // from try @ 01090314 with catch @ 01090460 */
                uVar4 = ft_mem_realloc(lVar13,1,uVar11 << 4 | 0xc,uVar15 + 1,
                                       *(long *)(param_1 + 0x310),&local_64);
                    /* try { // try from 0109047c to 011904af has its CatchHandler @ 0109047c
                       catch() { ... } // from try @ 0109047c with catch @ 0109047c
                       catch() { ... } // from try @ 0109050c with catch @ 0109047c */
                *(undefined8 *)(param_1 + 0x310) = uVar4;
                if (local_64 == 0) goto LAB_01090488;
                goto LAB_01090518;
              }
              uVar15 = uVar3;
              if (iVar9 == 0) {
                lVar5 = *(long *)(param_1 + 0x310);
                if (uVar3 < 0xc) {
                  iVar9 = 0;
                  goto LAB_0109049c;
                }
                uVar11 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x10;
                uVar15 = (ulong)(uVar11 * 0x10 | 0xc);
                *(ulong *)(param_1 + 0x318) = uVar15;
                if (uVar15 <= (ulong)((long)pbVar14 - *param_2)) {
                    /* catch() { ... } // from try @ 01090364 with catch @ 010903ec */
                  uVar4 = ft_mem_realloc(lVar13,1,0xc,uVar15,lVar5,&local_64);
                  *(undefined8 *)(param_1 + 0x310) = uVar4;
                  if (local_64 == 0) goto LAB_010903fc;
                  goto LAB_01090518;
                }
                goto LAB_010904e0;
              }
            }
            lVar7 = lVar7 + 1;
                    /* try { // try from 010904b0 to 011904bf has its CatchHandler @ 010905fc */
            uVar3 = uVar15;
          } while (lVar7 < (long)uVar12);
        }
        (*(code *)param_2[7])(param_2);
        pbVar6 = (byte *)*param_2;
      } while (pbVar6 < pbVar14);
    }
    else {
                    /* try { // try from 01090500 to 0119050b has its CatchHandler @ 01090588 */
      lVar10 = 0;
      bVar2 = false;
    }
                    /* try { // try from 0109050c to 01190617 has its CatchHandler @ 0109047c */
    local_64 = 3;
  }
  else {
                    /* try { // try from 010904ec to 011904ff has its CatchHandler @ 01090598 */
    lVar10 = 0;
LAB_010904f0:
    bVar2 = false;
    local_64 = 3;
  }
LAB_01090518:
  *(int *)(param_2 + 3) = local_64;
  if (bVar2) {
LAB_01090524:
    ft_mem_free(lVar13,lVar10);
  }
  return;
}


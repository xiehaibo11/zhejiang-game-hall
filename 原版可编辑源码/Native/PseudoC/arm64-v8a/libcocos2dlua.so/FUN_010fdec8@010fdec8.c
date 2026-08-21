
void FUN_010fdec8(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar10 = param_1[0x4e];
  iVar12 = *(int *)((long)param_1 + 0x21c);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((((iVar12 != 0) || (*(int *)((long)param_1 + 0x224) != 0)) || ((int)param_1[0x45] != 0)) ||
       ((((int)param_1[0x27] != 0 || ((int)param_1[0x44] < 0x40)) &&
        ((int)param_1[0x44] != (int)param_1[0x47])))) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x7d;
      (**(code **)(lVar11 + 8))(param_1,0xffffffff);
    }
    pcVar2 = FUN_010ff8a4;
    if ((int)param_1[0x47] == 0x3f) {
      pcVar2 = FUN_010ffd3c;
    }
    *(code **)(lVar10 + 8) = pcVar2;
    if (0 < (int)param_1[0x38]) {
      lVar11 = 0;
      do {
        lVar7 = param_1[lVar11 + 0x39];
        lVar14 = (long)*(int *)(lVar7 + 0x14);
        FUN_010fefbc(param_1,1,lVar14,lVar10 + lVar14 * 8 + 0x70);
        if ((int)param_1[0x47] != 0) {
          lVar14 = (long)*(int *)(lVar7 + 0x18);
          FUN_010fefbc(param_1,0,lVar14,lVar10 + lVar14 * 8 + 0x90);
        }
                    /* try { // try from 010fdfe8 to 011fe017 has its CatchHandler @ 010fdfe8
                       catch() { ... } // from try @ 010fdfe8 with catch @ 010fdfe8
                       catch() { ... } // from try @ 010fe024 with catch @ 010fdfe8 */
        *(undefined4 *)(lVar10 + 0x2c + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x38]);
    }
    if (0 < (int)param_1[0x3e]) {
                    /* try { // try from 010fe018 to 011fe023 has its CatchHandler @ 010fe030 */
                    /* try { // try from 010fe024 to 011fe043 has its CatchHandler @ 010fdfe8 */
      lVar11 = 0;
                    /* catch() { ... } // from try @ 010fe018 with catch @ 010fe030 */
                    /* try { // try from 010fe044 to 011fe077 has its CatchHandler @ 010fe044
                       catch() { ... } // from try @ 010fe044 with catch @ 010fe044
                       catch() { ... } // from try @ 010fe080 with catch @ 010fe044 */
                    /* try { // try from 010fe078 to 011fe07f has its CatchHandler @ 010fe08c */
      do {
                    /* try { // try from 010fe080 to 011fe09f has its CatchHandler @ 010fe044 */
        lVar14 = lVar10 + 0x150 + lVar11 * 8;
        lVar7 = param_1[(long)*(int *)((long)param_1 + lVar11 * 4 + 500) + 0x39];
                    /* catch() { ... } // from try @ 010fe078 with catch @ 010fe08c */
        *(undefined8 *)(lVar14 + -0xa0) =
             *(undefined8 *)(lVar10 + (long)*(int *)(lVar7 + 0x14) * 8 + 0x70);
                    /* try { // try from 010fe0a0 to 011fe0d3 has its CatchHandler @ 010fe0a0
                       catch() { ... } // from try @ 010fe0a0 with catch @ 010fe0a0
                       catch() { ... } // from try @ 010fe0dc with catch @ 010fe0a0 */
        *(undefined8 *)(lVar14 + -0x50) =
             *(undefined8 *)(lVar10 + (long)*(int *)(lVar7 + 0x18) * 8 + 0x90);
        if (*(int *)(lVar7 + 0x34) == 0) {
                    /* try { // try from 010fe0fc to 011fe143 has its CatchHandler @ 010fe0fc
                       catch() { ... } // from try @ 010fe0fc with catch @ 010fe0fc
                       catch() { ... } // from try @ 010fe148 with catch @ 010fe0fc */
          iVar12 = 0;
        }
        else {
          iVar6 = *(int *)(lVar7 + 0x24);
          iVar3 = *(int *)(lVar7 + 0x28);
          iVar12 = 1;
          switch((int)param_1[0x47]) {
          case 0:
            goto switchD_010fe0d0_caseD_0;
          default:
            lVar14 = 7;
            if (iVar3 - 1U < 8) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
            lVar7 = 7;
            if (iVar6 - 1U < 8) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &UNK_01479020 + lVar14 * 0x20;
            break;
          case 3:
                    /* try { // try from 010fe0d4 to 011fe0db has its CatchHandler @ 010fe0e8 */
                    /* try { // try from 010fe0dc to 011fe0fb has its CatchHandler @ 010fe0a0 */
            lVar14 = (long)(int)(iVar3 - 1U);
            lVar7 = (long)(int)(iVar6 - 1U);
                    /* catch() { ... } // from try @ 010fe0d4 with catch @ 010fe0e8 */
            if (1 < iVar3 - 1U) {
              lVar14 = 1;
            }
            if (1 < iVar6 - 1U) {
              lVar7 = 1;
            }
            puVar13 = &UNK_01478df4 + lVar14 * 8;
            break;
          case 8:
            lVar14 = 2;
            if (iVar3 - 1U < 3) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
                    /* try { // try from 010fe144 to 011fe147 has its CatchHandler @ 010fe154 */
                    /* try { // try from 010fe148 to 011fe167 has its CatchHandler @ 010fe0fc */
            lVar7 = 2;
            if (iVar6 - 1U < 3) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &UNK_01478e04 + lVar14 * 0xc;
            break;
          case 0xf:
                    /* catch() { ... } // from try @ 010fe144 with catch @ 010fe154 */
            lVar14 = 3;
            if (iVar3 - 1U < 4) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
            lVar7 = 3;
            if (iVar6 - 1U < 4) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &DAT_01478e28 + lVar14 * 0x10;
            break;
          case 0x18:
            lVar14 = 4;
            if (iVar3 - 1U < 5) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
            lVar7 = 4;
            if (iVar6 - 1U < 5) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &UNK_01478e68 + lVar14 * 0x14;
            break;
          case 0x23:
            lVar14 = 5;
            if (iVar3 - 1U < 6) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
            lVar7 = 5;
            if (iVar6 - 1U < 6) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &UNK_01478ecc + lVar14 * 0x18;
            break;
          case 0x30:
            lVar14 = 6;
            if (iVar3 - 1U < 7) {
              lVar14 = (long)(int)(iVar3 - 1U);
            }
            lVar7 = 6;
            if (iVar6 - 1U < 7) {
              lVar7 = (long)(int)(iVar6 - 1U);
            }
            puVar13 = &UNK_01478f5c + lVar14 * 0x1c;
          }
          iVar12 = *(int *)(puVar13 + lVar7 * 4) + 1;
        }
switchD_010fe0d0_caseD_0:
        *(int *)(lVar10 + 0x150 + lVar11 * 4) = iVar12;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x3e]);
    }
    goto LAB_010fe3d8;
  }
  iVar6 = (int)param_1[0x44];
  if (iVar12 == 0) {
    if (iVar6 == 0) goto LAB_010fdf20;
LAB_010fe214:
    puVar9 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar9 + 5) = 0x11;
    *(int *)((long)puVar9 + 0x2c) = iVar12;
    *(int *)(puVar9 + 6) = (int)param_1[0x44];
    *(undefined4 *)((long)puVar9 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
    *(int *)(puVar9 + 7) = (int)param_1[0x45];
    (*(code *)*puVar9)(param_1);
  }
  else {
                    /* try { // try from 010fdf0c to 011fdf13 has its CatchHandler @ 010fdf30 */
                    /* try { // try from 010fdf14 to 011fdf53 has its CatchHandler @ 010fde90 */
    if (((iVar6 < iVar12) || ((int)param_1[0x47] < iVar6)) || ((int)param_1[0x38] != 1))
    goto LAB_010fe214;
LAB_010fdf20:
    if (*(int *)((long)param_1 + 0x224) == 0) {
      iVar6 = (int)param_1[0x45];
    }
    else {
      iVar6 = *(int *)((long)param_1 + 0x224) + -1;
                    /* catch() { ... } // from try @ 010fdf0c with catch @ 010fdf30 */
      if (iVar6 != (int)param_1[0x45]) goto LAB_010fe214;
    }
    if (0xd < iVar6) goto LAB_010fe214;
  }
  iVar12 = (int)param_1[0x38];
  if (0 < iVar12) {
    lVar11 = 0;
    do {
      lVar14 = param_1[0x18];
      iVar12 = *(int *)(param_1[lVar11 + 0x39] + 4);
      iVar6 = *(int *)((long)param_1 + 0x21c);
      if ((iVar6 != 0) && (*(int *)(lVar14 + (long)iVar12 * 0x100) < 0)) {
        lVar7 = *param_1;
        *(undefined4 *)(lVar7 + 0x28) = 0x76;
        *(int *)(lVar7 + 0x2c) = iVar12;
        *(undefined4 *)(lVar7 + 0x30) = 0;
        (**(code **)(lVar7 + 8))(param_1,0xffffffff);
        iVar6 = *(int *)((long)param_1 + 0x21c);
      }
      if (iVar6 <= (int)param_1[0x44]) {
        lVar14 = lVar14 + (long)iVar12 * 0x100;
        lVar7 = (long)iVar6;
        do {
          uVar4 = *(uint *)(lVar14 + lVar7 * 4);
          if (*(uint *)((long)param_1 + 0x224) != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU))) {
            lVar8 = *param_1;
            *(undefined4 *)(lVar8 + 0x28) = 0x76;
            *(int *)(lVar8 + 0x2c) = iVar12;
            *(int *)(lVar8 + 0x30) = (int)lVar7;
            (**(code **)(lVar8 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar14 + lVar7 * 4) = (int)param_1[0x45];
          bVar1 = lVar7 < (int)param_1[0x44];
          lVar7 = lVar7 + 1;
        } while (bVar1);
      }
      iVar12 = (int)param_1[0x38];
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar12);
  }
  iVar6 = *(int *)((long)param_1 + 0x21c);
  pcVar2 = FUN_010fe468;
  pcVar5 = FUN_010fe98c;
  if (iVar6 != 0) {
    pcVar2 = FUN_010fe6e0;
    pcVar5 = FUN_010feafc;
  }
  if (*(int *)((long)param_1 + 0x224) != 0) {
    pcVar2 = pcVar5;
  }
  *(code **)(lVar10 + 8) = pcVar2;
  if (0 < iVar12) {
    lVar11 = 0;
    while( true ) {
      if (iVar6 == 0) {
        if (*(int *)((long)param_1 + 0x224) == 0) {
          lVar14 = (long)*(int *)(param_1[lVar11 + 0x39] + 0x14);
          FUN_010fefbc(param_1,1,lVar14,lVar10 + lVar14 * 8 + 0x48);
        }
      }
      else {
        lVar7 = (long)*(int *)(param_1[lVar11 + 0x39] + 0x18);
        lVar14 = lVar10 + lVar7 * 8;
        FUN_010fefbc(param_1,0,lVar7,lVar14 + 0x48);
        *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar14 + 0x48);
      }
      *(undefined4 *)(lVar10 + 0x2c + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
      if ((int)param_1[0x38] <= lVar11) break;
      iVar6 = *(int *)((long)param_1 + 0x21c);
    }
  }
  *(undefined4 *)(lVar10 + 0x28) = 0;
LAB_010fe3d8:
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0x3c) = 0;
  *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)((long)param_1 + 0x174);
  return;
}



void FUN_010f9ae8(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;
  
  iVar4 = *(int *)(param_1 + 0xe4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar3 = -1;
    uVar10 = 0xfffffff0;
    do {
      iVar4 = iVar4 >> 1;
                    /* try { // try from 010f9b28 to 011f9b6b has its CatchHandler @ 010f9b28
                       catch() { ... } // from try @ 010f9b28 with catch @ 010f9b28
                       catch() { ... } // from try @ 010f9b94 with catch @ 010f9b28 */
      iVar3 = iVar3 + 1;
      uVar1 = (int)uVar10 + 0x10;
      uVar10 = (ulong)uVar1;
    } while (iVar4 != 0);
    if (0xe < iVar3) {
      puVar5 = (undefined8 *)**(long **)(param_1 + 0xd8);
      *(undefined4 *)(puVar5 + 5) = 0x29;
      (*(code *)*puVar5)();
    }
    piVar11 = (int *)(param_1 + 0xc0);
    lVar6 = param_1 + (long)*(int *)(param_1 + 0xe0) * 8;
    if (*piVar11 == 0) {
      lVar6 = *(long *)(lVar6 + 0x60);
      FUN_010f97a4(param_1,*(undefined4 *)(lVar6 + (long)(int)uVar1 * 4),
                   *(undefined1 *)(lVar6 + (int)uVar1 + 0x400));
    }
    else {
      lVar6 = *(long *)(lVar6 + 0xa0);
                    /* try { // try from 010f9b6c to 011f9b77 has its CatchHandler @ 010f9c00 */
      uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      *(long *)(lVar6 + uVar10) = *(long *)(lVar6 + uVar10) + 1;
                    /* try { // try from 010f9b7c to 011f9b87 has its CatchHandler @ 010f9bfc */
    }
    if (iVar3 != 0) {
                    /* try { // try from 010f9b8c to 011f9b93 has its CatchHandler @ 010f9bec */
      FUN_010f97a4(param_1,*(undefined4 *)(param_1 + 0xe4),iVar3);
    }
    iVar4 = *(int *)(param_1 + 0xe8);
                    /* try { // try from 010f9b94 to 011f9c13 has its CatchHandler @ 010f9b28 */
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if ((iVar4 != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
      pbVar12 = *(byte **)(param_1 + 0xf0);
      do {
                    /* catch() { ... } // from try @ 010f9b7c with catch @ 010f9bfc */
        iVar2 = *(int *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 010f9b6c with catch @ 010f9c00 */
        iVar3 = iVar2 + 1;
        uVar10 = ((ulong)*pbVar12 & 1) << ((ulong)(0x17 - iVar2) & 0x3f) |
                 *(ulong *)(param_1 + 0x18);
        if (7 < iVar3) {
          iVar3 = -2 - iVar2;
          if (iVar3 < -0xf) {
            iVar3 = -0x10;
          }
          iVar13 = iVar2 + 9;
          uVar1 = iVar13 + iVar3;
          do {
            puVar7 = *(undefined1 **)(param_1 + 200);
            *(undefined1 **)(param_1 + 200) = puVar7 + 1;
            *puVar7 = (char)(uVar10 >> 0x10);
            lVar6 = *(long *)(param_1 + 0xd0) + -1;
            *(long *)(param_1 + 0xd0) = lVar6;
            if (lVar6 == 0) {
              puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
              iVar3 = (*(code *)puVar5[3])();
              if (iVar3 == 0) {
                puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
                *(undefined4 *)(puVar8 + 5) = 0x19;
                (*(code *)*puVar8)();
              }
              uVar14 = *puVar5;
              *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
              *(undefined8 *)(param_1 + 200) = uVar14;
            }
            if ((((uint)uVar10 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              puVar7 = *(undefined1 **)(param_1 + 200);
              *(undefined1 **)(param_1 + 200) = puVar7 + 1;
              *puVar7 = 0;
              lVar6 = *(long *)(param_1 + 0xd0) + -1;
              *(long *)(param_1 + 0xd0) = lVar6;
              if (lVar6 == 0) {
                puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
                iVar3 = (*(code *)puVar5[3])();
                if (iVar3 == 0) {
                  puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
                  *(undefined4 *)(puVar8 + 5) = 0x19;
                  (*(code *)*puVar8)();
                }
                uVar14 = *puVar5;
                *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
                *(undefined8 *)(param_1 + 200) = uVar14;
              }
            }
            iVar13 = iVar13 + -8;
            uVar10 = uVar10 << 8;
          } while (0xf < iVar13);
          iVar3 = (iVar2 + -7) - (uVar1 & 0xfffffff8);
        }
        *(ulong *)(param_1 + 0x18) = uVar10;
        *(int *)(param_1 + 0x20) = iVar3;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_010f9d04;
          pbVar12 = pbVar12 + 1;
        } while (*piVar11 != 0);
      } while( true );
    }
LAB_010f9d04:
    *(undefined4 *)(param_1 + 0xe8) = 0;
    iVar4 = *piVar11;
  }
  if (iVar4 == 0) {
    FUN_010f9968(param_1);
    puVar7 = *(undefined1 **)(param_1 + 200);
    *(undefined1 **)(param_1 + 200) = puVar7 + 1;
    *puVar7 = 0xff;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      iVar4 = (*(code *)puVar5[3])();
      if (iVar4 == 0) {
        puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar8 + 5) = 0x19;
        (*(code *)*puVar8)();
      }
      pcVar9 = (char *)*puVar5;
      *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
      *(char **)(param_1 + 200) = pcVar9;
    }
    else {
      pcVar9 = *(char **)(param_1 + 200);
    }
    *(char **)(param_1 + 200) = pcVar9 + 1;
    *pcVar9 = param_2 + -0x30;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      iVar4 = (*(code *)puVar5[3])();
      if (iVar4 == 0) {
        puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar8 + 5) = 0x19;
        (*(code *)*puVar8)();
      }
      uVar14 = *puVar5;
      *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
      *(undefined8 *)(param_1 + 200) = uVar14;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0xd8) + 0x1cc) == 0) {
                    /* try { // try from 010f9e18 to 011f9e47 has its CatchHandler @ 010f9e18
                       catch() { ... } // from try @ 010f9e18 with catch @ 010f9e18
                       catch() { ... } // from try @ 010f9e54 with catch @ 010f9e18 */
    if (0 < *(int *)(*(long *)(param_1 + 0xd8) + 0x174)) {
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + 0x24 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(*(long *)(param_1 + 0xd8) + 0x174));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xe4) = 0;
  }
                    /* try { // try from 010f9e48 to 011f9e53 has its CatchHandler @ 010f9e90 */
                    /* try { // try from 010f9e54 to 011f9ea3 has its CatchHandler @ 010f9e18 */
  return;
}


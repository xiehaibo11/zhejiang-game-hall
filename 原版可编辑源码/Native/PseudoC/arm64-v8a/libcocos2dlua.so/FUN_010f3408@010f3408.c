
void FUN_010f3408(long *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  
  bVar1 = *param_2;
  lVar10 = param_1[0x46];
                    /* catch() { ... } // from try @ 010f33ec with catch @ 010f3438 */
  uVar4 = *(ulong *)(jpeg_aritab + (ulong)(bVar1 & 0x7f) * 8);
  lVar7 = (long)uVar4 >> 0x10;
  lVar9 = *(long *)(lVar10 + 0x20) - lVar7;
  *(long *)(lVar10 + 0x20) = lVar9;
  if (bVar1 >> 7 == param_3) {
                    /* try { // try from 010f3454 to 011f35bb has its CatchHandler @ 010f3454
                       catch() { ... } // from try @ 010f3454 with catch @ 010f3454
                       catch() { ... } // from try @ 010f3768 with catch @ 010f3454 */
    if (0x7fff < lVar9) {
      return;
    }
    uVar4 = uVar4 >> 8;
    if (lVar7 <= lVar9) goto LAB_010f3480;
  }
  else if (lVar9 < lVar7) goto LAB_010f3480;
  *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + lVar9;
  *(long *)(lVar10 + 0x20) = lVar7;
LAB_010f3480:
  *param_2 = (byte)uVar4 ^ bVar1 & 0x80;
  uVar4 = *(ulong *)(lVar10 + 0x18);
  lVar7 = *(long *)(lVar10 + 0x20);
  iVar2 = *(int *)(lVar10 + 0x38);
  do {
    while( true ) {
      lVar7 = lVar7 * 2;
      uVar4 = uVar4 << 1;
      iVar2 = iVar2 + -1;
      *(ulong *)(lVar10 + 0x18) = uVar4;
      *(long *)(lVar10 + 0x20) = lVar7;
      *(int *)(lVar10 + 0x38) = iVar2;
      if (iVar2 == 0) break;
      if (0x7fff < lVar7) {
        return;
      }
    }
    if ((long)uVar4 >> 0x13 < 0x100) {
      if ((long)uVar4 >> 0x13 == 0xff) {
        *(long *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + 1;
                    /* try { // try from 010f3604 to 011f361f has its CatchHandler @ 010f37b0 */
      }
      else {
        iVar2 = *(int *)(lVar10 + 0x3c);
        if (iVar2 == 0) {
          *(long *)(lVar10 + 0x30) = *(long *)(lVar10 + 0x30) + 1;
LAB_010f36d8:
          lVar7 = *(long *)(lVar10 + 0x28);
        }
        else {
          if (iVar2 < 0) goto LAB_010f36d8;
          if (*(long *)(lVar10 + 0x30) != 0) {
            do {
              puVar3 = (undefined8 *)param_1[5];
              puVar5 = (undefined1 *)*puVar3;
              *puVar3 = puVar5 + 1;
              *puVar5 = 0;
              lVar7 = puVar3[1];
              puVar3[1] = lVar7 + -1;
                    /* try { // try from 010f363c to 011f36c3 has its CatchHandler @ 010f37b4 */
              if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
                puVar3 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar3 + 5) = 0x19;
                (*(code *)*puVar3)(param_1);
              }
              lVar7 = *(long *)(lVar10 + 0x30) + -1;
              *(long *)(lVar10 + 0x30) = lVar7;
            } while (lVar7 != 0);
            iVar2 = *(int *)(lVar10 + 0x3c);
          }
          plVar6 = (long *)param_1[5];
          puVar5 = (undefined1 *)*plVar6;
          *plVar6 = (long)(puVar5 + 1);
          *puVar5 = (char)iVar2;
          lVar7 = plVar6[1];
          plVar6[1] = lVar7 + -1;
          if ((lVar7 + -1 != 0) || (iVar2 = (*(code *)plVar6[3])(param_1), iVar2 != 0))
          goto LAB_010f36d8;
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
          lVar7 = *(long *)(lVar10 + 0x28);
        }
        if (lVar7 != 0) {
          lVar7 = *(long *)(lVar10 + 0x30);
          while (lVar7 != 0) {
            puVar3 = (undefined8 *)param_1[5];
            puVar5 = (undefined1 *)*puVar3;
            *puVar3 = puVar5 + 1;
            *puVar5 = 0;
            lVar7 = puVar3[1];
            puVar3[1] = lVar7 + -1;
            if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
              puVar3 = (undefined8 *)*param_1;
                    /* try { // try from 010f3728 to 011f3767 has its CatchHandler @ 010f37a8 */
              *(undefined4 *)(puVar3 + 5) = 0x19;
              (*(code *)*puVar3)(param_1);
            }
            lVar7 = *(long *)(lVar10 + 0x30) + -1;
            *(long *)(lVar10 + 0x30) = lVar7;
          }
          do {
            puVar3 = (undefined8 *)param_1[5];
            puVar5 = (undefined1 *)*puVar3;
            *puVar3 = puVar5 + 1;
            *puVar5 = 0xff;
            lVar7 = puVar3[1];
            puVar3[1] = lVar7 + -1;
                    /* try { // try from 010f3768 to 011f37c7 has its CatchHandler @ 010f3454 */
            if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
              puVar3 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar3 + 5) = 0x19;
              (*(code *)*puVar3)(param_1);
            }
            puVar3 = (undefined8 *)param_1[5];
            puVar5 = (undefined1 *)*puVar3;
            *puVar3 = puVar5 + 1;
            *puVar5 = 0;
            lVar7 = puVar3[1];
            puVar3[1] = lVar7 + -1;
                    /* catch() { ... } // from try @ 010f3728 with catch @ 010f37a8 */
                    /* catch() { ... } // from try @ 010f35bc with catch @ 010f37ac */
                    /* catch() { ... } // from try @ 010f3604 with catch @ 010f37b0
                       catch() { ... } // from try @ 010f36c8 with catch @ 010f37b0 */
                    /* catch() { ... } // from try @ 010f363c with catch @ 010f37b4 */
            if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
              puVar3 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar3 + 5) = 0x19;
              (*(code *)*puVar3)(param_1);
            }
            lVar7 = *(long *)(lVar10 + 0x28) + -1;
            *(long *)(lVar10 + 0x28) = lVar7;
          } while (lVar7 != 0);
        }
        *(uint *)(lVar10 + 0x3c) = (uint)uVar4 >> 0x13 & 0xff;
      }
    }
    else {
      iVar2 = *(int *)(lVar10 + 0x3c);
      if (-1 < iVar2) {
        if (*(long *)(lVar10 + 0x30) != 0) {
          do {
            puVar3 = (undefined8 *)param_1[5];
            puVar5 = (undefined1 *)*puVar3;
            *puVar3 = puVar5 + 1;
            *puVar5 = 0;
            lVar7 = puVar3[1];
            puVar3[1] = lVar7 + -1;
            if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
              puVar3 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar3 + 5) = 0x19;
              (*(code *)*puVar3)(param_1);
            }
            lVar7 = *(long *)(lVar10 + 0x30) + -1;
            *(long *)(lVar10 + 0x30) = lVar7;
          } while (lVar7 != 0);
          iVar2 = *(int *)(lVar10 + 0x3c);
        }
        plVar6 = (long *)param_1[5];
        pcVar8 = (char *)*plVar6;
        *plVar6 = (long)(pcVar8 + 1);
        *pcVar8 = (char)iVar2 + '\x01';
        lVar7 = plVar6[1];
        plVar6[1] = lVar7 + -1;
        if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)plVar6[3])(param_1), iVar2 == 0)) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
        }
        if (*(int *)(lVar10 + 0x3c) == 0xfe) {
          puVar3 = (undefined8 *)param_1[5];
          puVar5 = (undefined1 *)*puVar3;
          *puVar3 = puVar5 + 1;
          *puVar5 = 0;
          lVar7 = puVar3[1];
          puVar3[1] = lVar7 + -1;
                    /* try { // try from 010f35bc to 011f35ff has its CatchHandler @ 010f37ac */
          if ((lVar7 + -1 == 0) && (iVar2 = (*(code *)puVar3[3])(param_1), iVar2 == 0)) {
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x19;
            (*(code *)*puVar3)(param_1);
          }
        }
      }
      lVar7 = *(long *)(lVar10 + 0x28);
      *(uint *)(lVar10 + 0x3c) = (uint)uVar4 >> 0x13 & 0xff;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(long *)(lVar10 + 0x30) = *(long *)(lVar10 + 0x30) + lVar7;
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    uVar4 = *(ulong *)(lVar10 + 0x18) & 0x7ffff;
    iVar2 = *(int *)(lVar10 + 0x38) + 8;
    *(ulong *)(lVar10 + 0x18) = uVar4;
    *(int *)(lVar10 + 0x38) = iVar2;
    if (0x7fff < lVar7) {
      return;
    }
  } while( true );
}


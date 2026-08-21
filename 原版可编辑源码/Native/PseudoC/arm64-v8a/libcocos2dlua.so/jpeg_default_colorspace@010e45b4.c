
void jpeg_default_colorspace(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010e44f4 with catch @ 010e45c4
                        */
  switch(*(undefined4 *)((long)param_1 + 0x3c)) {
  case 0:
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    iVar10 = (int)param_1[7];
    *(undefined4 *)((long)param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(int *)((long)param_1 + 0x5c) = iVar10;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (9 < iVar10 - 1U) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x1b;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      *(undefined4 *)(puVar4 + 6) = 10;
      (*(code *)*puVar4)(param_1);
      iVar10 = *(int *)((long)param_1 + 0x5c);
      if (iVar10 < 1) {
        return;
      }
    }
    piVar9 = (int *)param_1[0xd];
    uVar5 = (ulong)iVar10;
    uVar1 = uVar5;
    if ((long)uVar5 < 2) {
      uVar1 = 1;
    }
    if (uVar1 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar1 & 0x7ffffffffffffffe;
      if (uVar6 != 0) {
        uVar11 = 0;
        piVar12 = piVar9;
        do {
          iVar10 = (int)uVar11;
          *piVar12 = iVar10;
          uVar11 = uVar11 + 2;
          piVar12[4] = 0;
          piVar12[5] = 0;
          piVar12[2] = 1;
          piVar12[3] = 1;
          piVar12[0x1c] = 0;
          piVar12[0x1d] = 0;
          piVar12[0x1a] = 1;
          piVar12[0x1b] = 1;
          piVar12[6] = 0;
          piVar12[0x1e] = 0;
          piVar12[0x18] = iVar10 + 1;
          piVar12 = piVar12 + 0x30;
        } while (uVar6 != uVar11);
        if (uVar1 == uVar6) {
          return;
        }
      }
    }
    piVar9 = piVar9 + uVar6 * 0x18 + 6;
    do {
      piVar9[-6] = (int)uVar6;
      uVar6 = uVar6 + 1;
      piVar9[-2] = 0;
      piVar9[-1] = 0;
      piVar9[-4] = 1;
      piVar9[-3] = 1;
      *piVar9 = 0;
      piVar9 = piVar9 + 0x18;
    } while ((long)uVar6 < (long)uVar5);
    break;
  case 1:
    iVar10 = *(int *)((long)param_1 + 0x24);
                    /* catch() { ... } // from try @ 010e4630 with catch @ 010e46f4 */
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x100000001;
    *puVar7 = 1;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    puVar7[6] = 0;
    break;
  case 2:
  case 3:
    iVar10 = *(int *)((long)param_1 + 0x24);
                    /* try { // try from 010e45e8 to 011e462f has its CatchHandler @ 010e45e8
                       catch() { ... } // from try @ 010e45e8 with catch @ 010e45e8
                       catch() { ... } // from try @ 010e463c with catch @ 010e45e8 */
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    *(undefined8 *)((long)param_1 + 0x5c) = 0x300000003;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
                    /* try { // try from 010e4630 to 011e463b has its CatchHandler @ 010e46f4 */
    puVar7[0x18] = 2;
    uVar8 = 3;
                    /* try { // try from 010e463c to 011e474b has its CatchHandler @ 010e45e8 */
    goto LAB_010e4960;
  case 4:
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    *(undefined4 *)(param_1 + 0x2a) = 1;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined8 *)((long)param_1 + 0x5c) = 0x400000004;
    *(undefined4 *)((long)param_1 + 0x144) = 0;
    *puVar7 = 0x43;
    puVar7[0x30] = 0x59;
    puVar7[0x18] = 0x4d;
    puVar7[0x48] = 0x4b;
    puVar7[6] = 0;
    puVar7[0x1e] = 0;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0;
    puVar7[0x36] = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x4c) = 0;
    *(undefined8 *)(puVar7 + 0x4a) = 0x100000001;
    puVar7[0x4e] = 0;
    break;
  case 5:
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    *(undefined8 *)((long)param_1 + 0x5c) = 0x500000004;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 1;
    puVar7[0x18] = 2;
    puVar7[0x30] = 3;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *puVar7 = 1;
    puVar7[0x1e] = 1;
    puVar7[0x36] = 1;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x48] = 4;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    *(undefined8 *)(puVar7 + 0x4c) = 0;
    *(undefined8 *)(puVar7 + 0x4a) = 0x200000002;
    puVar7[0x4e] = 0;
    break;
  case 6:
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    *(undefined1 *)(param_1 + 0x29) = 2;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined8 *)((long)param_1 + 0x5c) = 0x600000003;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *puVar7 = 0x72;
    puVar7[2] = 1;
    puVar7[3] = 1;
    puVar7[4] = 0;
    iVar10 = *(int *)((long)param_1 + 0x154);
    puVar7[0x18] = 0x67;
    bVar2 = iVar10 == 1;
    puVar7[0x30] = 0x62;
    uVar3 = (uint)bVar2;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 0;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    puVar7[5] = (uint)bVar2;
    puVar7[6] = (uint)bVar2;
    puVar7[0x34] = 0;
    puVar7[0x35] = (uint)bVar2;
    goto LAB_010e497c;
  case 7:
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 100) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x15;
      *(int *)((long)puVar4 + 0x2c) = iVar10;
      (*(code *)*puVar4)(param_1);
    }
    *(undefined1 *)(param_1 + 0x29) = 2;
    *(undefined8 *)((long)param_1 + 0x5c) = 0x700000003;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x18] = 0x22;
    uVar8 = 0x23;
LAB_010e4960:
    uVar3 = 1;
    puVar7[0x30] = uVar8;
    *puVar7 = 1;
    puVar7[6] = 0;
    puVar7[0x1e] = 1;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
LAB_010e497c:
    puVar7[0x36] = uVar3;
    break;
  default:
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 10;
                    /* WARNING: Could not recover jumptable at 0x010e465c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_1);
    return;
  }
  return;
}


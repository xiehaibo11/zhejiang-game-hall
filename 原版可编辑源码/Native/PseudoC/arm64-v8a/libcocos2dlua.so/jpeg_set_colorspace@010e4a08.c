
void jpeg_set_colorspace(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  
  iVar9 = *(int *)((long)param_1 + 0x24);
  if (iVar9 != 100) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x15;
    *(int *)((long)puVar5 + 0x2c) = iVar9;
    (*(code *)*puVar5)(param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
                    /* catch() { ... } // from try @ 010e4ad0 with catch @ 010e4a5c */
  switch(param_2) {
  case 0:
    iVar9 = (int)param_1[7];
    *(int *)((long)param_1 + 0x5c) = iVar9;
    if (9 < iVar9 - 1U) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x1b;
      *(int *)((long)puVar5 + 0x2c) = iVar9;
      *(undefined4 *)(puVar5 + 6) = 10;
      (*(code *)*puVar5)(param_1);
      iVar9 = *(int *)((long)param_1 + 0x5c);
      if (iVar9 < 1) {
        return;
      }
    }
                    /* try { // try from 010e4aac to 011e4ab7 has its CatchHandler @ 010e4b6c */
    piVar8 = (int *)param_1[0xd];
    uVar4 = (ulong)iVar9;
    uVar1 = uVar4;
    if ((long)uVar4 < 2) {
      uVar1 = 1;
    }
    if (uVar1 < 2) {
                    /* try { // try from 010e4ac4 to 011e4acf has its CatchHandler @ 010e4b5c */
      uVar6 = 0;
    }
    else {
      uVar6 = uVar1 & 0x7ffffffffffffffe;
      if (uVar6 != 0) {
        uVar10 = 0;
        piVar11 = piVar8;
        do {
          iVar9 = (int)uVar10;
          *piVar11 = iVar9;
          uVar10 = uVar10 + 2;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[2] = 1;
          piVar11[3] = 1;
          piVar11[0x1c] = 0;
          piVar11[0x1d] = 0;
          piVar11[0x1a] = 1;
          piVar11[0x1b] = 1;
          piVar11[6] = 0;
          piVar11[0x1e] = 0;
          piVar11[0x18] = iVar9 + 1;
          piVar11 = piVar11 + 0x30;
        } while (uVar6 != uVar10);
        if (uVar1 == uVar6) {
          return;
        }
      }
    }
    piVar8 = piVar8 + uVar6 * 0x18;
    do {
      *piVar8 = (int)uVar6;
      uVar6 = uVar6 + 1;
      piVar8[4] = 0;
      piVar8[5] = 0;
      piVar8[2] = 1;
      piVar8[3] = 1;
      piVar8[6] = 0;
      piVar8 = piVar8 + 0x18;
    } while ((long)uVar6 < (long)uVar4);
    break;
  case 1:
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 1;
    *puVar7 = 1;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x100000001;
    puVar7[6] = 0;
    break;
  case 2:
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined4 *)(param_1 + 0x2a) = 1;
    *puVar7 = 0x52;
    puVar7[2] = 1;
    puVar7[3] = 1;
    puVar7[4] = 0;
    iVar9 = *(int *)((long)param_1 + 0x154);
    puVar7[0x18] = 0x47;
    bVar2 = iVar9 == 1;
    puVar7[0x30] = 0x42;
                    /* catch() { ... } // from try @ 010e4ac4 with catch @ 010e4b5c */
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 0;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    uVar3 = (uint)bVar2;
                    /* catch() { ... } // from try @ 010e4aac with catch @ 010e4b6c */
    puVar7[5] = uVar3;
    puVar7[6] = uVar3;
    uVar3 = (uint)bVar2;
    puVar7[0x34] = 0;
    puVar7[0x35] = uVar3;
    puVar7[0x36] = uVar3;
    break;
  case 3:
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x18] = 2;
    *puVar7 = 1;
    puVar7[6] = 0;
    puVar7[0x1e] = 1;
    puVar7[0x30] = 3;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    puVar7[0x36] = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2a) = 1;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 4;
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
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)(param_1 + 0x2a) = 1;
    *(undefined4 *)((long)param_1 + 0x5c) = 4;
    puVar7[0x18] = 2;
    puVar7[0x30] = 3;
    *puVar7 = 1;
    puVar7[0x1e] = 1;
    puVar7[0x36] = 1;
    puVar7[6] = 0;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    puVar7[0x48] = 4;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    *(undefined8 *)(puVar7 + 0x4c) = 0;
    *(undefined8 *)(puVar7 + 0x4a) = 0x200000002;
    puVar7[0x4e] = 0;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x29) = 2;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *puVar7 = 0x72;
    puVar7[2] = 1;
    puVar7[3] = 1;
    puVar7[4] = 0;
    iVar9 = *(int *)((long)param_1 + 0x154);
    puVar7[0x18] = 0x67;
    bVar2 = iVar9 == 1;
    puVar7[0x30] = 0x62;
    *(undefined8 *)(puVar7 + 0x1c) = 0;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x1e] = 0;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    uVar3 = (uint)bVar2;
    puVar7[5] = uVar3;
    puVar7[6] = uVar3;
    uVar3 = (uint)bVar2;
    puVar7[0x34] = 0;
    puVar7[0x35] = uVar3;
    puVar7[0x36] = uVar3;
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x29) = 2;
    *(undefined4 *)((long)param_1 + 0x5c) = 3;
    puVar7 = (undefined4 *)param_1[0xd];
    *(undefined4 *)((long)param_1 + 0x144) = 1;
    *(undefined8 *)(puVar7 + 0x1c) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x1a) = 0x100000001;
    puVar7[0x18] = 0x22;
    puVar7[0x30] = 0x23;
    *puVar7 = 1;
    puVar7[6] = 0;
    puVar7[0x1e] = 1;
    *(undefined8 *)(puVar7 + 0x32) = 0x100000001;
    *(undefined8 *)(puVar7 + 0x34) = 0x100000001;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 2) = 0x200000002;
    puVar7[0x36] = 1;
    break;
  default:
    puVar5 = (undefined8 *)*param_1;
                    /* try { // try from 010e4ad0 to 011e4bef has its CatchHandler @ 010e4a5c */
    *(undefined4 *)(puVar5 + 5) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x010e4ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(param_1);
    return;
  }
  return;
}


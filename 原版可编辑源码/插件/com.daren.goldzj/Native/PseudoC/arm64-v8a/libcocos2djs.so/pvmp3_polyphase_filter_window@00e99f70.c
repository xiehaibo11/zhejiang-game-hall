
void pvmp3_polyphase_filter_window(long param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  
  piVar11 = &pqmfSynthWin;
  lVar8 = 0;
  lVar10 = 0;
  iVar9 = 1;
  do {
    lVar3 = param_1 + lVar10;
    lVar4 = param_1 + lVar8;
    uVar1 = (((((((((int)((ulong)((long)*piVar11 * (long)*(int *)(lVar3 + 0x44)) >> 0x20) + 0x20) -
                  (int)((ulong)((long)piVar11[1] * (long)*(int *)(lVar4 + 0x7bc)) >> 0x20)) +
                  (int)((ulong)((long)piVar11[2] * (long)*(int *)(lVar4 + 0xbc)) >> 0x20) +
                  (int)((ulong)((long)piVar11[3] * (long)*(int *)(lVar3 + 0x744)) >> 0x20) +
                 (int)((ulong)((long)piVar11[4] * (long)*(int *)(lVar3 + 0x144)) >> 0x20)) -
                (int)((ulong)((long)piVar11[5] * (long)*(int *)(lVar4 + 0x6bc)) >> 0x20)) +
                (int)((ulong)((long)piVar11[6] * (long)*(int *)(lVar4 + 0x1bc)) >> 0x20) +
                (int)((ulong)((long)piVar11[7] * (long)*(int *)(lVar3 + 0x644)) >> 0x20) +
               (int)((ulong)((long)piVar11[8] * (long)*(int *)(lVar3 + 0x244)) >> 0x20)) -
              (int)((ulong)((long)piVar11[9] * (long)*(int *)(lVar4 + 0x5bc)) >> 0x20)) +
              (int)((ulong)((long)piVar11[10] * (long)*(int *)(lVar4 + 700)) >> 0x20) +
              (int)((ulong)((long)piVar11[0xb] * (long)*(int *)(lVar3 + 0x544)) >> 0x20) +
             (int)((ulong)((long)piVar11[0xc] * (long)*(int *)(lVar3 + 0x344)) >> 0x20)) -
            (int)((ulong)((long)piVar11[0xd] * (long)*(int *)(lVar4 + 0x4bc)) >> 0x20)) +
            (int)((ulong)((long)piVar11[0xe] * (long)*(int *)(lVar4 + 0x3bc)) >> 0x20) +
            (int)((ulong)((long)piVar11[0xf] * (long)*(int *)(lVar3 + 0x444)) >> 0x20);
    uVar2 = (((((((((int)((ulong)((long)*piVar11 * (long)*(int *)(lVar4 + 0x7bc)) >> 0x20) +
                    (int)((ulong)((long)piVar11[1] * (long)*(int *)(lVar3 + 0x44)) >> 0x20) + 0x20)
                  - (int)((ulong)((long)piVar11[2] * (long)*(int *)(lVar3 + 0x744)) >> 0x20)) +
                  (int)((ulong)((long)piVar11[3] * (long)*(int *)(lVar4 + 0xbc)) >> 0x20) +
                  (int)((ulong)((long)piVar11[4] * (long)*(int *)(lVar4 + 0x6bc)) >> 0x20) +
                 (int)((ulong)((long)piVar11[5] * (long)*(int *)(lVar3 + 0x144)) >> 0x20)) -
                (int)((ulong)((long)piVar11[6] * (long)*(int *)(lVar3 + 0x644)) >> 0x20)) +
                (int)((ulong)((long)piVar11[7] * (long)*(int *)(lVar4 + 0x1bc)) >> 0x20) +
                (int)((ulong)((long)piVar11[8] * (long)*(int *)(lVar4 + 0x5bc)) >> 0x20) +
               (int)((ulong)((long)piVar11[9] * (long)*(int *)(lVar3 + 0x244)) >> 0x20)) -
              (int)((ulong)((long)piVar11[10] * (long)*(int *)(lVar3 + 0x544)) >> 0x20)) +
              (int)((ulong)((long)piVar11[0xb] * (long)*(int *)(lVar4 + 700)) >> 0x20) +
              (int)((ulong)((long)piVar11[0xc] * (long)*(int *)(lVar4 + 0x4bc)) >> 0x20) +
             (int)((ulong)((long)piVar11[0xd] * (long)*(int *)(lVar3 + 0x344)) >> 0x20)) -
            (int)((ulong)((long)piVar11[0xe] * (long)*(int *)(lVar3 + 0x444)) >> 0x20)) +
            (int)((ulong)((long)piVar11[0xf] * (long)*(int *)(lVar4 + 0x3bc)) >> 0x20);
    iVar7 = iVar9 << (ulong)(param_3 - 1U & 0x1f);
    lVar10 = lVar10 + 4;
    uVar5 = (ushort)(uVar1 >> 6);
    if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x15) {
      uVar5 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
    }
    iVar9 = iVar9 + 1;
    lVar8 = lVar8 + -4;
    uVar6 = (ushort)(uVar2 >> 6);
    if ((int)uVar2 >> 0x1f != (int)uVar2 >> 0x15) {
      uVar6 = (ushort)((int)uVar2 >> 0x1f) ^ 0x7fff;
    }
    piVar11 = piVar11 + 0x10;
    param_2[iVar7] = uVar5;
    param_2[param_3 * 0x20 - iVar7] = uVar6;
  } while (lVar10 != 0x3c);
  uVar1 = (int)((ulong)((long)*(int *)(param_1 + 0xc0) * 0x74000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x140) * 0x354000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x1c0) * 0x72bffb) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x240) * 0x1fd4000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x2c0) * 0x5084008) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x340) * 0x66b8000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x3c0) * 0x249c4000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x440) * 0x49478000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x4c0) * -0x249c4000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x540) * 0x66b8000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x5c0) * -0x5084000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x640) * 0x1fd4000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x6c0) * -0x72c001) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x740) * 0x354000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x7c0) * -0x73ffa) >> 0x20) + 0x20;
  uVar2 = (int)((ulong)((long)*(int *)(param_1 + 0x80) * 0x19fffb) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x180) * 0x187c002) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x280) * 0x97fc000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x380) * 0x3e84c000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x480) * -0x9bdc000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x580) * -0xb4000) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x680) * 0x247fff) >> 0x20) +
          (int)((ulong)((long)*(int *)(param_1 + 0x780) * -0x14000) >> 0x20) + 0x20;
  uVar5 = (ushort)(uVar1 >> 6);
  if ((int)uVar1 >> 0x1f != (int)uVar1 >> 0x15) {
    uVar5 = (ushort)((int)uVar1 >> 0x1f) ^ 0x7fff;
  }
  uVar6 = (ushort)(uVar2 >> 6);
  if ((int)uVar2 >> 0x1f != (int)uVar2 >> 0x15) {
    uVar6 = (ushort)((int)uVar2 >> 0x1f) ^ 0x7fff;
  }
  *param_2 = uVar5;
  param_2[0x10 << (ulong)(param_3 - 1U & 0x1f)] = uVar6;
  return;
}


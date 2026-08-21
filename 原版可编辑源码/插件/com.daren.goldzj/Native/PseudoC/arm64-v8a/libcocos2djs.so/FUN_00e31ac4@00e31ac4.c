
undefined8 FUN_00e31ac4(long *param_1,char param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x4b8) != '\0') {
    return 0;
  }
  param_1[0xd] = param_1[4];
  param_1[0xc] = param_1[3];
  param_1[0xf] = param_1[6];
  param_1[0xe] = param_1[5];
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x12] = param_1[9];
  param_1[0x11] = param_1[8];
  param_1[0x10] = param_1[7];
  if ((short)param_1[0xc] == 0) {
    return 0x97;
  }
  if (*(short *)((long)param_1 + 0x62) == 0) {
    return 0x97;
  }
  if ((*(byte *)(lVar4 + 0x150) >> 3 & 1) != 0) {
    lVar3 = FT_MulFix((long)*(short *)(lVar4 + 0x8a),param_1[0xe]);
    param_1[0xf] = lVar3 + 0x20U & 0xffffffffffffffc0;
    lVar3 = FT_MulFix((long)*(short *)(lVar4 + 0x8c),param_1[0xe]);
    param_1[0x10] = lVar3 + 0x20U & 0xffffffffffffffc0;
    lVar3 = FT_MulFix((long)*(short *)(lVar4 + 0x8e),param_1[0xe]);
    param_1[0x11] = lVar3 + 0x20U & 0xffffffffffffffc0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if (param_2 != '\0') {
    return 0;
  }
  if ((*(byte *)(lVar4 + 0x150) >> 3 & 1) != 0) {
    lVar3 = FT_DivFix((ulong)*(ushort *)(param_1 + 0xc) << 6,*(undefined2 *)(lVar4 + 0x88));
    param_1[0xd] = lVar3;
    lVar3 = FT_DivFix((ulong)*(ushort *)((long)param_1 + 0x62) << 6,*(undefined2 *)(lVar4 + 0x88));
    param_1[0xe] = lVar3;
    lVar4 = FT_MulFix((long)*(short *)(lVar4 + 0x90),param_1[0xd]);
    param_1[0x12] = lVar4 + 0x20U & 0xffffffffffffffc0;
  }
  uVar1 = *(ushort *)(param_1 + 0xc);
  uVar2 = *(ushort *)((long)param_1 + 0x62);
  if (uVar1 < uVar2) {
    *(ushort *)(param_1 + 0x15) = uVar2;
    param_1[0x17] = param_1[0xe];
    lVar3 = FT_DivFix(uVar1,uVar2);
    lVar4 = 0x10000;
    param_1[0x13] = lVar3;
  }
  else {
    *(ushort *)(param_1 + 0x15) = uVar1;
    param_1[0x17] = param_1[0xd];
    param_1[0x13] = 0x10000;
    lVar4 = FT_DivFix(uVar2);
  }
  param_1[0x14] = lVar4;
  param_1[0xb] = (long)(param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x21c) = 0xffffffff;
  return 0;
}


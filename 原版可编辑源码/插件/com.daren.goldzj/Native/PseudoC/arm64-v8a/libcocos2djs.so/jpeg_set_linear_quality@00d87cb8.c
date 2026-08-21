
void jpeg_set_linear_quality(long *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 100) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x15;
    *(int *)((long)puVar5 + 0x2c) = iVar2;
    (*(code *)*puVar5)(param_1);
  }
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
    lVar3 = jpeg_alloc_quant_table(param_1);
    param_1[0xe] = lVar3;
  }
  lVar6 = (long)param_2;
  lVar4 = 0;
  if (param_3 == 0) {
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_0194db90)[lVar4] * lVar6 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0x7ffe < lVar1) {
        lVar1 = 0x7fff;
      }
      *(short *)(lVar3 + lVar4 * 2) = (short)lVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  else {
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_0194db90)[lVar4] * lVar6 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0xfe < lVar1) {
        lVar1 = 0xff;
      }
      *(short *)(lVar3 + lVar4 * 2) = (short)lVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  *(undefined4 *)(lVar3 + 0x80) = 0;
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 == 100) {
    lVar3 = param_1[0xf];
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x15;
    *(int *)((long)puVar5 + 0x2c) = iVar2;
    (*(code *)*puVar5)(param_1);
    lVar3 = param_1[0xf];
  }
  if (lVar3 == 0) {
    lVar3 = jpeg_alloc_quant_table(param_1);
    param_1[0xf] = lVar3;
  }
  if (param_3 == 0) {
    lVar4 = 0;
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_0194dc90)[lVar4] * lVar6 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0x7ffe < lVar1) {
        lVar1 = 0x7fff;
      }
      *(short *)(lVar3 + lVar4 * 2) = (short)lVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  else {
    lVar4 = 0;
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_0194dc90)[lVar4] * lVar6 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0xfe < lVar1) {
        lVar1 = 0xff;
      }
      *(short *)(lVar3 + lVar4 * 2) = (short)lVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  *(undefined4 *)(lVar3 + 0x80) = 0;
  return;
}


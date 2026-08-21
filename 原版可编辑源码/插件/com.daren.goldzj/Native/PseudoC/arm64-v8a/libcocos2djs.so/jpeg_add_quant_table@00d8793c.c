
void jpeg_add_quant_table(long *param_1,uint param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 100) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x15;
    *(int *)((long)puVar4 + 0x2c) = iVar2;
    (*(code *)*puVar4)(param_1);
  }
  if (3 < param_2) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x20;
    *(uint *)((long)puVar4 + 0x2c) = param_2;
    (*(code *)*puVar4)(param_1);
  }
  lVar3 = param_1[(long)(int)param_2 + 0xe];
  if (lVar3 == 0) {
    lVar3 = jpeg_alloc_quant_table(param_1);
    param_1[(long)(int)param_2 + 0xe] = lVar3;
  }
  lVar5 = 0;
  if (param_5 == 0) {
    do {
      lVar1 = (long)((ulong)*(uint *)(param_3 + lVar5 * 4) * (long)param_4 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0x7ffe < lVar1) {
        lVar1 = 0x7fff;
      }
      *(short *)(lVar3 + lVar5 * 2) = (short)lVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x40);
  }
  else {
    do {
      lVar1 = (long)((ulong)*(uint *)(param_3 + lVar5 * 4) * (long)param_4 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0xfe < lVar1) {
        lVar1 = 0xff;
      }
      *(short *)(lVar3 + lVar5 * 2) = (short)lVar1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x40);
  }
  *(undefined4 *)(lVar3 + 0x80) = 0;
  return;
}


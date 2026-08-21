
void jpeg_default_qtables(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  lVar5 = param_1[0x12];
  if (iVar2 == 100) {
    lVar4 = param_1[0xe];
  }
  else {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x15;
    *(int *)((long)puVar7 + 0x2c) = iVar2;
    (*(code *)*puVar7)(param_1);
                    /* try { // try from 010e3fcc to 011e3fdf has its CatchHandler @ 010e427c */
    lVar4 = param_1[0xe];
  }
  if (lVar4 == 0) {
    lVar4 = jpeg_alloc_quant_table(param_1);
    param_1[0xe] = lVar4;
  }
  if (param_2 == 0) {
    lVar6 = 0;
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_01476780)[lVar6] * (long)(int)lVar5 + 0x32) / 100;
                    /* try { // try from 010e4024 to 011e402b has its CatchHandler @ 010e41fc */
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0x7ffe < lVar1) {
        lVar1 = 0x7fff;
      }
      *(short *)(lVar4 + lVar6 * 2) = (short)lVar1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
  }
  else {
                    /* try { // try from 010e3f60 to 011e3fcb has its CatchHandler @ 010e3f60
                       catch() { ... } // from try @ 010e3f60 with catch @ 010e3f60
                       catch() { ... } // from try @ 010e40f4 with catch @ 010e3f60 */
    lVar6 = 0;
    do {
      lVar1 = (long)((ulong)(uint)(&DAT_01476780)[lVar6] * (long)(int)lVar5 + 0x32) / 100;
      if (lVar1 < 2) {
        lVar1 = 1;
      }
      if (0xfe < lVar1) {
        lVar1 = 0xff;
      }
      *(short *)(lVar4 + lVar6 * 2) = (short)lVar1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
  }
  *(undefined4 *)(lVar4 + 0x80) = 0;
  iVar2 = *(int *)((long)param_1 + 0x24);
  iVar3 = *(int *)((long)param_1 + 0x94);
  if (iVar2 == 100) {
                    /* try { // try from 010e4054 to 011e405b has its CatchHandler @ 010e41d8 */
    lVar5 = param_1[0xf];
  }
  else {
    puVar7 = (undefined8 *)*param_1;
                    /* try { // try from 010e40c4 to 011e40f3 has its CatchHandler @ 010e421c */
    *(undefined4 *)(puVar7 + 5) = 0x15;
    *(int *)((long)puVar7 + 0x2c) = iVar2;
    (*(code *)*puVar7)(param_1);
    lVar5 = param_1[0xf];
  }
  if (lVar5 == 0) {
    lVar5 = jpeg_alloc_quant_table(param_1);
    param_1[0xf] = lVar5;
  }
  if (param_2 == 0) {
                    /* try { // try from 010e40f4 to 011e42e3 has its CatchHandler @ 010e3f60 */
    lVar4 = 0;
    do {
      lVar6 = (long)((ulong)(uint)(&DAT_01476880)[lVar4] * (long)iVar3 + 0x32) / 100;
      if (lVar6 < 2) {
        lVar6 = 1;
      }
      if (0x7ffe < lVar6) {
        lVar6 = 0x7fff;
      }
      *(short *)(lVar5 + lVar4 * 2) = (short)lVar6;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  else {
    lVar4 = 0;
    do {
      lVar6 = (long)((ulong)(uint)(&DAT_01476880)[lVar4] * (long)iVar3 + 0x32) / 100;
      if (lVar6 < 2) {
        lVar6 = 1;
      }
      if (0xfe < lVar6) {
        lVar6 = 0xff;
      }
                    /* try { // try from 010e40ac to 011e40b7 has its CatchHandler @ 010e41e8 */
      *(short *)(lVar5 + lVar4 * 2) = (short)lVar6;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
  }
  *(undefined4 *)(lVar5 + 0x80) = 0;
  return;
}


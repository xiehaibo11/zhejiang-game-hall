
void jpeg_CreateCompress(long *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    puVar1 = (undefined8 *)*param_1;
    puVar1[5] = 0x5a0000000d;
    *(int *)(puVar1 + 6) = param_2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_3 != 0x248) {
    puVar1 = (undefined8 *)*param_1;
    puVar1[5] = 0x24800000016;
                    /* catch() { ... } // from try @ 010de894 with catch @ 010de954 */
    *(int *)(puVar1 + 6) = (int)param_3;
    (*(code *)*puVar1)(param_1);
  }
  lVar2 = *param_1;
  lVar3 = param_1[3];
  memset(param_1 + 1,0,0x240);
  *param_1 = lVar2;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  jinit_memory_mgr(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 8;
  param_1[0x47] = 0;
                    /* try { // try from 010de9b0 to 011dea3f has its CatchHandler @ 010de9b0
                       catch() { ... } // from try @ 010de9b0 with catch @ 010de9b0
                       catch() { ... } // from try @ 010dea4c with catch @ 010de9b0 */
  param_1[0x3c] = (long)jpeg_natural_order;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f;
  param_1[8] = 0x3ff0000000000000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0x6400000064;
  param_1[0x12] = 0x6400000064;
  *(undefined4 *)((long)param_1 + 0x24) = 100;
  return;
}


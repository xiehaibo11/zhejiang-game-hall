
void jinit_memory_mgr(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char *__s;
  undefined8 *puVar4;
  byte local_34 [4];
  long local_28;
  
                    /* try { // try from 010f08ac to 011f08d7 has its CatchHandler @ 010f0938 */
  param_1[1] = 0;
  lVar2 = jpeg_mem_init();
  local_28 = lVar2;
  puVar3 = (undefined8 *)jpeg_get_small(param_1,0xa8);
  if (puVar3 == (undefined8 *)0x0) {
                    /* try { // try from 010f08d8 to 011f0957 has its CatchHandler @ 010f07ec */
    jpeg_mem_term(param_1);
    puVar4 = (undefined8 *)*param_1;
    puVar4[5] = 0x38;
    (*(code *)*puVar4)(param_1);
  }
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
                    /* catch() { ... } // from try @ 010f0874 with catch @ 010f0914 */
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[2] = FUN_010f0c9c;
  puVar3[3] = FUN_010f0db4;
                    /* catch() { ... } // from try @ 010f0878 with catch @ 010f0934 */
  puVar3[6] = FUN_010f1008;
  puVar3[7] = FUN_010f1554;
                    /* catch() { ... } // from try @ 010f08ac with catch @ 010f0938 */
                    /* catch() { ... } // from try @ 010f0848 with catch @ 010f093c */
  puVar3[8] = FUN_010f18bc;
  puVar3[9] = FUN_010f1c30;
  puVar3[0xb] = lVar2;
  puVar3[0xc] = 1000000000;
  puVar3[10] = FUN_010f1d74;
  puVar3[4] = FUN_010f0ed0;
  puVar3[5] = FUN_010f0f6c;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0xa8;
  puVar3[1] = FUN_010f0ba8;
  *puVar3 = FUN_010f0a10;
  param_1[1] = (long)puVar3;
  __s = getenv("JPEGMEM");
  if (__s != (char *)0x0) {
    local_34[0] = 0x78;
    iVar1 = sscanf(__s,"%ld%c",&local_28,local_34);
    if (0 < iVar1) {
      if ((local_34[0] | 0x20) == 0x6d) {
        local_28 = local_28 * 1000;
      }
      puVar3[0xb] = local_28 * 1000;
    }
  }
  return;
}



void jinit_memory_mgr(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  char *__s;
  undefined8 *puVar4;
  byte local_34 [4];
  long local_28;
  
  param_1[1] = 0;
  lVar2 = jpeg_mem_init();
  local_28 = lVar2;
  puVar3 = (undefined8 *)jpeg_get_small(param_1,0xa8);
  if (puVar3 == (undefined8 *)0x0) {
    jpeg_mem_term(param_1);
    puVar4 = (undefined8 *)*param_1;
    puVar4[5] = 0x38;
    (*(code *)*puVar4)(param_1);
  }
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[2] = FUN_00d947f4;
  puVar3[3] = FUN_00d9490c;
  puVar3[6] = FUN_00d94b60;
  puVar3[7] = FUN_00d950ac;
  puVar3[8] = FUN_00d95414;
  puVar3[9] = FUN_00d95788;
  puVar3[0xb] = lVar2;
  puVar3[0xc] = 1000000000;
  puVar3[10] = FUN_00d958cc;
  puVar3[4] = FUN_00d94a28;
  puVar3[5] = FUN_00d94ac4;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0xa8;
  puVar3[1] = FUN_00d94700;
  *puVar3 = FUN_00d94568;
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


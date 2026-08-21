
void png_write_sCAL_s(long param_1,undefined1 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  size_t sVar4;
  size_t __n;
  undefined1 local_a0 [2];
  undefined1 auStack_9e [62];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  sVar4 = strlen(param_3);
  __n = strlen(param_4);
  uVar1 = sVar4 + __n + 2;
  if (uVar1 < 0x41) {
    local_a0[0] = param_2;
    memcpy((void *)((ulong)local_a0 | 1),param_3,sVar4 + 1);
    memcpy(auStack_9e + sVar4,param_4,__n);
    if (param_1 != 0) {
      local_60 = (undefined1)(uVar1 >> 0x18);
      local_5f = (undefined1)(uVar1 >> 0x10);
      local_5e = (undefined1)(uVar1 >> 8);
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_5d = (undefined1)uVar1;
      local_5c = 0x4c414373;
      png_write_data(param_1,&local_60,8);
      *(undefined4 *)(param_1 + 0x250) = 0x7343414c;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_5c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      if (uVar1 != 0) {
        png_write_data(param_1,local_a0,uVar1);
        png_calculate_crc(param_1,local_a0,uVar1);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_60 = (undefined1)((uint)uVar2 >> 0x18);
      local_5f = (undefined1)((uint)uVar2 >> 0x10);
      local_5e = (undefined1)((uint)uVar2 >> 8);
      local_5d = (undefined1)uVar2;
      png_write_data(param_1,&local_60,4);
    }
  }
  else {
    png_warning(param_1,"Can\'t write sCAL (buffer too small)");
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


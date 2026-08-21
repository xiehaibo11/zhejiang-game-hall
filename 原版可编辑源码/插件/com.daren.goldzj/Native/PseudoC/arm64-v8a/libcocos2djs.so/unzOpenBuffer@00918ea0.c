
/* cocos2d::unzOpenBuffer(void const*, unsigned long) */

void cocos2d::unzOpenBuffer(void *param_1,ulong param_2)

{
  long lVar1;
  zlib_filefunc64_32_def_s azStack_b8 [88];
  char local_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0x18] = '\0';
  local_60[0x19] = '\0';
  local_60[0x1a] = '\0';
  local_60[0x1b] = '\0';
  local_60[0x1c] = '\0';
  local_60[0x1d] = '\0';
  local_60[0x1e] = '\0';
  local_60[0x1f] = '\0';
  local_60[0x10] = '\0';
  local_60[0x11] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  local_60[0x14] = '\0';
  local_60[0x15] = '\0';
  local_60[0x16] = '\0';
  local_60[0x17] = '\0';
  local_60[0x28] = '\0';
  local_60[0x29] = '\0';
  local_60[0x2a] = '\0';
  local_60[0x2b] = '\0';
  local_60[0x2c] = '\0';
  local_60[0x2d] = '\0';
  local_60[0x2e] = '\0';
  local_60[0x2f] = '\0';
  local_60[0x20] = '\0';
  local_60[0x21] = '\0';
  local_60[0x22] = '\0';
  local_60[0x23] = '\0';
  local_60[0x24] = '\0';
  local_60[0x25] = '\0';
  local_60[0x26] = '\0';
  local_60[0x27] = '\0';
  local_60[8] = '\0';
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  local_60[0xc] = '\0';
  local_60[0xd] = '\0';
  local_60[0xe] = '\0';
  local_60[0xf] = '\0';
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_60[4] = '\0';
  local_60[5] = '\0';
  local_60[6] = '\0';
  local_60[7] = '\0';
  sprintf(local_60,"%llx %lx",param_1,param_2);
  fill_memory_filefunc64_32(azStack_b8);
  FUN_009183c4(local_60,azStack_b8,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


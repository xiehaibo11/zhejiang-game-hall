
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0x1000 < param_2) {
      param_2 = 0x1000;
    }
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[7] = 0;
    local_18[8] = 0;
    local_18[9] = 0;
    local_18[10] = 0;
    local_18[0xb] = 0;
    local_18[0xc] = 0;
    local_18[0xd] = 0;
    local_18[0xe] = 0;
    local_18[0xf] = 0;
    param_2 = param_1 + param_2;
    for (; param_1 < param_2; param_1 = param_1 + 0x10) {
      lVar4 = 0;
      do {
        local_18[lVar4] = *(byte *)(param_1 + lVar4) ^ local_18[lVar4];
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x10);
    }
    lVar4 = 0;
    do {
      pbVar2 = local_18 + lVar4;
      lVar1 = lVar4 * 2;
      lVar4 = lVar4 + 1;
      snprintf((char *)(param_3 + lVar1),3,"%02x",(ulong)*pbVar2);
    } while (lVar4 != 0x10);
    *(undefined1 *)(param_3 + 0x20) = 0;
    uVar3 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


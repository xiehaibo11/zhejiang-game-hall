
void FUN_00101a04(uint param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte local_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar3 = calloc(0x20,1);
  bVar1 = (int)param_1 < 0;
  if (bVar1) {
    param_1 = -param_1;
    *puVar3 = 0x2d;
  }
  uVar4 = (ulong)bVar1;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = 0;
  local_50[0x1c] = 0;
  local_50[0x1d] = 0;
  local_50[0x1e] = 0;
  local_50[0x1f] = 0;
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  local_50[0x15] = 0;
  local_50[0x16] = 0;
  local_50[0x17] = 0;
  if (0 < (int)param_1) {
    lVar5 = 0;
    do {
      local_50[lVar5] = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
      lVar5 = lVar5 + 1;
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
    if (0 < (int)lVar5) {
      pbVar6 = local_50 + (int)lVar5;
      lVar5 = (uVar4 + lVar5 & 0xffffffff) - uVar4;
      pbVar7 = puVar3 + uVar4;
      do {
        pbVar6 = pbVar6 + -1;
        lVar5 = lVar5 + -1;
        *pbVar7 = *pbVar6;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


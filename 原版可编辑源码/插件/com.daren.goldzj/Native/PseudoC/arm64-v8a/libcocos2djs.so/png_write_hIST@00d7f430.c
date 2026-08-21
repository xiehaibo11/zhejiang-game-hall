
void png_write_hIST(long param_1,undefined2 *param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((int)(uint)*(ushort *)(param_1 + 0x2a0) < (int)param_3) {
    png_warning(param_1,"Invalid number of histogram entries specified");
  }
  else {
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_50 = (undefined1)(param_3 >> 0x17);
    local_4f = (undefined1)(param_3 >> 0xf);
    local_4e = (undefined1)(param_3 >> 7);
    local_4d = (undefined1)(param_3 << 1);
    local_4c = 0x54534968;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x68495354;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    if (0 < (int)param_3) {
      uVar3 = (ulong)param_3;
      do {
        local_54 = (undefined1)((ushort)*param_2 >> 8);
        local_53 = (undefined1)*param_2;
        png_write_data(param_1,&local_54,2);
        png_calculate_crc(param_1,&local_54,2);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_50 = (undefined1)((uint)uVar1 >> 0x18);
    local_4f = (undefined1)((uint)uVar1 >> 0x10);
    local_4e = (undefined1)((uint)uVar1 >> 8);
    local_4d = (undefined1)uVar1;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


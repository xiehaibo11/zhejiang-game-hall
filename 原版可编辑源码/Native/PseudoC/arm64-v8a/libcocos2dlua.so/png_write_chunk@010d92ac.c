
void png_write_chunk(long param_1,byte *param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    if (param_4 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"length exceeds PNG maximum");
    }
    local_4c = *param_2;
    local_4b = param_2[1];
    local_4a = param_2[2];
    local_49 = param_2[3];
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_4f = (undefined1)(param_4 >> 0x10);
    uVar3 = (uint)local_4c;
    local_50 = (undefined1)(param_4 >> 0x18);
    uVar4 = (uint)local_4b;
    local_4e = (undefined1)(param_4 >> 8);
    uVar5 = (uint)local_4a;
    local_4d = (undefined1)param_4;
    uVar6 = (uint)local_49;
    png_write_data(param_1,&local_50,8);
    *(uint *)(param_1 + 0x250) = uVar3 << 0x18 | uVar4 << 0x10 | uVar5 << 8 | uVar6;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    if ((param_3 != 0) && (param_4 != 0)) {
      png_write_data(param_1,param_3,param_4);
      png_calculate_crc(param_1,param_3,param_4);
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


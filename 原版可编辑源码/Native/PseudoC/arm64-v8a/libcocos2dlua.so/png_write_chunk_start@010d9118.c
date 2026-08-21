
void png_write_chunk_start(long param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    local_3c = *param_2;
    local_3b = param_2[1];
    local_3a = param_2[2];
    local_39 = param_2[3];
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_3f = (undefined1)((ulong)param_3 >> 0x10);
    uVar2 = (uint)local_3c;
    local_40 = (undefined1)((ulong)param_3 >> 0x18);
    uVar3 = (uint)local_3b;
    local_3e = (undefined1)((ulong)param_3 >> 8);
    local_3d = (undefined1)param_3;
    uVar4 = (uint)local_3a;
    uVar5 = (uint)local_39;
    png_write_data(param_1,&local_40,8);
    *(uint *)(param_1 + 0x250) = uVar2 << 0x18 | uVar3 << 0x10 | uVar4 << 8 | uVar5;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_3c,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


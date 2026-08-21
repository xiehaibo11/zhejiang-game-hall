
void png_handle_IHDR(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint local_48;
  uint local_44;
  byte local_40;
  byte local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"out of place");
  }
  if (param_3 == 0xd) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 1;
    png_read_data(param_1,&local_48,0xd);
    png_calculate_crc(param_1,&local_48,0xd);
    png_crc_finish(param_1,0);
    uVar1 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (-1 < (int)uVar1) {
      uVar3 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (-1 < (int)uVar3) {
        *(uint *)(param_1 + 0x230) = uVar1;
        *(uint *)(param_1 + 0x234) = uVar3;
        *(byte *)(param_1 + 0x2b0) = local_40;
        *(undefined1 *)(param_1 + 0x2ac) = local_3c;
        *(byte *)(param_1 + 0x2af) = local_3f;
        *(undefined1 *)(param_1 + 0x454) = local_3d;
        *(undefined1 *)(param_1 + 0x490) = local_3e;
        if (local_3f - 2 < 5) {
          uVar3 = (uint)(0x401020103 >> (((ulong)(local_3f - 2 & 0xff) & 7) << 3));
        }
        else {
          uVar3 = 1;
        }
        *(char *)(param_1 + 0x2b3) = (char)uVar3;
        uVar3 = (uint)local_40 * (uVar3 & 0xff);
        *(char *)(param_1 + 0x2b2) = (char)uVar3;
        if ((uVar3 & 0xf8) < 8) {
          uVar4 = (ulong)(uVar3 & 0xff) * (ulong)uVar1 + 7 >> 3;
        }
        else {
          uVar4 = (ulong)((uVar3 & 0xff) >> 3) * (ulong)uVar1;
        }
        *(ulong *)(param_1 + 0x240) = uVar4;
        png_set_IHDR(param_1,param_2);
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"PNG unsigned integer out of range");
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid");
}


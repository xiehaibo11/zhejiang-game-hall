
void png_write_PLTE(long param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_3 < 0x101) && ((*(uint *)(param_1 + 0x450) & 1) != 0 || param_3 != 0)) {
    if ((*(byte *)(param_1 + 0x2af) >> 1 & 1) != 0) {
      iVar3 = param_3 * 3;
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_50 = (undefined1)((uint)iVar3 >> 0x18);
      local_4f = (undefined1)((uint)iVar3 >> 0x10);
      local_4e = (undefined1)((uint)iVar3 >> 8);
      *(short *)(param_1 + 0x2a0) = (short)param_3;
      local_4d = (undefined1)iVar3;
      local_4c = 0x45544c50;
      png_write_data(param_1,&local_50,8);
      *(undefined4 *)(param_1 + 0x250) = 0x504c5445;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_4c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        local_54 = *param_2;
        local_53 = param_2[1];
        local_52 = param_2[2];
        png_write_data(param_1,&local_54,3);
        png_calculate_crc(param_1,&local_54,3);
        param_2 = param_2 + 3;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_50 = (undefined1)((uint)uVar1 >> 0x18);
      local_4f = (undefined1)((uint)uVar1 >> 0x10);
      local_4e = (undefined1)((uint)uVar1 >> 8);
      local_4d = (undefined1)uVar1;
      png_write_data(param_1,&local_50,4);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
      goto LAB_00d7d4bc;
    }
    pcVar4 = "Ignoring request to write a PLTE chunk in grayscale PNG";
  }
  else {
    pcVar4 = "Invalid number of colors in palette";
    if (*(byte *)(param_1 + 0x2af) == 3) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid number of colors in palette");
    }
  }
  png_warning(param_1,pcVar4);
LAB_00d7d4bc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


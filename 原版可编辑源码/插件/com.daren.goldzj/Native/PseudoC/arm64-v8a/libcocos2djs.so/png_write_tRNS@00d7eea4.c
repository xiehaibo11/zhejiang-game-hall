
void png_write_tRNS(long param_1,char *param_2,long param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char local_58;
  undefined1 local_57;
  char local_56;
  undefined1 local_55;
  char local_54;
  undefined1 local_53;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_5 == 0) {
    uVar2 = *(ushort *)(param_3 + 8);
    if ((int)(uint)uVar2 < 1 << (ulong)(*(byte *)(param_1 + 0x2b0) & 0x1f)) {
      local_58 = (char)(uVar2 >> 8);
      local_57 = (undefined1)uVar2;
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_50 = 0x534e527402000000;
      png_write_data(param_1,&local_50,8);
      *(undefined4 *)(param_1 + 0x250) = 0x74524e53;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,(long)&local_50 + 4,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      png_write_data(param_1,&local_58,2);
      param_2 = &local_58;
      lVar6 = 2;
LAB_00d7f120:
      png_calculate_crc(param_1,param_2,lVar6);
LAB_00d7f124:
      uVar4 = local_50;
      uVar1 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_50._0_2_ = CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18));
      local_50._0_3_ = CONCAT12((char)((uint)uVar1 >> 8),(undefined2)local_50);
      local_50._4_4_ = SUB84(uVar4,4);
      local_50._0_4_ = CONCAT13((char)uVar1,(undefined3)local_50);
      png_write_data(param_1,&local_50,4);
      goto LAB_00d7f15c;
    }
    pcVar5 = "Ignoring attempt to write tRNS chunk out-of-range for bit_depth";
  }
  else if (param_5 == 2) {
    local_58 = (char)((ushort)*(undefined2 *)(param_3 + 2) >> 8);
    local_57 = (undefined1)*(undefined2 *)(param_3 + 2);
    local_56 = (char)((ushort)*(undefined2 *)(param_3 + 4) >> 8);
    local_55 = (undefined1)*(undefined2 *)(param_3 + 4);
    local_54 = (char)((ushort)*(undefined2 *)(param_3 + 6) >> 8);
    local_53 = (undefined1)*(undefined2 *)(param_3 + 6);
    if ((*(char *)(param_1 + 0x2b0) != '\b') ||
       ((local_56 == '\0' && local_58 == '\0') && local_54 == '\0')) {
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_50 = 0x534e527406000000;
      png_write_data(param_1,&local_50,8);
      *(undefined4 *)(param_1 + 0x250) = 0x74524e53;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,(long)&local_50 + 4,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      png_write_data(param_1,&local_58,6);
      param_2 = &local_58;
      lVar6 = 6;
      goto LAB_00d7f120;
    }
    pcVar5 = "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8";
  }
  else if (param_5 == 3) {
    if ((0 < param_4) && (param_4 <= (int)(uint)*(ushort *)(param_1 + 0x2a0))) {
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_50._0_2_ = CONCAT11((char)((uint)param_4 >> 0x10),(char)((uint)param_4 >> 0x18));
      local_50._0_3_ = CONCAT12((char)((uint)param_4 >> 8),(undefined2)local_50);
      local_50._0_4_ = CONCAT13((char)param_4,(undefined3)local_50);
      local_50 = CONCAT44(0x534e5274,(undefined4)local_50);
      png_write_data(param_1,&local_50,8);
      *(undefined4 *)(param_1 + 0x250) = 0x74524e53;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,(long)&local_50 + 4,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      if (param_2 != (char *)0x0) {
        lVar6 = (long)param_4;
        png_write_data(param_1,param_2,lVar6);
        goto LAB_00d7f120;
      }
      goto LAB_00d7f124;
    }
    pcVar5 = "Invalid number of transparent colors specified";
  }
  else {
    pcVar5 = "Can\'t write tRNS with an alpha channel";
  }
  png_app_warning(param_1,pcVar5);
LAB_00d7f15c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


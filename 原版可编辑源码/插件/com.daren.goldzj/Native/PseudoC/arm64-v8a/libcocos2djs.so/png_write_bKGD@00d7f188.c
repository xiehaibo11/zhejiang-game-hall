
void png_write_bKGD(long param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  byte local_48;
  undefined1 local_47;
  char local_46;
  undefined1 local_45;
  char local_44;
  undefined1 local_43;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 == 3) {
    if ((*(ushort *)(param_1 + 0x2a0) == 0) && ((*(byte *)(param_1 + 0x450) & 1) != 0)) {
      bVar6 = *param_2;
    }
    else {
      bVar6 = *param_2;
      if (*(ushort *)(param_1 + 0x2a0) <= (ushort)bVar6) {
        pcVar4 = "Invalid background palette index";
        goto LAB_00d7f348;
      }
    }
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_40 = 0x44474b6201000000;
    local_48 = bVar6;
    png_write_data(param_1,&local_40,8);
    *(undefined4 *)(param_1 + 0x250) = 0x624b4744;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_40 + 4,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    png_write_data(param_1,&local_48,1);
    uVar5 = 1;
LAB_00d7f3c8:
    png_calculate_crc(param_1,&local_48,uVar5);
    uVar5 = local_40;
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_40._4_4_ = SUB84(uVar5,4);
    local_40._0_4_ =
         CONCAT13((char)uVar1,
                  CONCAT12((char)((uint)uVar1 >> 8),
                           CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
    png_write_data(param_1,&local_40,4);
  }
  else {
    if ((param_3 >> 1 & 1) == 0) {
      uVar2 = *(ushort *)(param_2 + 8);
      if ((int)(uint)uVar2 < 1 << (ulong)(*(byte *)(param_1 + 0x2b0) & 0x1f)) {
        local_48 = (byte)(uVar2 >> 8);
        local_47 = (undefined1)uVar2;
        *(undefined4 *)(param_1 + 0x4e4) = 0x22;
        local_40 = 0x44474b6202000000;
        png_write_data(param_1,&local_40,8);
        *(undefined4 *)(param_1 + 0x250) = 0x624b4744;
        png_reset_crc(param_1);
        png_calculate_crc(param_1,(long)&local_40 + 4,4);
        *(undefined4 *)(param_1 + 0x4e4) = 0x42;
        png_write_data(param_1,&local_48,2);
        uVar5 = 2;
        goto LAB_00d7f3c8;
      }
      pcVar4 = "Ignoring attempt to write bKGD chunk out-of-range for bit_depth";
    }
    else {
      local_48 = (byte)((ushort)*(undefined2 *)(param_2 + 2) >> 8);
      local_47 = (undefined1)*(undefined2 *)(param_2 + 2);
      local_46 = (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8);
      local_45 = (undefined1)*(undefined2 *)(param_2 + 4);
      local_44 = (char)((ushort)*(undefined2 *)(param_2 + 6) >> 8);
      local_43 = (undefined1)*(undefined2 *)(param_2 + 6);
      if ((*(char *)(param_1 + 0x2b0) != '\b') ||
         ((local_46 == '\0' && local_48 == 0) && local_44 == '\0')) {
        *(undefined4 *)(param_1 + 0x4e4) = 0x22;
        local_40 = 0x44474b6206000000;
        png_write_data(param_1,&local_40,8);
        *(undefined4 *)(param_1 + 0x250) = 0x624b4744;
        png_reset_crc(param_1);
        png_calculate_crc(param_1,(long)&local_40 + 4,4);
        *(undefined4 *)(param_1 + 0x4e4) = 0x42;
        png_write_data(param_1,&local_48,6);
        uVar5 = 6;
        goto LAB_00d7f3c8;
      }
      pcVar4 = "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8";
    }
LAB_00d7f348:
    png_warning(param_1,pcVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


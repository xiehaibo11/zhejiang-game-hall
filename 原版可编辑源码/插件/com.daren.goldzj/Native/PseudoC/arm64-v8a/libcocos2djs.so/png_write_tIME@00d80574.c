
void png_write_tIME(long param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_48;
  undefined1 local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  undefined1 local_43;
  byte local_42;
  undefined8 local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  bVar2 = *(byte *)(param_2 + 1);
  if ((((bVar2 - 1 < 0xc) && (bVar3 = *(byte *)((long)param_2 + 3), bVar3 - 1 < 0x1f)) &&
      (bVar4 = *(byte *)(param_2 + 2), bVar4 < 0x18)) &&
     (bVar5 = *(byte *)(param_2 + 3), bVar5 < 0x3d)) {
    local_48 = (undefined1)((ushort)*param_2 >> 8);
    local_47 = (undefined1)*param_2;
    local_43 = *(undefined1 *)((long)param_2 + 5);
    local_46 = bVar2;
    local_45 = bVar3;
    local_44 = bVar4;
    local_42 = bVar5;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_40 = 0x454d497407000000;
      png_write_data(param_1,&local_40,8);
      *(undefined4 *)(param_1 + 0x250) = 0x74494d45;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,(long)&local_40 + 4,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      png_write_data(param_1,&local_48,7);
      png_calculate_crc(param_1,&local_48,7);
      uVar7 = local_40;
      uVar1 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_40._4_4_ = SUB84(uVar7,4);
      local_40._0_4_ =
           CONCAT13((char)uVar1,
                    CONCAT12((char)((uint)uVar1 >> 8),
                             CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
      png_write_data(param_1,&local_40,4);
    }
  }
  else {
    png_warning(param_1,"Invalid time specified for tIME chunk");
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


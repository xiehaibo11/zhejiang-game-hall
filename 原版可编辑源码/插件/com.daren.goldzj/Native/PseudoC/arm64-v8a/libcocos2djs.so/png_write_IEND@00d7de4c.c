
void png_write_IEND(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_40 = 0x444e454900000000;
    png_write_data(param_1,&local_40,8);
    *(undefined4 *)(param_1 + 0x250) = 0x49454e44;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_40 + 4,4);
    uVar3 = local_40;
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_40._4_4_ = SUB84(uVar3,4);
    local_40._0_4_ =
         CONCAT13((char)uVar1,
                  CONCAT12((char)((uint)uVar1 >> 8),
                           CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
    png_write_data(param_1,&local_40,4);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


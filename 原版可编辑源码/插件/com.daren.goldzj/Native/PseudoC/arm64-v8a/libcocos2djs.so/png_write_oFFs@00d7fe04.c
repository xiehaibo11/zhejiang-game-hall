
void png_write_oFFs(long param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for oFFs chunk");
  }
  png_save_int_32(auStack_5c,param_2);
  png_save_int_32(auStack_58,param_3);
  local_54 = (undefined1)param_4;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_50 = 0x7346466f09000000;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x6f464673;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_50 + 4,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    png_write_data(param_1,auStack_5c,9);
    png_calculate_crc(param_1,auStack_5c,9);
    uVar3 = local_50;
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
    local_50._4_4_ = SUB84(uVar3,4);
    local_50._0_4_ =
         CONCAT13((char)uVar1,
                  CONCAT12((char)((uint)uVar1 >> 8),
                           CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


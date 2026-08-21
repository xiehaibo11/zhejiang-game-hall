
void png_write_cHRM_fixed(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  png_save_int_32(auStack_60,param_2[6]);
  png_save_int_32(auStack_5c,param_2[7]);
  png_save_int_32(auStack_58,*param_2);
  png_save_int_32(auStack_54,param_2[1]);
  png_save_int_32(auStack_50,param_2[2]);
  png_save_int_32(auStack_4c,param_2[3]);
  png_save_int_32(auStack_48,param_2[4]);
  png_save_int_32(auStack_44,param_2[5]);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_40 = 0x4d52486320000000;
    png_write_data(param_1,&local_40,8);
    *(undefined4 *)(param_1 + 0x250) = 0x6348524d;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_40 + 4,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    png_write_data(param_1,auStack_60,0x20);
    png_calculate_crc(param_1,auStack_60,0x20);
    uVar3 = local_40;
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
                    /* try { // try from 010db304 to 011db34b has its CatchHandler @ 010db304
                       catch(type#1 @ 00000000) { ... } // from try @ 010db304 with catch @ 010db304
                       catch(type#1 @ 00000000) { ... } // from try @ 010db39c with catch @ 010db304
                        */
    local_40._4_4_ = SUB84(uVar3,4);
    local_40._0_4_ =
         CONCAT13((char)uVar1,
                  CONCAT12((char)((uint)uVar1 >> 8),
                           CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
    png_write_data(param_1,&local_40,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


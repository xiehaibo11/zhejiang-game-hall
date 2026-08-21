
void png_write_pHYs(long param_1,ulong param_2,ulong param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = param_3 & 0xffffffff;
  uVar5 = param_2 & 0xffffffff;
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for pHYs chunk");
  }
  local_5c = (undefined1)(uVar5 >> 0x18);
  local_5b = (undefined1)(uVar5 >> 0x10);
  local_5a = (undefined1)(uVar5 >> 8);
  local_58 = (undefined1)(uVar4 >> 0x18);
  local_57 = (undefined1)(uVar4 >> 0x10);
  local_56 = (undefined1)(uVar4 >> 8);
  local_59 = (undefined1)param_2;
  local_55 = (undefined1)param_3;
  local_54 = (undefined1)param_4;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_50 = 0x7359487009000000;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x70485973;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_50 + 4,4);
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
    png_write_data(param_1,&local_5c,9);
    png_calculate_crc(param_1,&local_5c,9);
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


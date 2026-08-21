
void png_write_IHDR(long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
                   int param_6,int param_7,uint param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  switch(param_5) {
  case 0:
    if ((0x10 < param_4) || (uVar4 = 1, (1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale image");
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid image color type specified");
  case 2:
    uVar4 = 3;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGB image");
    }
    break;
  case 3:
    if ((7 < param_4 - 1) || ((0x8bU >> (ulong)(param_4 - 1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for paletted image");
    }
    *(undefined1 *)(param_1 + 0x2b3) = 1;
    goto joined_r0x00d7d088;
  case 4:
    uVar4 = 2;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    break;
  case 6:
    uVar4 = 4;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGBA image");
    }
  }
  *(undefined1 *)(param_1 + 0x2b3) = uVar4;
joined_r0x00d7d088:
  if (param_6 != 0) {
    png_warning(param_1,"Invalid compression type specified");
  }
  if (((*(byte *)(param_1 + 0x450) >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0))
  {
    if (param_7 == 0) goto LAB_00d7d12c;
  }
  else if ((param_7 == 0) || ((param_5 | 4) == 6 && param_7 == 0x40)) goto LAB_00d7d12c;
  png_warning(param_1,"Invalid filter type specified");
  param_7 = 0;
LAB_00d7d12c:
  if (1 < param_8) {
    png_warning(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  local_68 = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x2b0) = local_68;
  local_67 = (undefined1)param_5;
  *(undefined1 *)(param_1 + 0x2af) = local_67;
  param_4 = *(byte *)(param_1 + 0x2b3) * param_4;
  *(char *)(param_1 + 0x2b2) = (char)param_4;
  local_64 = (undefined1)param_8;
  *(undefined1 *)(param_1 + 0x2ac) = local_64;
  local_65 = (undefined1)param_7;
  *(undefined1 *)(param_1 + 0x454) = local_65;
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(uint *)(param_1 + 0x230) = param_2;
  *(int *)(param_1 + 0x234) = (int)param_3;
  if ((param_4 & 0xf8) < 8) {
    uVar5 = (ulong)(param_4 & 0xff) * (ulong)param_2 + 7 >> 3;
  }
  else {
    uVar5 = (ulong)((param_4 & 0xff) >> 3) * (ulong)param_2;
  }
  *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b3);
  local_70 = (undefined1)(param_2 >> 0x18);
  local_6e = (undefined1)(param_2 >> 8);
  *(ulong *)(param_1 + 0x240) = uVar5;
  local_6b = (undefined1)((ulong)param_3 >> 0x10);
  local_6f = (undefined1)(param_2 >> 0x10);
  local_6c = (undefined1)((ulong)param_3 >> 0x18);
  local_6a = (undefined1)((ulong)param_3 >> 8);
  *(uint *)(param_1 + 0x23c) = param_2;
  *(undefined1 *)(param_1 + 0x2b1) = local_68;
  local_6d = (undefined1)param_2;
  local_66 = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0x22;
  local_60 = 0x524448490d000000;
  local_69 = (char)param_3;
  png_write_data(param_1,&local_60,8);
  *(undefined4 *)(param_1 + 0x250) = 0x49484452;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,(long)&local_60 + 4,4);
  *(undefined4 *)(param_1 + 0x4e4) = 0x42;
  png_write_data(param_1,&local_70,0xd);
  png_calculate_crc(param_1,&local_70,0xd);
  uVar3 = local_60;
  uVar1 = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x4e4) = 0x82;
  local_60._4_4_ = SUB84(uVar3,4);
  local_60._0_4_ =
       CONCAT13((char)uVar1,
                CONCAT12((char)((uint)uVar1 >> 8),
                         CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
  png_write_data(param_1,&local_60,4);
  if (*(char *)(param_1 + 0x2ae) == '\0') {
    uVar4 = 8;
    if ((*(char *)(param_1 + 0x2af) != '\x03') && (uVar4 = 0xf8, *(byte *)(param_1 + 0x2b0) < 8)) {
      uVar4 = 8;
    }
    *(undefined1 *)(param_1 + 0x2ae) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


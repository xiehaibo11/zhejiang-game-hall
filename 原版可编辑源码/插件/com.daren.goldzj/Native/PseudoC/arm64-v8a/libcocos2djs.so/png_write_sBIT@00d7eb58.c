
void png_write_sBIT(long param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  byte local_44 [4];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((param_3 >> 1 & 1) == 0) {
    bVar6 = param_2[3];
    if ((bVar6 != 0) && (bVar6 <= *(byte *)(param_1 + 0x2b1))) {
      lVar7 = 1;
      local_44[0] = bVar6;
      if ((param_3 >> 2 & 1) != 0) goto LAB_00d7ec0c;
LAB_00d7eba0:
      lVar8 = lVar7;
      if (param_1 == 0) goto LAB_00d7ec30;
LAB_00d7ec64:
      *(undefined4 *)(param_1 + 0x4e4) = 0x22;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = (undefined1)lVar8;
      local_3c = 0x54494273;
      png_write_data(param_1,&local_40,8);
      *(undefined4 *)(param_1 + 0x250) = 0x73424954;
      png_reset_crc(param_1);
      png_calculate_crc(param_1,&local_3c,4);
      *(undefined4 *)(param_1 + 0x4e4) = 0x42;
      png_write_data(param_1,local_44,lVar8);
      png_calculate_crc(param_1,local_44,lVar8);
      uVar1 = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_1 + 0x4e4) = 0x82;
      local_40 = (undefined1)((uint)uVar1 >> 0x18);
      local_3f = (undefined1)((uint)uVar1 >> 0x10);
      local_3e = (undefined1)((uint)uVar1 >> 8);
      local_3d = (undefined1)uVar1;
      png_write_data(param_1,&local_40,4);
      goto LAB_00d7ec30;
    }
  }
  else {
    if (param_3 == 3) {
      bVar6 = 8;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x2b1);
    }
    bVar2 = *param_2;
    if ((((byte)(bVar2 - 1) < bVar6) && (bVar3 = param_2[1], (byte)(bVar3 - 1) < bVar6)) &&
       (bVar4 = param_2[2], (byte)(bVar4 - 1) < bVar6)) {
      lVar7 = 3;
      local_44[0] = bVar2;
      local_44[1] = bVar3;
      local_44[2] = bVar4;
      if ((param_3 >> 2 & 1) == 0) goto LAB_00d7eba0;
LAB_00d7ec0c:
      bVar6 = param_2[4];
      if ((bVar6 != 0) && (bVar6 <= *(byte *)(param_1 + 0x2b1))) {
        lVar8 = lVar7 + 1;
        local_44[lVar7] = bVar6;
        goto LAB_00d7ec64;
      }
    }
  }
  png_warning(param_1,"Invalid sBIT depth specified");
LAB_00d7ec30:
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


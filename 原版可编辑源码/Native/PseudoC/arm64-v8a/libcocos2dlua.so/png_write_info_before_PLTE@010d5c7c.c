
void png_write_info_before_PLTE(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x165) >> 2 & 1) != 0) {
    return;
  }
  png_write_sig(param_1);
  if (((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x450) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  png_write_IHDR(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                 *(undefined1 *)((long)param_2 + 0x25),*(undefined1 *)((long)param_2 + 0x26),
                 *(undefined1 *)((long)param_2 + 0x27),*(undefined1 *)(param_2 + 10));
  uVar6 = *(ushort *)((long)param_2 + 0x7e);
  if (((uVar6 & 0x8008) == 8) && ((*(byte *)(param_2 + 2) & 1) != 0)) {
    png_write_gAMA_fixed(param_1,param_2[0xd]);
    uVar6 = *(ushort *)((long)param_2 + 0x7e);
  }
  if (-1 < (short)uVar6) {
    uVar2 = param_2[2];
    if ((uVar2 >> 0xc & 1) == 0) {
      if ((uVar2 >> 0xb & 1) != 0) {
        png_write_sRGB(param_1,*(undefined2 *)(param_2 + 0x1f));
        bVar3 = *(byte *)(param_2 + 2);
        goto joined_r0x010d5d6c;
      }
    }
    else {
      if ((uVar2 >> 0xb & 1) != 0) {
        png_app_warning(param_1,"profile matches sRGB but writing iCCP instead");
      }
      png_write_iCCP(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x22));
    }
  }
  bVar3 = *(byte *)(param_2 + 2);
joined_r0x010d5d6c:
  if ((bVar3 >> 1 & 1) != 0) {
    png_write_sBIT(param_1,param_2 + 0x2c,*(undefined1 *)((long)param_2 + 0x25));
  }
  if (((*(ushort *)((long)param_2 + 0x7e) & 0x8010) == 0x10) &&
     ((*(byte *)(param_2 + 2) >> 2 & 1) != 0)) {
    png_write_cHRM_fixed(param_1,param_2 + 0xe);
  }
  if (0 < (int)param_2[0x4a]) {
    uVar7 = *(ulong *)(param_2 + 0x48);
    uVar1 = uVar7 + (long)(int)param_2[0x4a] * 0x20;
    do {
      if ((((*(byte *)(uVar7 + 0x18) & 1) != 0) &&
          (iVar4 = png_handle_as_unknown(param_1,uVar7), iVar4 != 1)) &&
         (((iVar4 == 3 || ((*(byte *)(uVar7 + 3) >> 5 & 1) != 0)) ||
          ((iVar4 == 0 && (*(int *)(param_1 + 0x438) == 3)))))) {
        lVar5 = *(long *)(uVar7 + 0x10);
        if (lVar5 == 0) {
          png_warning(param_1,"Writing zero-length unknown chunk");
          lVar5 = *(long *)(uVar7 + 0x10);
        }
        png_write_chunk(param_1,uVar7,*(undefined8 *)(uVar7 + 8),lVar5);
      }
      uVar7 = uVar7 + 0x20;
    } while (uVar7 < uVar1);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x400;
  return;
}


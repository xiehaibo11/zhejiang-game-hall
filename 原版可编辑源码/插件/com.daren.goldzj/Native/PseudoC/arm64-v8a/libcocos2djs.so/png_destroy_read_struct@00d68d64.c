
void png_destroy_read_struct(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
    png_destroy_info_struct(lVar3,param_3);
    png_destroy_info_struct(lVar3,param_2);
    *param_1 = 0;
    png_destroy_gamma_table(lVar3);
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x470));
    *(undefined8 *)(lVar3 + 0x470) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x4e8));
    *(undefined8 *)(lVar3 + 0x4e8) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x4d0));
    *(undefined8 *)(lVar3 + 0x4d0) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x3c0));
    *(undefined8 *)(lVar3 + 0x3c0) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x3c8));
    uVar1 = *(uint *)(lVar3 + 0x420);
    *(undefined8 *)(lVar3 + 0x3c8) = 0;
    if ((uVar1 >> 0xc & 1) != 0) {
      png_zfree(lVar3,*(undefined8 *)(lVar3 + 0x298));
      uVar1 = *(uint *)(lVar3 + 0x420);
      *(undefined8 *)(lVar3 + 0x298) = 0;
    }
    uVar2 = uVar1 & 0xffffefff;
    *(uint *)(lVar3 + 0x420) = uVar2;
    if ((uVar1 >> 0xd & 1) != 0) {
      png_free(lVar3,*(undefined8 *)(lVar3 + 0x330));
      uVar2 = *(uint *)(lVar3 + 0x420);
      *(undefined8 *)(lVar3 + 0x330) = 0;
    }
    *(uint *)(lVar3 + 0x420) = uVar2 & 0xffffdfff;
    inflateEnd(lVar3 + 0x178);
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x378));
    *(undefined8 *)(lVar3 + 0x378) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x4b0));
    *(undefined8 *)(lVar3 + 0x4b0) = 0;
    png_free(lVar3,*(undefined8 *)(lVar3 + 0x440));
    *(undefined8 *)(lVar3 + 0x440) = 0;
    png_destroy_png_struct(lVar3);
    return;
  }
  return;
}


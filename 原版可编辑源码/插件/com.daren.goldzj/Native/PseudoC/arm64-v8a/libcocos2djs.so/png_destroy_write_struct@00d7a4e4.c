
void png_destroy_write_struct(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    png_destroy_info_struct(lVar1);
    *param_1 = 0;
    if ((*(byte *)(lVar1 + 0x168) >> 1 & 1) != 0) {
      deflateEnd(lVar1 + 0x178);
    }
    png_free_buffer_list(lVar1,lVar1 + 0x1e8);
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x260));
    *(undefined8 *)(lVar1 + 0x260) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 600));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x268));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x270));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x278));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x280));
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined1 *)(lVar1 + 0x3d1) = 0;
    *(undefined8 *)(lVar1 + 0x280) = 0;
    *(undefined8 *)(lVar1 + 0x278) = 0;
    *(undefined8 *)(lVar1 + 0x270) = 0;
    *(undefined8 *)(lVar1 + 0x268) = 0;
    *(undefined1 *)(lVar1 + 0x3d0) = 1;
    if (*(long *)(lVar1 + 0x3d8) != 0) {
      *(undefined8 *)(lVar1 + 0x3d8) = 0;
      png_free(lVar1);
    }
    if (*(long *)(lVar1 + 0x3e0) != 0) {
      *(undefined8 *)(lVar1 + 0x3e0) = 0;
      png_free(lVar1);
    }
    if (*(long *)(lVar1 + 1000) != 0) {
      *(undefined8 *)(lVar1 + 1000) = 0;
      png_free(lVar1);
    }
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x3f0));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x3f8));
    *(undefined8 *)(lVar1 + 0x3f8) = 0;
    *(undefined8 *)(lVar1 + 0x3f0) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x440));
    *(undefined8 *)(lVar1 + 0x440) = 0;
    png_destroy_png_struct(lVar1);
    return;
  }
  return;
}


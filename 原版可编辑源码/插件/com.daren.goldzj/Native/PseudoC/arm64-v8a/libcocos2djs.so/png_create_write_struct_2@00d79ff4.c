
long png_create_write_struct_2(void)

{
  long lVar1;
  
  lVar1 = png_create_png_struct();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x218) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0x80000000f;
    *(undefined8 *)(lVar1 + 0x1f8) = 0xf00000008;
    *(undefined8 *)(lVar1 + 0x1f0) = 0xffffffff00002000;
    *(undefined8 *)(lVar1 + 0x208) = 0x8ffffffff;
    *(undefined8 *)(lVar1 + 0x200) = 0x100000008;
    *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 0x200000;
    png_set_write_fn(lVar1,0,0,0);
  }
  return lVar1;
}


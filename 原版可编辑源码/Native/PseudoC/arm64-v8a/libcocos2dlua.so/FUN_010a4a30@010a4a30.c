
void FUN_010a4a30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    ft_mem_free(lVar1,*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FT_GlyphLoader_Done(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


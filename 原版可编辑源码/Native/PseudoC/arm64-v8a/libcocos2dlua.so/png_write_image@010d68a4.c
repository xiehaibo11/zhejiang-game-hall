
void png_write_image(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 != 0) {
    iVar1 = png_set_interlace_handling(param_1);
    if (0 < iVar1) {
      uVar2 = *(uint *)(param_1 + 0x234);
      iVar3 = 0;
      do {
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            png_write_row(param_1,*(undefined8 *)(param_2 + lVar4 * 8));
            uVar2 = *(uint *)(param_1 + 0x234);
            lVar4 = lVar4 + 1;
          } while ((uint)lVar4 < uVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar1);
    }
  }
  return;
}



void png_destroy_gamma_table(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  png_free(param_1,*(undefined8 *)(param_1 + 0x2f0));
  lVar2 = *(long *)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (lVar2 != 0) {
    uVar1 = 8 - *(int *)(param_1 + 0x2e8);
    if (uVar1 != 0x1f) {
      lVar3 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar2 + lVar3 * 8));
        lVar2 = *(long *)(param_1 + 0x2f8);
        lVar3 = lVar3 + 1;
      } while (lVar3 < 1 << (ulong)(uVar1 & 0x1f));
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  png_free(param_1,*(undefined8 *)(param_1 + 0x300));
  *(undefined8 *)(param_1 + 0x300) = 0;
  png_free(param_1,*(undefined8 *)(param_1 + 0x308));
  lVar2 = *(long *)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (lVar2 != 0) {
    uVar1 = 8 - *(int *)(param_1 + 0x2e8);
    if (uVar1 != 0x1f) {
      lVar3 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar2 + lVar3 * 8));
        lVar2 = *(long *)(param_1 + 0x310);
        lVar3 = lVar3 + 1;
      } while (lVar3 < 1 << (ulong)(uVar1 & 0x1f));
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x318);
  if (lVar2 != 0) {
    uVar1 = 8 - *(int *)(param_1 + 0x2e8);
    if (uVar1 != 0x1f) {
      lVar3 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar2 + lVar3 * 8));
        lVar2 = *(long *)(param_1 + 0x318);
        lVar3 = lVar3 + 1;
      } while (lVar3 < 1 << (ulong)(uVar1 & 0x1f));
    }
    png_free(param_1);
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  return;
}


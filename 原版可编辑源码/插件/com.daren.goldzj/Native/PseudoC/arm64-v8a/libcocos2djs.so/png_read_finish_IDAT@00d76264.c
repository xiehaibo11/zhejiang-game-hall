
void png_read_finish_IDAT(long param_1)

{
  if ((*(byte *)(param_1 + 0x168) >> 3 & 1) == 0) {
    png_read_IDAT_data(param_1,0,0);
    *(undefined8 *)(param_1 + 400) = 0;
    if ((*(uint *)(param_1 + 0x168) >> 3 & 1) == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 8;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    }
  }
  if (*(int *)(param_1 + 0x170) == 0x49444154) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x290));
    return;
  }
  return;
}


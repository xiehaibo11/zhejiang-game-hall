
void png_read_finish_row(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
    bVar7 = *(char *)(param_1 + 0x2ad) + 1;
    *(byte *)(param_1 + 0x2ad) = bVar7;
    if (bVar7 < 7) {
      iVar4 = *(int *)(param_1 + 0x230) + -1;
      if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) {
        bVar2 = (&DAT_0194c579)[bVar7];
        uVar1 = 0;
        if (bVar2 != 0) {
          uVar1 = ((iVar4 + (uint)bVar2) - (uint)(byte)(&DAT_0194c572)[bVar7]) / (uint)bVar2;
        }
        *(uint *)(param_1 + 0x248) = uVar1;
        return;
      }
      do {
        bVar2 = (&DAT_0194c56b)[bVar7];
        bVar3 = (&DAT_0194c579)[bVar7];
        uVar1 = (*(int *)(param_1 + 0x234) + -1 + (uint)bVar2) - (uint)(byte)(&DAT_0194c564)[bVar7];
        uVar5 = (iVar4 + (uint)bVar3) - (uint)(byte)(&DAT_0194c572)[bVar7];
        uVar9 = (uint)bVar2;
        uVar8 = (uint)bVar3;
        if ((bVar2 <= uVar1) && (bVar3 <= uVar5)) {
          uVar6 = 0;
          if (uVar9 != 0) {
            uVar6 = uVar1 / uVar9;
          }
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          *(uint *)(param_1 + 0x238) = uVar6;
          *(uint *)(param_1 + 0x248) = uVar1;
          return;
        }
        bVar7 = bVar7 + 1;
        *(byte *)(param_1 + 0x2ad) = bVar7;
      } while (bVar7 < 7);
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar1 / uVar9;
      }
      uVar1 = 0;
      if (uVar8 != 0) {
        uVar1 = uVar5 / uVar8;
      }
      *(uint *)(param_1 + 0x238) = uVar6;
      *(uint *)(param_1 + 0x248) = uVar1;
      bVar7 = *(byte *)(param_1 + 0x168);
      goto joined_r0x00d76350;
    }
  }
  bVar7 = *(byte *)(param_1 + 0x168);
joined_r0x00d76350:
  if ((bVar7 >> 3 & 1) == 0) {
    png_read_IDAT_data(param_1,0,0);
    *(undefined8 *)(param_1 + 400) = 0;
    if ((*(uint *)(param_1 + 0x168) >> 3 & 1) == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 8;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    }
  }
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
    return;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x290));
  return;
}



void png_write_finish_row(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      bVar7 = *(byte *)(param_1 + 0x2ad);
      do {
        bVar7 = bVar7 + 1;
        if (6 < bVar7) break;
        bVar2 = (&DAT_0194da82)[bVar7];
        bVar3 = (&DAT_0194da74)[bVar7];
        uVar1 = (*(int *)(param_1 + 0x230) + (uint)bVar2 + -1) - (uint)(byte)(&DAT_0194da7b)[bVar7];
        uVar4 = (*(int *)(param_1 + 0x234) + (uint)bVar3 + -1) - (uint)(byte)(&DAT_0194da6d)[bVar7];
        uVar5 = 0;
        if (bVar2 != 0) {
          uVar5 = uVar1 / bVar2;
        }
        uVar6 = 0;
        if (bVar3 != 0) {
          uVar6 = uVar4 / bVar3;
        }
        *(uint *)(param_1 + 0x23c) = uVar5;
        *(uint *)(param_1 + 0x238) = uVar6;
      } while ((uVar4 < bVar3) || (uVar1 < bVar2));
    }
    else {
      bVar7 = *(char *)(param_1 + 0x2ad) + 1;
    }
    *(byte *)(param_1 + 0x2ad) = bVar7;
    if (bVar7 < 7) {
      if (*(void **)(param_1 + 600) == (void *)0x0) {
        return;
      }
      uVar8 = (ulong)*(byte *)(param_1 + 0x2b1) * (ulong)*(byte *)(param_1 + 0x2b4);
      if ((uint)uVar8 < 8) {
        uVar8 = uVar8 * *(uint *)(param_1 + 0x230) + 7 >> 3;
      }
      else {
        uVar8 = (uVar8 >> 3) * (ulong)*(uint *)(param_1 + 0x230);
      }
      memset(*(void **)(param_1 + 600),0,uVar8 + 1);
      return;
    }
  }
  png_compress_IDAT(param_1,0,0,4);
  return;
}


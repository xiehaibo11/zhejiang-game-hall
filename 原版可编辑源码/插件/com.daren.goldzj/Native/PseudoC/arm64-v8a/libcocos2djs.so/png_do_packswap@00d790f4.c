
void png_do_packswap(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 8) {
    lVar4 = *(long *)(param_1 + 8);
    if (bVar1 == 1) {
      puVar5 = &DAT_0194cc40;
    }
    else if (bVar1 == 4) {
      puVar5 = &DAT_0194ce40;
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      puVar5 = &DAT_0194cd40;
    }
    if (0 < lVar4) {
      pbVar2 = param_2;
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = puVar5[*pbVar2];
        pbVar2 = pbVar3;
      } while (pbVar3 < param_2 + lVar4);
    }
  }
  return;
}


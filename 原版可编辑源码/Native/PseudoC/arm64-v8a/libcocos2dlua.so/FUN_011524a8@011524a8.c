
void FUN_011524a8(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  
  if (0 < (int)param_5) {
    iVar4 = 0;
    uVar5 = (ulong)param_5;
    do {
      uVar3 = (uint)*param_1 * 0x4a85 >> 8;
      uVar2 = (uVar3 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      if (uVar2 >> 0xe == 0) {
        bVar6 = (byte)(uVar2 >> 6);
      }
      else {
        bVar6 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = ((uVar3 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      if (uVar2 >> 0xe == 0) {
        uVar2 = uVar2 >> 6;
      }
      else {
        uVar2 = ((int)uVar2 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar3 = (uVar3 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      lVar1 = (long)iVar4;
      if (uVar3 >> 0xe == 0) {
        uVar3 = uVar3 >> 6;
      }
      else {
        uVar3 = ((int)uVar3 >> 0x1f & 0xffffff01U) + 0xff;
      }
      iVar4 = iVar4 + 2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
      *(byte *)(param_4 + lVar1) = bVar6 & 0xf8 | (byte)(uVar2 >> 5);
      ((byte *)(param_4 + lVar1))[1] = (byte)((uVar2 & 0x1c) << 3) | (byte)(uVar3 >> 3);
    } while (uVar5 != 0);
  }
  return;
}


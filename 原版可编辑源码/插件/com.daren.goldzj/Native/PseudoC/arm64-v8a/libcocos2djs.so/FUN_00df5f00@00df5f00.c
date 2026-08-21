
void FUN_00df5f00(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  
  if (0 < (int)param_5) {
    iVar5 = 0;
    uVar6 = (ulong)param_5;
    do {
      uVar2 = (uint)*param_1 * 0x4a85 >> 8;
      uVar4 = (uVar2 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      if (uVar4 >> 0xe == 0) {
        bVar7 = (byte)(uVar4 >> 6);
      }
      else {
        bVar7 = ((byte)((int)uVar4 >> 0x1f) & 1) - 1;
      }
      uVar4 = ((uVar2 + 0x2204) - ((uint)*param_2 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      if (uVar4 >> 0xe == 0) {
        uVar4 = uVar4 >> 6;
      }
      else {
        uVar4 = ((int)uVar4 >> 0x1f & 0xffffff01U) + 0xff;
      }
      uVar2 = (uVar2 + ((uint)*param_2 * 0x811a >> 8)) - 0x4515;
      lVar1 = (long)iVar5;
      if (uVar2 >> 0xe == 0) {
        bVar3 = (byte)(uVar2 >> 6);
      }
      else {
        bVar3 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      iVar5 = iVar5 + 2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 1;
      ((byte *)(param_4 + lVar1))[1] = bVar3 | 0xf;
      *(byte *)(param_4 + lVar1) = bVar7 & 0xf0 | (byte)(uVar4 >> 4);
    } while (uVar6 != 0);
  }
  return;
}


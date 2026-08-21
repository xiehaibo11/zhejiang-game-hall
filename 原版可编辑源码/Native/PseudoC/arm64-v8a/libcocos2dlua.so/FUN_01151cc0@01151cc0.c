
void FUN_01151cc0(byte *param_1,byte *param_2,byte *param_3,long param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  
  if (0 < (int)param_5) {
    iVar5 = 0;
    uVar6 = (ulong)param_5;
    do {
      bVar3 = *param_2;
      uVar4 = (uint)*param_1 * 0x4a85 >> 8;
      uVar2 = (uVar4 + ((uint)*param_3 * 0x6625 >> 8)) - 0x379a;
      pcVar1 = (char *)(param_4 + iVar5);
      if (uVar2 >> 0xe == 0) {
        cVar7 = (char)(uVar2 >> 6);
      }
      else {
        cVar7 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = ((uVar4 + 0x2204) - ((uint)bVar3 * 0x1913 >> 8)) - ((uint)*param_3 * 0x3408 >> 8);
      *pcVar1 = cVar7;
      if (uVar2 >> 0xe == 0) {
        cVar7 = (char)(uVar2 >> 6);
      }
      else {
        cVar7 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      uVar2 = (uVar4 + ((uint)bVar3 * 0x811a >> 8)) - 0x4515;
      pcVar1[1] = cVar7;
      if (uVar2 >> 0xe == 0) {
        cVar7 = (char)(uVar2 >> 6);
      }
      else {
        cVar7 = ((byte)((int)uVar2 >> 0x1f) & 1) - 1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + 4;
      pcVar1[2] = cVar7;
      pcVar1[3] = -1;
    } while (uVar6 != 0);
  }
  return;
}


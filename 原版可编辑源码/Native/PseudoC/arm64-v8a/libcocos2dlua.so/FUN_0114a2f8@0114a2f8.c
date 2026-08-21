
void FUN_0114a2f8(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar2 = param_3 << 1 | 1;
  pbVar6 = (byte *)(param_1 + 5);
  lVar7 = 0x10;
  do {
    bVar4 = pbVar6[-2];
    bVar5 = pbVar6[-1];
    if ((int)((uint)(byte)(&DAT_0149961c)[(ulong)pbVar6[-3] - (ulong)*pbVar6] +
             (uint)(byte)(&DAT_0149961c)[(ulong)bVar4 - (ulong)bVar5] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar5 - (uint)bVar4) * 3 +
              (int)(char)(&DAT_01498d40)[(ulong)pbVar6[-3] - (ulong)*pbVar6];
      cVar3 = (&DAT_014991ad)[iVar1 + 4 >> 3];
      pbVar6[-2] = (&DAT_0149931d)[(long)(char)(&DAT_014991ad)[iVar1 + 3 >> 3] + (ulong)bVar4];
      pbVar6[-1] = (&DAT_0149931d)[(ulong)bVar5 - (long)cVar3];
    }
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar6 + param_2;
  } while (lVar7 != 0);
  pbVar6 = (byte *)(param_1 + 9);
  lVar7 = 0x10;
  do {
    bVar4 = pbVar6[-2];
    bVar5 = pbVar6[-1];
    if ((int)((uint)(byte)(&DAT_0149961c)[(ulong)pbVar6[-3] - (ulong)*pbVar6] +
             (uint)(byte)(&DAT_0149961c)[(ulong)bVar4 - (ulong)bVar5] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar5 - (uint)bVar4) * 3 +
              (int)(char)(&DAT_01498d40)[(ulong)pbVar6[-3] - (ulong)*pbVar6];
      cVar3 = (&DAT_014991ad)[iVar1 + 4 >> 3];
      pbVar6[-2] = (&DAT_0149931d)[(long)(char)(&DAT_014991ad)[iVar1 + 3 >> 3] + (ulong)bVar4];
      pbVar6[-1] = (&DAT_0149931d)[(ulong)bVar5 - (long)cVar3];
    }
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar6 + param_2;
  } while (lVar7 != 0);
  pbVar6 = (byte *)(param_1 + 0xd);
  lVar7 = 0x10;
  do {
    bVar4 = pbVar6[-2];
    bVar5 = pbVar6[-1];
    if ((int)((uint)(byte)(&DAT_0149961c)[(ulong)pbVar6[-3] - (ulong)*pbVar6] +
             (uint)(byte)(&DAT_0149961c)[(ulong)bVar4 - (ulong)bVar5] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar5 - (uint)bVar4) * 3 +
              (int)(char)(&DAT_01498d40)[(ulong)pbVar6[-3] - (ulong)*pbVar6];
      cVar3 = (&DAT_014991ad)[iVar1 + 4 >> 3];
      pbVar6[-2] = (&DAT_0149931d)[(long)(char)(&DAT_014991ad)[iVar1 + 3 >> 3] + (ulong)bVar4];
      pbVar6[-1] = (&DAT_0149931d)[(ulong)bVar5 - (long)cVar3];
    }
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar6 + param_2;
  } while (lVar7 != 0);
  return;
}


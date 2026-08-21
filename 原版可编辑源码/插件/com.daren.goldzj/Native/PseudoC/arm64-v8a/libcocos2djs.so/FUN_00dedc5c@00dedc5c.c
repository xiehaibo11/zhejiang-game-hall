
void FUN_00dedc5c(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar10 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  lVar9 = (long)(int)param_2;
  uVar6 = -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1;
  param_1 = param_1 + uVar10;
  lVar12 = 0;
  uVar2 = param_3 << 1 | 1;
  lVar11 = -uVar6;
  do {
    bVar3 = *(byte *)((param_1 - lVar9) + lVar12);
    bVar4 = *(byte *)(param_1 + lVar12);
    lVar7 = (ulong)*(byte *)((param_1 - uVar6) + lVar12) -
            (ulong)*(byte *)(param_1 + lVar9 + lVar12);
    if ((int)((uint)(byte)(&DAT_01970a5c)[lVar7] +
             (uint)(byte)(&DAT_01970a5c)[(ulong)bVar3 - (ulong)bVar4] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar4 - (uint)bVar3) * 3 + (int)(char)(&DAT_01970180)[lVar7];
      cVar5 = (&DAT_019705ed)[iVar1 + 4 >> 3];
      *(undefined *)((param_1 - lVar9) + lVar12) =
           (&DAT_0197075d)[(long)(char)(&DAT_019705ed)[iVar1 + 3 >> 3] + (ulong)bVar3];
      *(undefined *)(param_1 + lVar12) = (&DAT_0197075d)[(ulong)bVar4 - (long)cVar5];
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
  param_1 = param_1 + uVar10;
  lVar12 = 0;
  lVar7 = param_1 + -lVar9;
  do {
    bVar3 = *(byte *)(lVar7 + lVar12);
    bVar4 = *(byte *)(param_1 + lVar12);
    lVar8 = (ulong)*(byte *)(param_1 + lVar11 + lVar12) - (ulong)*(byte *)(param_1 + lVar9 + lVar12)
    ;
    if ((int)((uint)(byte)(&DAT_01970a5c)[lVar8] +
             (uint)(byte)(&DAT_01970a5c)[(ulong)bVar3 - (ulong)bVar4] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar4 - (uint)bVar3) * 3 + (int)(char)(&DAT_01970180)[lVar8];
      cVar5 = (&DAT_019705ed)[iVar1 + 4 >> 3];
      *(undefined *)(lVar7 + lVar12) =
           (&DAT_0197075d)[(long)(char)(&DAT_019705ed)[iVar1 + 3 >> 3] + (ulong)bVar3];
      *(undefined *)(param_1 + lVar12) = (&DAT_0197075d)[(ulong)bVar4 - (long)cVar5];
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
  param_1 = param_1 + uVar10;
  lVar12 = 0;
  lVar7 = param_1 + -lVar9;
  do {
    bVar3 = *(byte *)(lVar7 + lVar12);
    bVar4 = *(byte *)(param_1 + lVar12);
    lVar8 = (ulong)*(byte *)(param_1 + lVar11 + lVar12) - (ulong)*(byte *)(param_1 + lVar9 + lVar12)
    ;
    if ((int)((uint)(byte)(&DAT_01970a5c)[lVar8] +
             (uint)(byte)(&DAT_01970a5c)[(ulong)bVar3 - (ulong)bVar4] * 4) <= (int)uVar2) {
      iVar1 = ((uint)bVar4 - (uint)bVar3) * 3 + (int)(char)(&DAT_01970180)[lVar8];
      cVar5 = (&DAT_019705ed)[iVar1 + 4 >> 3];
      *(undefined *)(lVar7 + lVar12) =
           (&DAT_0197075d)[(long)(char)(&DAT_019705ed)[iVar1 + 3 >> 3] + (ulong)bVar3];
      *(undefined *)(param_1 + lVar12) = (&DAT_0197075d)[(ulong)bVar4 - (long)cVar5];
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
  return;
}


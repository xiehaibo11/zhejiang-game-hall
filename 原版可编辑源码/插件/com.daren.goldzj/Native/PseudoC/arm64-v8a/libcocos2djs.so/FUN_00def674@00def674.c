
void FUN_00def674(byte *param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  if (0 < param_4) {
    lVar11 = (long)(int)param_2;
    uVar13 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
    lVar14 = -uVar13;
    lVar15 = -lVar11;
    lVar6 = lVar11 + (long)(int)param_2 * -4;
    param_4 = param_4 + 1;
    do {
      iVar5 = FUN_00def894(param_1,(ulong)param_2,param_5 << 1 | 1,param_6);
      if (iVar5 != 0) {
        uVar9 = (ulong)param_1[lVar14];
        bVar1 = param_1[lVar15];
        uVar7 = (ulong)bVar1;
        if (param_7 < (int)(uint)(byte)(&DAT_01970a5c)[uVar9 - uVar7]) {
          uVar8 = (ulong)*param_1;
          uVar10 = (ulong)param_1[lVar11];
LAB_00def778:
          iVar5 = ((int)uVar8 - (uint)bVar1) * 3 + (int)(char)(&DAT_01970180)[uVar9 - uVar10];
          cVar2 = (&DAT_019705ed)[iVar5 + 4 >> 3];
          param_1[lVar15] = (&DAT_0197075d)[(long)(char)(&DAT_019705ed)[iVar5 + 3 >> 3] + uVar7];
          iVar5 = (int)uVar8 - (int)cVar2;
          pbVar12 = param_1;
        }
        else {
          uVar8 = (ulong)*param_1;
          uVar10 = (ulong)param_1[lVar11];
          if (param_7 < (int)(uint)(byte)(&DAT_01970a5c)[uVar10 - uVar8]) goto LAB_00def778;
          iVar5 = (uint)*param_1 - (uint)bVar1;
          cVar2 = (&DAT_01970180)
                  [(long)iVar5 + (long)iVar5 * 2 + (long)(char)(&DAT_01970180)[uVar9 - uVar10]];
          iVar5 = cVar2 * 9 + 0x3f >> 7;
          pbVar12 = param_1 + uVar13;
          lVar3 = (long)((ulong)(cVar2 * 0x12 + 0x3f) << 0x20) >> 0x27;
          bVar1 = *pbVar12;
          param_1[lVar6] = (&DAT_0197075d)[(ulong)param_1[lVar6] + (long)iVar5];
          lVar4 = (long)((ulong)(cVar2 * 0x1b + 0x3f) << 0x20) >> 0x27;
          param_1[lVar14] = (&DAT_0197075d)[lVar3 + uVar9];
          param_1[lVar15] = (&DAT_0197075d)[lVar4 + uVar7];
          *param_1 = (&DAT_0197075d)[uVar8 - lVar4];
          param_1[lVar11] = (&DAT_0197075d)[uVar10 - lVar3];
          iVar5 = (uint)bVar1 - iVar5;
        }
        *pbVar12 = (&DAT_0197075d)[iVar5];
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_3;
    } while (1 < param_4);
  }
  return;
}


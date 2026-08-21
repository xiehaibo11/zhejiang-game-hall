
void FUN_0114bebc(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  
  if (0 < param_4) {
    lVar13 = (long)param_2;
    lVar7 = -lVar13;
    param_4 = param_4 + 1;
    do {
      iVar8 = FUN_0114bd3c(param_1,param_2,param_5 << 1 | 1,param_6);
      if (iVar8 != 0) {
        bVar3 = param_1[(long)param_2 * -2];
        bVar4 = param_1[lVar7];
        uVar9 = (ulong)bVar4;
        if (param_7 < (int)(uint)(byte)(&DAT_0149961c)[bVar3 - uVar9]) {
          uVar10 = (ulong)*param_1;
          uVar11 = (ulong)param_1[lVar13];
LAB_0114bfb8:
          iVar8 = ((int)uVar10 - (uint)bVar4) * 3 + (int)(char)(&DAT_01498d40)[bVar3 - uVar11];
          cVar5 = (&DAT_014991ad)[iVar8 + 4 >> 3];
          param_1[lVar7] = (&DAT_0149931d)[(long)(char)(&DAT_014991ad)[iVar8 + 3 >> 3] + uVar9];
          iVar8 = (int)uVar10 - (int)cVar5;
          pbVar12 = param_1;
        }
        else {
          pbVar12 = param_1 + lVar13;
          bVar1 = *pbVar12;
          uVar11 = (ulong)bVar1;
          bVar2 = *param_1;
          uVar10 = (ulong)bVar2;
          if (param_7 < (int)(uint)(byte)(&DAT_0149961c)[uVar11 - uVar10]) goto LAB_0114bfb8;
          iVar8 = ((uint)bVar2 - (uint)bVar4) * 3;
          cVar5 = (&DAT_014991ad)[iVar8 + 4 >> 3];
          cVar6 = (&DAT_014991ad)[iVar8 + 3 >> 3];
          iVar8 = cVar5 + 1 >> 1;
          param_1[(long)param_2 * -2] = (&DAT_0149931d)[(int)(iVar8 + (uint)bVar3)];
          param_1[lVar7] = (&DAT_0149931d)[(long)cVar6 + uVar9];
          *param_1 = (&DAT_0149931d)[(int)((uint)bVar2 - (int)cVar5)];
          iVar8 = (uint)bVar1 - iVar8;
        }
        *pbVar12 = (&DAT_0149931d)[iVar8];
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_3;
    } while (1 < param_4);
  }
  return;
}


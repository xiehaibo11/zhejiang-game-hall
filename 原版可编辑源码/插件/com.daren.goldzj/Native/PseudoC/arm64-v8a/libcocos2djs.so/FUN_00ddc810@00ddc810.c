
void FUN_00ddc810(long param_1,short *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  if (0 < param_3) {
    puVar5 = *(uint **)(param_1 + 0x10);
    do {
      uVar2 = *puVar5 & 0x3fff;
      *param_2 = ((ushort)(*puVar5 >> 0xc) & 0xffd) + 0x3402;
      dVar9 = 0.473684211;
      dVar10 = 0.210526316;
      if (uVar2 < 0x3fa1) {
        uVar6 = 0;
        uVar8 = 0xa3;
        do {
          uVar7 = (ulong)uVar6;
          do {
            uVar6 = (uint)uVar7;
            if ((int)(uVar8 - uVar6) < 2) {
              sVar4 = *(short *)(&DAT_0196ec56 + (long)(int)uVar6 * 8);
              goto LAB_00ddc8d0;
            }
            uVar3 = (int)(uVar6 + uVar8) >> 1;
            uVar7 = (ulong)uVar3;
            sVar4 = *(short *)(&DAT_0196ec56 + (long)(int)uVar3 * 8);
          } while (0 < (int)(uVar2 - (int)sVar4));
          uVar8 = uVar3;
        } while ((int)(uVar2 - (int)sVar4) < 0);
LAB_00ddc8d0:
        dVar10 = ((double)(int)(uVar2 - (int)sVar4) + 0.5) * 0.0035000001080334187 +
                 (double)*(float *)(&DAT_0196ec50 + uVar7 * 8);
        dVar9 = ((double)(int)uVar7 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
      }
      param_2[1] = (short)(int)(dVar10 * 32768.0);
      param_2[2] = (short)(int)(dVar9 * 32768.0);
      param_2 = param_2 + 3;
      puVar5 = puVar5 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar1);
  }
  return;
}


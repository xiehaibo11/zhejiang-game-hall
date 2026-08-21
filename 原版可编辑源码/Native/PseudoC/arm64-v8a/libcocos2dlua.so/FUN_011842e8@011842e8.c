
void FUN_011842e8(float param_1,float param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = *param_4;
  bVar4 = *(byte *)(lVar7 + 0x30);
  bVar5 = *(byte *)(lVar7 + 0x31);
  (**(code **)(*param_3 + 0x20))(0x40000000,param_3,1);
  if ((ulong)bVar5 != 0) {
    uVar9 = 0;
    do {
      if (bVar4 != 0) {
        uVar11 = 0;
        do {
          lVar1 = uVar11 + uVar9 * bVar4;
          uVar6 = (uint)*(byte *)(param_4[2] + lVar1);
          if (uVar6 != 0xff) {
            lVar10 = 0;
            piVar8 = &DAT_0149fd40;
            do {
              if ((0x10 << (ulong)((uint)lVar10 & 0x1f) & (uint)*(byte *)(param_4[4] + lVar1)) != 0)
              {
                fVar12 = *(float *)(lVar7 + 0x14);
                iVar2 = *piVar8;
                iVar3 = piVar8[1];
                fVar14 = (float)(uVar6 + 2) * param_2 + *(float *)(lVar7 + 0x18);
                fVar13 = *(float *)(lVar7 + 0x1c);
                (**(code **)(*param_3 + 0x30))
                          (fVar12 + (float)(piVar8[-2] + (int)uVar11) * param_1,fVar14,
                           fVar13 + (float)(piVar8[-1] + (int)uVar9) * param_1,param_3,0xffffffff);
                (**(code **)(*param_3 + 0x30))
                          (fVar12 + (float)(iVar2 + (int)uVar11) * param_1,fVar14,
                           fVar13 + (float)(iVar3 + (int)uVar9) * param_1,param_3,0xffffffff);
              }
              lVar10 = lVar10 + 1;
              piVar8 = piVar8 + 4;
            } while (lVar10 != 4);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != bVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != bVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x011844b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x48))(param_3);
  return;
}


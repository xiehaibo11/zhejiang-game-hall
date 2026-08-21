
/* duDebugDrawTileCacheContours(duDebugDraw*, dtTileCacheContourSet const&, float const*, float,
   float) */

void duDebugDrawTileCacheContours
               (duDebugDraw *param_1,dtTileCacheContourSet *param_2,float *param_3,float param_4,
               float param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(0x40000000,param_1,1);
    if (0 < *(int *)param_2) {
      lVar12 = 0;
      do {
        lVar11 = *(long *)(param_2 + 8);
        uVar5 = duIntToCol((uint)lVar12,0xff);
        puVar14 = (uint *)(lVar11 + lVar12 * 0x18);
        uVar6 = *puVar14;
        uVar9 = (ulong)uVar6;
        if (0 < (int)uVar6) {
          uVar15 = 0;
          lVar16 = 0;
          iVar8 = ((uint)lVar12 & 1) + 1;
          do {
            lVar16 = lVar16 + 1;
            lVar10 = *(long *)(lVar11 + lVar12 * 0x18 + 8);
            iVar4 = 0;
            iVar7 = (int)uVar9;
            if (iVar7 != 0) {
              iVar4 = (int)lVar16 / iVar7;
            }
            pbVar1 = (byte *)(lVar10 + (uVar15 & 0xfffffffc));
            pbVar2 = (byte *)(lVar10 + (ulong)(uint)(((int)lVar16 - iVar4 * iVar7) * 4));
            fVar18 = (float)NEON_ucvtf((uint)*pbVar1);
            fVar19 = (float)NEON_ucvtf((uint)*pbVar2);
            bVar3 = pbVar1[3];
            fVar22 = *param_3 + fVar18 * param_4;
            fVar21 = *param_3 + fVar19 * param_4;
            fVar23 = param_3[1] + (float)(iVar8 + (uint)pbVar2[1]) * param_5;
            fVar24 = param_3[1] + (float)(iVar8 + (uint)pbVar1[1]) * param_5;
            fVar18 = (float)NEON_ucvtf((uint)pbVar1[2]);
            fVar19 = (float)NEON_ucvtf((uint)pbVar2[2]);
            fVar18 = param_3[2] + fVar18 * param_4;
            fVar19 = param_3[2] + fVar19 * param_4;
            uVar6 = uVar5;
            if ((~(uint)bVar3 & 0xf) != 0) {
              iVar4 = *(int *)(&DAT_0149fd18 + (ulong)((bVar3 & 0xf) << 1) * 4);
              iVar7 = *(int *)(&DAT_0149fd18 + (ulong)((bVar3 & 0xf) << 1 | 1) * 4);
              fVar17 = (fVar22 + fVar21) * 0.5;
              fVar20 = (fVar24 + fVar23) * 0.5;
              (**(code **)(*(long *)param_1 + 0x30))(fVar17,fVar20,param_1,0xff0000ff);
              (**(code **)(*(long *)param_1 + 0x30))
                        (fVar17 + (float)(iVar4 << 1) * param_4,fVar20,
                         (fVar18 + fVar19) * 0.5 + (float)(iVar7 << 1) * param_4,param_1,0xff0000ff)
              ;
              uVar6 = 0x80ffffff;
            }
            duAppendArrow(param_1,fVar22,fVar24,fVar18,fVar21,fVar23,fVar19,0.0,param_4 * 0.5,uVar6)
            ;
            uVar9 = (ulong)(int)*puVar14;
            uVar15 = uVar15 + 4;
          } while (lVar16 < (long)uVar9);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)param_2);
    }
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    (**(code **)(*(long *)param_1 + 0x20))(0x40800000,param_1,0);
    iVar8 = *(int *)param_2;
    if (0 < iVar8) {
      lVar12 = 0;
      do {
        lVar11 = *(long *)(param_2 + 8);
        piVar13 = (int *)(lVar11 + lVar12 * 0x18);
        if (0 < *piVar13) {
          uVar9 = 0;
          lVar16 = 0;
          do {
            pbVar1 = (byte *)(*(long *)(lVar11 + lVar12 * 0x18 + 8) + (uVar9 & 0xfffffffc));
            uVar5 = duIntToCol((uint)lVar12,0xff);
            fVar18 = (float)NEON_ucvtf((uint)*pbVar1);
            fVar19 = (float)NEON_ucvtf((uint)pbVar1[2]);
            uVar6 = 0xff0000ff;
            if (-1 < (char)pbVar1[3]) {
              uVar6 = uVar5 >> 1 & 0x7f7f7f | uVar5 & 0xff000000;
            }
            (**(code **)(*(long *)param_1 + 0x30))
                      (*param_3 + fVar18 * param_4,
                       param_3[1] + (float)(((uint)lVar12 & 1) + 1 + (uint)pbVar1[1]) * param_5,
                       param_3[2] + fVar19 * param_4,param_1,uVar6);
            lVar16 = lVar16 + 1;
            uVar9 = uVar9 + 4;
          } while (lVar16 < *piVar13);
          iVar8 = *(int *)param_2;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar8);
    }
                    /* WARNING: Could not recover jumptable at 0x01184b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}


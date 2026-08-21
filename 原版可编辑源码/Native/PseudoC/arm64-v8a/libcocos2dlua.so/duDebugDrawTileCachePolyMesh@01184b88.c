
/* duDebugDrawTileCachePolyMesh(duDebugDraw*, dtTileCachePolyMesh const&, float const*, float,
   float) */

void duDebugDrawTileCachePolyMesh
               (duDebugDraw *param_1,dtTileCachePolyMesh *param_2,float *param_3,float param_4,
               float param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *puVar12;
  long lVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_1 == (duDebugDraw *)0x0) {
    return;
  }
  uVar2 = *(uint *)param_2;
  uVar16 = (ulong)uVar2;
  lVar17 = (long)(int)uVar2;
  (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,2);
  if (0 < *(int *)(param_2 + 8)) {
    iVar11 = 0;
    lVar21 = 0;
    do {
      bVar5 = *(byte *)(*(long *)(param_2 + 0x28) + lVar21);
      lVar18 = *(long *)(param_2 + 0x18);
      if (bVar5 == 0x3f) {
        uVar10 = 0x40ffc000;
      }
      else if (bVar5 == 0) {
        uVar10 = 0x40000000;
      }
      else {
        uVar10 = duIntToCol((uint)bVar5,0xff);
      }
      if (2 < (int)uVar2) {
        puVar14 = (ushort *)(lVar18 + (long)iVar11 * 2 + 4);
        lVar13 = uVar16 - 2;
        do {
          uVar6 = *puVar14;
          if ((ulong)uVar6 == 0xffff) break;
          uVar7 = puVar14[-1];
          puVar12 = (ushort *)
                    (*(long *)(param_2 + 0x10) +
                    (ulong)*(ushort *)(lVar18 + (long)(int)(uVar2 * 2 * (int)lVar21) * 2) * 6);
          fVar26 = (float)NEON_ucvtf((uint)*puVar12);
          fVar25 = (float)NEON_ucvtf((uint)puVar12[2]);
          (**(code **)(*(long *)param_1 + 0x30))
                    (*param_3 + fVar26 * param_4,param_3[1] + (float)(puVar12[1] + 1) * param_5,
                     param_3[2] + fVar25 * param_4,param_1,uVar10);
          puVar12 = (ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar7 * 6);
          fVar26 = (float)NEON_ucvtf((uint)*puVar12);
          fVar25 = (float)NEON_ucvtf((uint)puVar12[2]);
          (**(code **)(*(long *)param_1 + 0x30))
                    (*param_3 + fVar26 * param_4,param_3[1] + (float)(puVar12[1] + 1) * param_5,
                     param_3[2] + fVar25 * param_4,param_1,uVar10);
          puVar12 = (ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar6 * 6);
          fVar26 = (float)NEON_ucvtf((uint)*puVar12);
          fVar25 = (float)NEON_ucvtf((uint)puVar12[2]);
          (**(code **)(*(long *)param_1 + 0x30))
                    (*param_3 + fVar26 * param_4,param_3[1] + (float)(puVar12[1] + 1) * param_5,
                     param_3[2] + fVar25 * param_4,param_1,uVar10);
          lVar13 = lVar13 + -1;
          puVar14 = puVar14 + 1;
        } while (lVar13 != 0);
      }
      lVar21 = lVar21 + 1;
      iVar11 = iVar11 + uVar2 * 2;
    } while (lVar21 < *(int *)(param_2 + 8));
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  (**(code **)(*(long *)param_1 + 0x20))(0x3fc00000,param_1,1);
  if (0 < *(int *)(param_2 + 8)) {
    iVar11 = 0;
    lVar21 = 0;
    do {
      if (0 < (int)uVar2) {
        lVar13 = *(long *)(param_2 + 0x18);
        lVar18 = lVar13 + (long)iVar11 * 2;
        uVar23 = 0;
        do {
          uVar15 = (ulong)*(ushort *)(lVar18 + uVar23 * 2);
          if (uVar15 == 0xffff) break;
          uVar24 = uVar23 + 1;
          if (-1 < *(short *)(lVar18 + lVar17 * 2 + uVar23 * 2)) {
            if ((long)uVar24 < lVar17) {
              uVar19 = 0;
              if (*(short *)(lVar18 + uVar23 * 2 + 2) != -1) {
                uVar19 = uVar24;
              }
            }
            else {
              uVar19 = 0;
            }
            puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + uVar15 * 6);
            fVar26 = (float)NEON_ucvtf((uint)*puVar14);
            uVar6 = *(ushort *)
                     (lVar13 + (long)(int)(uVar2 * 2 * (int)lVar21) * 2 +
                     (-(uVar19 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar19 & 0xffffffff) << 1));
            fVar25 = (float)NEON_ucvtf((uint)puVar14[2]);
            (**(code **)(*(long *)param_1 + 0x30))
                      (*param_3 + fVar26 * param_4,
                       param_3[1] + (float)(puVar14[1] + 1) * param_5 + 0.1,
                       param_3[2] + fVar25 * param_4,param_1,0x20403000);
            puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar6 * 6);
            fVar25 = (float)NEON_ucvtf((uint)*puVar14);
            fVar26 = (float)NEON_ucvtf((uint)puVar14[2]);
            (**(code **)(*(long *)param_1 + 0x30))
                      (*param_3 + fVar25 * param_4,
                       param_3[1] + (float)(puVar14[1] + 1) * param_5 + 0.1,
                       param_3[2] + fVar26 * param_4,param_1,0x20403000);
          }
          uVar23 = uVar24;
        } while (uVar16 != uVar24);
      }
      lVar21 = lVar21 + 1;
      iVar11 = iVar11 + uVar2 * 2;
    } while (lVar21 < *(int *)(param_2 + 8));
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  (**(code **)(*(long *)param_1 + 0x20))(0x40200000,param_1,1);
  if (0 < *(int *)(param_2 + 8)) {
    iVar11 = 0;
    lVar21 = 0;
    do {
      if (0 < (int)uVar2) {
        lVar13 = *(long *)(param_2 + 0x18);
        iVar1 = ((uint)lVar21 & 1) + 1;
        lVar18 = lVar13 + (long)iVar11 * 2;
        uVar23 = 0;
        do {
          uVar6 = *(ushort *)(lVar18 + uVar23 * 2);
          if (uVar6 == 0xffff) break;
          uVar15 = uVar23 + 1;
          uVar20 = (uint)*(short *)(lVar18 + lVar17 * 2 + uVar23 * 2);
          if ((int)uVar20 < 0) {
            if ((long)uVar15 < lVar17) {
              uVar24 = 0;
              if (*(short *)(lVar18 + uVar23 * 2 + 2) != -1) {
                uVar24 = uVar15;
              }
            }
            else {
              uVar24 = 0;
            }
            uVar7 = *(ushort *)
                     (lVar13 + (long)(int)(uVar2 * 2 * (uint)lVar21) * 2 +
                     (-(uVar24 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar24 & 0xffffffff) << 1));
            uVar20 = uVar20 & 0xf;
            if (uVar20 == 0xf) {
              uVar23 = (ulong)((uint)uVar6 + (uint)uVar6 * 2);
              uVar24 = (ulong)((uint)uVar7 * 3);
              uVar22 = 0xdc403000;
            }
            else {
              uVar23 = (ulong)uVar6 * 3;
              uVar24 = (ulong)uVar7 * 3;
              puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar6 * 6);
              puVar12 = (ushort *)(*(long *)(param_2 + 0x10) + (ulong)uVar7 * 6);
              fVar25 = (float)NEON_ucvtf((uint)*puVar14);
              fVar8 = (float)NEON_ucvtf((uint)*puVar12);
              fVar27 = param_3[2];
              iVar3 = *(int *)(&DAT_0149fd18 + (ulong)(uVar20 << 1) * 4);
              fVar26 = (float)NEON_ucvtf((uint)puVar14[2]);
              fVar9 = (float)NEON_ucvtf((uint)puVar12[2]);
              iVar4 = *(int *)(&DAT_0149fd18 + (ulong)(uVar20 << 1 | 1) * 4);
              fVar28 = (param_3[1] + (float)(iVar1 + (uint)puVar14[1]) * param_5 +
                       param_3[1] + (float)(iVar1 + (uint)puVar12[1]) * param_5) * 0.5;
              fVar25 = (*param_3 + fVar25 * param_4 + *param_3 + fVar8 * param_4) * 0.5;
              (**(code **)(*(long *)param_1 + 0x30))(fVar25,fVar28,param_1,0xff0000ff);
              (**(code **)(*(long *)param_1 + 0x30))
                        (fVar25 + (float)(iVar3 << 1) * param_4,fVar28,
                         (fVar27 + fVar26 * param_4 + fVar27 + fVar9 * param_4) * 0.5 +
                         (float)(iVar4 << 1) * param_4,param_1,0xff0000ff);
              uVar22 = 0x80ffffff;
            }
            puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + uVar23 * 2);
            fVar26 = (float)NEON_ucvtf((uint)*puVar14);
            fVar25 = (float)NEON_ucvtf((uint)puVar14[2]);
            (**(code **)(*(long *)param_1 + 0x30))
                      (*param_3 + fVar26 * param_4,
                       param_3[1] + (float)(puVar14[1] + 1) * param_5 + 0.1,
                       param_3[2] + fVar25 * param_4,param_1,uVar22);
            puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + uVar24 * 2);
            fVar25 = (float)NEON_ucvtf((uint)*puVar14);
            fVar26 = (float)NEON_ucvtf((uint)puVar14[2]);
            (**(code **)(*(long *)param_1 + 0x30))
                      (*param_3 + fVar25 * param_4,
                       param_3[1] + (float)(puVar14[1] + 1) * param_5 + 0.1,
                       param_3[2] + fVar26 * param_4,param_1,uVar22);
          }
          uVar23 = uVar15;
        } while (uVar16 != uVar15);
      }
      lVar21 = lVar21 + 1;
      iVar11 = iVar11 + uVar2 * 2;
    } while (lVar21 < *(int *)(param_2 + 8));
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  (**(code **)(*(long *)param_1 + 0x20))(0x40400000,param_1,0);
  if (0 < *(int *)(param_2 + 4)) {
    uVar16 = 0;
    lVar17 = 0;
    do {
      puVar14 = (ushort *)(*(long *)(param_2 + 0x10) + (uVar16 & 0xffffffff) * 2);
      fVar25 = (float)NEON_ucvtf((uint)*puVar14);
      fVar26 = (float)NEON_ucvtf((uint)puVar14[2]);
      (**(code **)(*(long *)param_1 + 0x30))
                (*param_3 + fVar25 * param_4,param_3[1] + (float)(puVar14[1] + 1) * param_5 + 0.1,
                 param_3[2] + fVar26 * param_4,param_1,0xdc000000);
      lVar17 = lVar17 + 1;
      uVar16 = uVar16 + 3;
    } while (lVar17 < *(int *)(param_2 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x011853c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


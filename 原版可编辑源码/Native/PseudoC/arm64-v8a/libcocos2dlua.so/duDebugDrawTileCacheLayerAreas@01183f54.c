
/* duDebugDrawTileCacheLayerAreas(duDebugDraw*, dtTileCacheLayer const&, float, float) */

void duDebugDrawTileCacheLayerAreas
               (duDebugDraw *param_1,dtTileCacheLayer *param_2,float param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  float fVar16;
  float fVar17;
  ulong local_b0;
  
  lVar12 = *(long *)param_2;
  bVar1 = *(byte *)(lVar12 + 0x30);
  bVar2 = *(byte *)(lVar12 + 0x31);
  uVar8 = duIntToCol(*(int *)(lVar12 + 0x10) + 1,0xff);
  lVar10 = *(long *)param_2;
  fVar16 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x34));
  fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 0x32));
  duDebugDrawBoxWire(param_1,*(float *)(lVar12 + 0x14) + fVar15 * param_3,*(float *)(lVar12 + 0x18),
                     *(float *)(lVar12 + 0x1c) + fVar16 * param_3,
                     *(float *)(lVar12 + 0x14) + (float)(*(byte *)(lVar10 + 0x33) + 1) * param_3,
                     *(float *)(lVar12 + 0x24),
                     *(float *)(lVar12 + 0x1c) + (float)(*(byte *)(lVar10 + 0x35) + 1) * param_3,
                     uVar8 & 0xffffff | 0x80000000,2.0);
  (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,3);
  if ((ulong)bVar2 != 0) {
    uVar4 = (uVar8 & 0xff) * 0xdf;
    uVar5 = (uVar8 >> 8 & 0xff) * 0xdf;
    uVar6 = (uVar8 >> 0x10 & 0xff) * 0xdf;
    iVar7 = (uVar8 >> 0x18) * 0xdf;
    uVar8 = uVar4 / 0xff;
    uVar11 = (iVar7 + 0x800U & 0xffff) / 0xff;
    lVar10 = 0;
    local_b0 = 0;
    do {
      if (bVar1 != 0) {
        uVar13 = 0;
        do {
          uVar14 = (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar10 + uVar13);
          if (uVar14 != 0xff) {
            bVar3 = *(byte *)(*(long *)(param_2 + 0x18) + lVar10 + uVar13);
            uVar9 = uVar8 | uVar11 << 0x18 | (uVar5 + 0x1800 & 0xffff) / 0xff << 8 |
                    (uVar6 + 0x1fe0 & 0xffff) / 0xff << 0x10;
            if ((bVar3 != 0x3f) &&
               (uVar9 = uVar8 | uVar5 / 0xff << 8 | uVar6 / 0xff << 0x10 | uVar11 << 0x18,
               bVar3 != 0)) {
              uVar9 = duIntToCol((uint)bVar3,0xff);
              uVar9 = ((uVar9 & 0xff) * 0x20 + uVar4 & 0xffff) / 0xff |
                      ((uVar9 >> 3 & 0x1fe0) + uVar5 & 0xffff) / 0xff << 8 |
                      ((uVar9 >> 0xb & 0x1fe0) + uVar6 & 0xffff) / 0xff << 0x10 |
                      ((uVar9 >> 0x13 & 0x1fe0) + iVar7 & 0xffff) / 0xff << 0x18;
            }
            fVar15 = (float)(int)uVar13 * param_3 + *(float *)(lVar12 + 0x14);
            fVar16 = (float)(uVar14 + 1) * param_4 + *(float *)(lVar12 + 0x18);
            fVar17 = (float)(int)local_b0 * param_3 + *(float *)(lVar12 + 0x1c);
            (**(code **)(*(long *)param_1 + 0x30))(fVar15,fVar16,fVar17,param_1,uVar9);
            (**(code **)(*(long *)param_1 + 0x30))(fVar15,fVar16,fVar17 + param_3,param_1,uVar9);
            (**(code **)(*(long *)param_1 + 0x30))
                      (fVar15 + param_3,fVar16,fVar17 + param_3,param_1,uVar9);
            (**(code **)(*(long *)param_1 + 0x30))(fVar15 + param_3,fVar16,fVar17,param_1,uVar9);
          }
          uVar13 = uVar13 + 1;
        } while (bVar1 != uVar13);
      }
      lVar10 = lVar10 + (ulong)bVar1;
      local_b0 = local_b0 + 1;
    } while (local_b0 != bVar2);
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  FUN_011842e8(CONCAT44(in_register_00005004,param_3),CONCAT44(in_register_00005024,param_4),param_1
               ,param_2);
  return;
}



/* duDebugDrawTileCacheLayerRegions(duDebugDraw*, dtTileCacheLayer const&, float, float) */

void duDebugDrawTileCacheLayerRegions
               (duDebugDraw *param_1,dtTileCacheLayer *param_2,float param_3,float param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  float fVar10;
  float fVar11;
  ulong local_b0;
  
  lVar7 = *(long *)param_2;
  bVar1 = *(byte *)(lVar7 + 0x30);
  bVar2 = *(byte *)(lVar7 + 0x31);
  uVar3 = duIntToCol(*(int *)(lVar7 + 0x10) + 1,0xff);
  lVar5 = *(long *)param_2;
  fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x34));
  fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x32));
  duDebugDrawBoxWire(param_1,*(float *)(lVar7 + 0x14) + fVar9 * param_3,*(float *)(lVar7 + 0x18),
                     *(float *)(lVar7 + 0x1c) + fVar10 * param_3,
                     *(float *)(lVar7 + 0x14) + (float)(*(byte *)(lVar5 + 0x33) + 1) * param_3,
                     *(float *)(lVar7 + 0x24),
                     *(float *)(lVar7 + 0x1c) + (float)(*(byte *)(lVar5 + 0x35) + 1) * param_3,
                     uVar3 & 0xffffff | 0x80000000,2.0);
  (**(code **)(*(long *)param_1 + 0x20))(0x3f800000,param_1,3);
  if ((ulong)bVar2 != 0) {
    lVar5 = 0;
    local_b0 = 0;
    do {
      if (bVar1 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (uint)*(byte *)(*(long *)(param_2 + 0x10) + lVar5 + uVar8);
          if (uVar6 != 0xff) {
            uVar4 = duIntToCol((uint)*(byte *)(*(long *)(param_2 + 0x28) + lVar5 + uVar8),0xff);
            fVar9 = (float)(int)uVar8 * param_3 + *(float *)(lVar7 + 0x14);
            fVar10 = (float)(uVar6 + 1) * param_4 + *(float *)(lVar7 + 0x18);
            uVar6 = ((uVar3 & 0xff) * 0x3f + (uVar4 & 0xff) * 0xc0 & 0xffff) / 0xff |
                    ((uVar3 >> 0x18) * 0x3f + (uVar4 >> 0x18) * 0xc0 & 0xffff) / 0xff << 0x18 |
                    ((uVar3 >> 8 & 0xff) * 0x3f + (uVar4 >> 8 & 0xff) * 0xc0 & 0xffff) / 0xff << 8 |
                    ((uVar3 >> 0x10 & 0xff) * 0x3f + (uVar4 >> 0x10 & 0xff) * 0xc0 & 0xffff) / 0xff
                    << 0x10;
            fVar11 = (float)(int)local_b0 * param_3 + *(float *)(lVar7 + 0x1c);
            (**(code **)(*(long *)param_1 + 0x30))(fVar9,fVar10,fVar11,param_1,uVar6);
            (**(code **)(*(long *)param_1 + 0x30))(fVar9,fVar10,fVar11 + param_3,param_1,uVar6);
            (**(code **)(*(long *)param_1 + 0x30))
                      (fVar9 + param_3,fVar10,fVar11 + param_3,param_1,uVar6);
            (**(code **)(*(long *)param_1 + 0x30))(fVar9 + param_3,fVar10,fVar11,param_1,uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (bVar1 != uVar8);
      }
      lVar5 = lVar5 + (ulong)bVar1;
      local_b0 = local_b0 + 1;
    } while (local_b0 != bVar2);
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  FUN_011842e8(CONCAT44(in_register_00005004,param_3),CONCAT44(in_register_00005024,param_4),param_1
               ,param_2);
  return;
}


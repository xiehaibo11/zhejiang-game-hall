
/* dtTileCache::buildNavMeshTile(unsigned int, dtNavMesh*) */

int __thiscall dtTileCache::buildNavMeshTile(dtTileCache *this,uint param_1,dtNavMesh *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  int local_18c;
  uchar *local_188;
  dtTileCacheLayer *local_180;
  dtTileCacheContourSet *local_178;
  dtTileCachePolyMesh *local_170;
  dtTileCacheAlloc *local_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  iVar3 = -0x7ffffff8;
  uVar4 = param_1 & (-1 << (ulong)(*(uint *)(this + 0x24) & 0x1f) ^ 0xffffffffU);
  if ((*(uint *)(this + 0x54) < uVar4) ||
     (lVar12 = *(long *)(this + 0x18),
     *(uint *)(lVar12 + (ulong)uVar4 * 0x38) !=
     (param_1 >> (ulong)(*(uint *)(this + 0x24) & 0x1f) &
     (-1 << (ulong)(*(uint *)(this + 0x20) & 0x1f) ^ 0xffffffffU)))) goto LAB_011962c0;
  uVar13 = (ulong)uVar4;
  (**(code **)(**(long **)(this + 0x60) + 0x10))();
  local_168 = *(dtTileCacheAlloc **)(this + 0x60);
  local_180 = (dtTileCacheLayer *)0x0;
  local_178 = (dtTileCacheContourSet *)0x0;
  lVar7 = lVar12 + uVar13 * 0x38;
  local_170 = (dtTileCachePolyMesh *)0x0;
  fVar14 = *(float *)(this + 0x4c);
  fVar15 = *(float *)(this + 0x38);
  iVar3 = dtDecompressTileCacheLayer
                    (local_168,*(dtTileCacheCompressor **)(this + 0x68),*(uchar **)(lVar7 + 0x20),
                     *(int *)(lVar7 + 0x28),&local_180);
  if (-1 < iVar3) {
    iVar3 = *(int *)(this + 0x58);
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)(this + 0x78);
        cVar1 = *(char *)(lVar8 + lVar7 * 0x68 + 0x56);
        if (((cVar1 != '\0') && (cVar1 != '\x03')) &&
           (uVar9 = (ulong)*(byte *)(lVar8 + lVar7 * 0x68 + 0x57), uVar9 != 0)) {
          puVar10 = (uint *)(lVar8 + lVar7 * 0x68 + 0x14);
          do {
            if (*puVar10 == param_1) {
              pfVar6 = (float *)(lVar8 + lVar7 * 0x68);
              dtMarkCylinderArea(local_180,(float *)(*(long *)(lVar12 + uVar13 * 0x38 + 8) + 0x14),
                                 *(float *)(this + 0x34),*(float *)(this + 0x38),pfVar6,pfVar6[3],
                                 pfVar6[4],'\0');
              iVar3 = *(int *)(this + 0x58);
              break;
            }
            uVar9 = uVar9 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar9 != 0);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar3);
    }
    iVar3 = dtBuildTileCacheRegions
                      (*(dtTileCacheAlloc **)(this + 0x60),local_180,(int)(fVar14 / fVar15));
    if (((-1 < iVar3) &&
        (local_178 = (dtTileCacheContourSet *)
                     dtAllocTileCacheContourSet(*(dtTileCacheAlloc **)(this + 0x60)),
        local_178 != (dtTileCacheContourSet *)0x0)) &&
       ((iVar3 = dtBuildTileCacheContours
                           (*(dtTileCacheAlloc **)(this + 0x60),local_180,(int)(fVar14 / fVar15),
                            *(float *)(this + 0x50),local_178), -1 < iVar3 &&
        ((local_170 = (dtTileCachePolyMesh *)
                      dtAllocTileCachePolyMesh(*(dtTileCacheAlloc **)(this + 0x60)),
         local_170 != (dtTileCachePolyMesh *)0x0 &&
         (iVar3 = dtBuildTileCachePolyMesh(*(dtTileCacheAlloc **)(this + 0x60),local_178,local_170),
         -1 < iVar3)))))) {
      if (*(int *)(local_170 + 8) == 0) {
LAB_0119628c:
        iVar3 = 0x40000000;
      }
      else {
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        local_160 = *(undefined8 *)(local_170 + 0x10);
        uStack_158 = (ulong)*(uint *)(local_170 + 4);
        local_140 = *(undefined8 *)(local_170 + 0x28);
        local_150 = *(undefined8 *)(local_170 + 0x18);
        uStack_148 = *(undefined8 *)(local_170 + 0x20);
        _uStack_138 = CONCAT44(6,*(undefined4 *)(local_170 + 8));
        uStack_ac = (undefined4)*(undefined8 *)(this + 0x44);
        uStack_a8 = (undefined4)((ulong)*(undefined8 *)(this + 0x44) >> 0x20);
        uStack_a4 = *(undefined4 *)(this + 0x4c);
        plVar11 = (long *)(lVar12 + uVar13 * 0x38 + 8);
        lVar12 = *plVar11;
        local_d0 = *(undefined8 *)(lVar12 + 8);
        local_a0 = *(undefined8 *)(this + 0x34);
        local_98 = 0;
        uStack_c8 = *(undefined8 *)(lVar12 + 0x10);
        local_c0 = *(undefined8 *)(lVar12 + 0x18);
        local_b8 = *(undefined8 *)(lVar12 + 0x20);
        local_b0 = *(undefined4 *)(lVar12 + 0x28);
        plVar5 = *(long **)(this + 0x70);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_160);
        }
        local_188 = (uchar *)0x0;
        local_18c = 0;
        uVar13 = dtCreateNavMeshData((dtNavMeshCreateParams *)&local_160,&local_188,&local_18c);
        if ((uVar13 & 1) == 0) {
          iVar3 = -0x80000000;
        }
        else {
          lVar12 = *plVar11;
          uVar4 = dtNavMesh::getTileRefAt
                            (param_2,*(int *)(lVar12 + 8),*(int *)(lVar12 + 0xc),
                             *(int *)(lVar12 + 0x10));
          dtNavMesh::removeTile(param_2,uVar4,(uchar **)0x0,(int *)0x0);
          if ((local_188 == (uchar *)0x0) ||
             (iVar3 = dtNavMesh::addTile(param_2,local_188,local_18c,1,0,(uint *)0x0), -1 < iVar3))
          goto LAB_0119628c;
          dtFree(local_188);
        }
      }
    }
  }
  dtFreeTileCacheLayer(local_168,local_180);
  local_180 = (dtTileCacheLayer *)0x0;
  dtFreeTileCacheContourSet(local_168,local_178);
  local_178 = (dtTileCacheContourSet *)0x0;
  dtFreeTileCachePolyMesh(local_168,local_170);
LAB_011962c0:
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


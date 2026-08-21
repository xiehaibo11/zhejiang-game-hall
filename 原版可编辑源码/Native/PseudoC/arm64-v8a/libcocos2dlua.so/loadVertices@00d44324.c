
/* cocos2d::Terrain::loadVertices() */

void __thiscall cocos2d::Terrain::loadVertices(Terrain *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(this + 0x805d4) = 0x47c34f80c7c34f80;
  iVar7 = *(int *)(this + 0x8052c);
  if (0 < iVar7) {
    iVar6 = *(int *)(this + 0x80528);
    iVar8 = 0;
    do {
      if (0 < iVar6) {
        iVar7 = 0;
        do {
          iVar4 = *(int *)(*(long *)(this + 0x80540) + 0x48);
          iVar2 = iVar4;
          if (iVar4 != 3) {
            iVar2 = 1;
          }
          iVar1 = 4;
          if (iVar4 != 1) {
            iVar1 = iVar2;
          }
          dVar9 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                                     (long)(iVar1 * (iVar7 + iVar8 * iVar6))));
          fVar11 = (float)((dVar9 / 255.0) * (double)*(float *)(this + 0x428) +
                          (double)*(float *)(this + 0x428) * -0.5);
          Vec3::Vec3((Vec3 *)&local_a8);
          fStack_9c = 0.0;
          local_98 = 0.0;
          Vec3::Vec3((Vec3 *)&uStack_94);
          iVar6 = *(int *)(this + 0x80528);
          iVar2 = *(int *)(this + 0x8052c);
          fVar10 = *(float *)(this + 0x42c);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          Vec3::Vec3((Vec3 *)&local_b8,fVar10 * (float)iVar7 - fVar10 * (float)(iVar6 >> 1),fVar11,
                     fVar10 * (float)iVar8 - fVar10 * (float)(iVar2 >> 1));
          local_a8 = local_b8;
          uStack_a0 = local_b0;
          fStack_9c = (float)iVar7 / (float)(long)*(int *)(this + 0x80528);
          local_98 = (float)iVar8 / (float)(long)*(int *)(this + 0x8052c);
          puVar3 = *(undefined8 **)(this + 0x80500);
          if (puVar3 == *(undefined8 **)(this + 0x80508)) {
            std::__ndk1::
            vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
            ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                      ((vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
                        *)(this + 0x804f8),(TerrainVertexData *)&local_a8);
          }
          else {
            puVar3[1] = CONCAT44(fStack_9c,local_b0);
            *puVar3 = local_b8;
            puVar3[3] = uStack_90;
            puVar3[2] = CONCAT44(uStack_94,local_98);
            *(undefined8 **)(this + 0x80500) = puVar3 + 4;
          }
          if (*(float *)(this + 0x805d4) < fVar11) {
            *(float *)(this + 0x805d4) = fVar11;
          }
          if (fVar11 < *(float *)(this + 0x805d8)) {
            *(float *)(this + 0x805d8) = fVar11;
          }
          iVar6 = *(int *)(this + 0x80528);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
        iVar7 = *(int *)(this + 0x8052c);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


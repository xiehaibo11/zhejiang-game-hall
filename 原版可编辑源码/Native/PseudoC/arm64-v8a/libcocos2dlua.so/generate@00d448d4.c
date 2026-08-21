
/* cocos2d::Terrain::Chunk::generate(int, int, int, int, unsigned char const*) */

void cocos2d::Terrain::Chunk::generate
               (int param_1,int param_2,int param_3,int param_4,uchar *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
  *this;
  void *pvVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  void *pvVar17;
  size_t sVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a0;
  
  iVar13 = (int)param_5;
                    /* try { // try from 00d448d4 to 00e448d7 has its CatchHandler @ 00d44900 */
  this = (vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
          *)(ulong)(uint)param_1;
                    /* try { // try from 00d448d8 to 00e4494b has its CatchHandler @ 00d44868 */
                    /* catch() { ... } // from try @ 00d448d4 with catch @ 00d44900 */
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00d448c0 with catch @ 00d44918 */
  lVar4 = *(long *)(this + 0xe8);
  *(int *)(this + 0xe0) = iVar13;
  *(int *)(this + 0xe4) = param_4;
                    /* catch() { ... } // from try @ 00d448b4 with catch @ 00d44928 */
  fVar26 = (float)param_4;
  fVar25 = (float)iVar13;
                    /* catch() { ... } // from try @ 00d4489c with catch @ 00d44938 */
  if (*(int *)(lVar4 + 0x805dc) == 1) {
    fVar21 = *(float *)(this + 0xf4);
    iVar12 = (int)(fVar21 * fVar26);
    if ((iVar12 < param_3) && ((float)iVar12 <= fVar21 * (float)(param_4 + 1))) {
      fVar26 = *(float *)(this + 0xf0);
      lVar4 = (long)iVar12;
      lVar16 = (long)iVar12 * (long)param_2;
      do {
        iVar12 = (int)(fVar26 * fVar25);
        if ((iVar12 < param_2) && ((float)iVar12 <= fVar26 * (float)(iVar13 + 1))) {
          lVar5 = (long)iVar12;
          lVar19 = (lVar16 + lVar5) * 0x20;
          do {
            lVar5 = lVar5 + 1;
            puVar7 = (undefined8 *)(*(long *)(*(long *)(this + 0xe8) + 0x804f8) + lVar19);
            uStack_c8 = puVar7[1];
            local_d0 = *puVar7;
            local_b8 = puVar7[3];
            uStack_c0 = puVar7[2];
            puVar7 = *(undefined8 **)(this + 8);
            if (puVar7 == *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 00d44b5c to 00e44bc7 has its CatchHandler @ 00d44a28 */
              std::__ndk1::
              vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
              ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                        (this,(TerrainVertexData *)&local_d0);
            }
            else {
              puVar7[1] = uStack_c8;
              *puVar7 = local_d0;
              puVar7[3] = local_b8;
              puVar7[2] = uStack_c0;
                    /* try { // try from 00d44b4c to 00e44b5b has its CatchHandler @ 00d44bb4 */
              *(undefined8 **)(this + 8) = puVar7 + 4;
            }
            fVar26 = *(float *)(this + 0xf0);
          } while ((lVar5 < param_2) &&
                  (lVar19 = lVar19 + 0x20, (float)(int)lVar5 <= fVar26 * (float)(iVar13 + 1)));
          fVar21 = *(float *)(this + 0xf4);
        }
        lVar4 = lVar4 + 1;
      } while ((lVar4 < param_3) &&
              (lVar16 = lVar16 + param_2, (float)(int)lVar4 <= fVar21 * (float)(param_4 + 1)));
    }
  }
  else if (*(int *)(lVar4 + 0x805dc) == 0) {
    fVar21 = *(float *)(this + 0xf4);
    fVar27 = (float)(param_4 + 1);
    iVar12 = (int)(fVar21 * fVar26);
    fVar22 = (float)iVar12;
    fVar23 = fVar21 * fVar27;
    if ((iVar12 < param_3) && (fVar22 <= fVar23)) {
      fVar22 = *(float *)(this + 0xf0);
      lVar4 = (long)iVar12;
      lVar16 = (long)iVar12 * (long)param_2;
      do {
        iVar12 = (int)(fVar22 * fVar25);
        if ((iVar12 < param_2) && ((float)iVar12 <= fVar22 * (float)(iVar13 + 1))) {
          lVar5 = (long)iVar12;
          lVar19 = (lVar16 + lVar5) * 0x20;
          do {
            lVar5 = lVar5 + 1;
            puVar7 = (undefined8 *)(*(long *)(*(long *)(this + 0xe8) + 0x804f8) + lVar19);
            uStack_c8 = puVar7[1];
            local_d0 = *puVar7;
            local_b8 = puVar7[3];
            uStack_c0 = puVar7[2];
            puVar7 = *(undefined8 **)(this + 8);
            if (puVar7 == *(undefined8 **)(this + 0x10)) {
              std::__ndk1::
              vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
              ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                        (this,(TerrainVertexData *)&local_d0);
            }
            else {
              puVar7[1] = uStack_c8;
              *puVar7 = local_d0;
              puVar7[3] = local_b8;
              puVar7[2] = uStack_c0;
              *(undefined8 **)(this + 8) = puVar7 + 4;
            }
            fVar22 = *(float *)(this + 0xf0);
          } while ((lVar5 < param_2) &&
                  (lVar19 = lVar19 + 0x20, (float)(int)lVar5 <= fVar22 * (float)(iVar13 + 1)));
                    /* try { // try from 00d44a28 to 00e44b4b has its CatchHandler @ 00d44a28
                       catch() { ... } // from try @ 00d44a28 with catch @ 00d44a28
                       catch() { ... } // from try @ 00d44b5c with catch @ 00d44a28 */
          fVar21 = *(float *)(this + 0xf4);
        }
        lVar4 = lVar4 + 1;
        fVar23 = fVar21 * fVar27;
      } while ((lVar4 < param_3) && (lVar16 = lVar16 + param_2, (float)(int)lVar4 <= fVar23));
      lVar4 = *(long *)(this + 0xe8);
      iVar12 = (int)(fVar21 * fVar26);
      fVar22 = (float)iVar12;
    }
    puVar7 = *(undefined8 **)(this + 8);
    fVar28 = *(float *)(lVar4 + 0x805e0) * *(float *)(lVar4 + 0x42c) * 8.0;
    uVar10 = (undefined4)((ulong)((long)puVar7 - *(long *)this) >> 5);
    *(undefined4 *)(lVar4 + 0x805e4) = uVar10;
    if (fVar22 <= fVar23) {
      iVar15 = iVar12 * param_2;
      fVar22 = (float)(iVar13 + 1);
                    /* catch() { ... } // from try @ 00d44b4c with catch @ 00d44bb4 */
      while( true ) {
        iVar12 = iVar12 + 1;
                    /* try { // try from 00d44bc8 to 00e44bff has its CatchHandler @ 00d44bc8
                       catch() { ... } // from try @ 00d44bc8 with catch @ 00d44bc8
                       catch() { ... } // from try @ 00d44c0c with catch @ 00d44bc8 */
        puVar14 = (undefined8 *)
                  (*(long *)(lVar4 + 0x804f8) +
                  (long)(*(float *)(this + 0xf0) * fVar22 + (float)iVar15) * 0x20);
        uStack_c8 = puVar14[1];
        local_b8 = puVar14[3];
        uStack_c0 = puVar14[2];
        local_d0._4_4_ = (float)((ulong)*puVar14 >> 0x20);
        local_d0._0_4_ = (undefined4)*puVar14;
        local_d0 = CONCAT44(local_d0._4_4_ - fVar28,(undefined4)local_d0);
        if (puVar7 == *(undefined8 **)(this + 0x10)) {
          std::__ndk1::
          vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
          ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                    (this,(TerrainVertexData *)&local_d0);
        }
        else {
                    /* try { // try from 00d44c00 to 00e44c0b has its CatchHandler @ 00d44c60 */
          puVar7[1] = uStack_c8;
          *puVar7 = local_d0;
          puVar7[3] = local_b8;
          puVar7[2] = uStack_c0;
                    /* try { // try from 00d44c0c to 00e44c73 has its CatchHandler @ 00d44bc8 */
          *(undefined8 **)(this + 8) = puVar7 + 4;
        }
        fVar21 = *(float *)(this + 0xf4);
        if (fVar21 * fVar27 < (float)iVar12) break;
        lVar4 = *(long *)(this + 0xe8);
        puVar7 = *(undefined8 **)(this + 8);
        iVar15 = iVar15 + param_2;
      }
      puVar7 = *(undefined8 **)(this + 8);
      lVar4 = *(long *)(this + 0xe8);
      uVar10 = (undefined4)((ulong)((long)puVar7 - *(long *)this) >> 5);
    }
    else {
      fVar22 = (float)(iVar13 + 1);
    }
                    /* catch() { ... } // from try @ 00d44c00 with catch @ 00d44c60 */
    *(undefined4 *)(lVar4 + 0x805e8) = uVar10;
    fVar23 = *(float *)(this + 0xf0);
    iVar13 = (int)(fVar23 * fVar25);
    fVar24 = (float)iVar13;
    if (fVar24 <= fVar23 * fVar22) {
      while( true ) {
        iVar13 = iVar13 + 1;
        puVar14 = (undefined8 *)
                  (*(long *)(lVar4 + 0x804f8) +
                  (long)(fVar24 + fVar21 * fVar27 * (float)param_2) * 0x20);
        uStack_c8 = puVar14[1];
        local_b8 = puVar14[3];
        uStack_c0 = puVar14[2];
        local_d0._4_4_ = (float)((ulong)*puVar14 >> 0x20);
        local_d0._0_4_ = (undefined4)*puVar14;
        local_d0 = CONCAT44(local_d0._4_4_ - fVar28,(undefined4)local_d0);
        if (puVar7 == *(undefined8 **)(this + 0x10)) {
          std::__ndk1::
          vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
          ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                    (this,(TerrainVertexData *)&local_d0);
        }
        else {
          puVar7[1] = uStack_c8;
          *puVar7 = local_d0;
          puVar7[3] = local_b8;
          puVar7[2] = uStack_c0;
          *(undefined8 **)(this + 8) = puVar7 + 4;
        }
        fVar23 = *(float *)(this + 0xf0);
        fVar24 = (float)iVar13;
        if (fVar23 * fVar22 < fVar24) break;
        lVar4 = *(long *)(this + 0xe8);
        fVar21 = *(float *)(this + 0xf4);
        puVar7 = *(undefined8 **)(this + 8);
      }
      puVar7 = *(undefined8 **)(this + 8);
      lVar4 = *(long *)(this + 0xe8);
      fVar21 = *(float *)(this + 0xf4);
      uVar10 = (undefined4)((ulong)((long)puVar7 - *(long *)this) >> 5);
    }
    iVar13 = (int)(fVar21 * fVar26);
    *(undefined4 *)(lVar4 + 0x805ec) = uVar10;
    if ((float)iVar13 <= fVar21 * fVar27) {
      iVar12 = iVar13 * param_2;
      while( true ) {
        iVar13 = iVar13 + 1;
        puVar14 = (undefined8 *)
                  (*(long *)(lVar4 + 0x804f8) + (long)(fVar23 * fVar25 + (float)iVar12) * 0x20);
        uStack_c8 = puVar14[1];
        local_b8 = puVar14[3];
        uStack_c0 = puVar14[2];
        local_d0._4_4_ = (float)((ulong)*puVar14 >> 0x20);
        local_d0._0_4_ = (undefined4)*puVar14;
        local_d0 = CONCAT44(local_d0._4_4_ - fVar28,(undefined4)local_d0);
        if (puVar7 == *(undefined8 **)(this + 0x10)) {
          std::__ndk1::
          vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
          ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                    (this,(TerrainVertexData *)&local_d0);
        }
        else {
          puVar7[1] = uStack_c8;
          *puVar7 = local_d0;
          puVar7[3] = local_b8;
          puVar7[2] = uStack_c0;
          *(undefined8 **)(this + 8) = puVar7 + 4;
        }
        fVar21 = *(float *)(this + 0xf4);
        if (fVar21 * fVar27 < (float)iVar13) break;
        lVar4 = *(long *)(this + 0xe8);
        fVar23 = *(float *)(this + 0xf0);
        puVar7 = *(undefined8 **)(this + 8);
        iVar12 = iVar12 + param_2;
      }
      puVar7 = *(undefined8 **)(this + 8);
      lVar4 = *(long *)(this + 0xe8);
      fVar23 = *(float *)(this + 0xf0);
      uVar10 = (undefined4)((ulong)((long)puVar7 - *(long *)this) >> 5);
    }
    iVar13 = (int)(fVar23 * fVar25);
    fVar25 = (float)iVar13;
    *(undefined4 *)(lVar4 + 0x805f0) = uVar10;
    if (fVar25 <= fVar23 * fVar22) {
      while( true ) {
        iVar13 = iVar13 + 1;
        puVar14 = (undefined8 *)
                  (*(long *)(lVar4 + 0x804f8) +
                  (long)(fVar25 + fVar21 * fVar26 * (float)param_2) * 0x20);
        uStack_c8 = puVar14[1];
        local_b8 = puVar14[3];
        uStack_c0 = puVar14[2];
        local_d0._4_4_ = (float)((ulong)*puVar14 >> 0x20);
                    /* try { // try from 00d44e44 to 00e44e8f has its CatchHandler @ 00d44e44
                       catch() { ... } // from try @ 00d44e44 with catch @ 00d44e44
                       catch() { ... } // from try @ 00d44e9c with catch @ 00d44e44 */
        local_d0._0_4_ = (undefined4)*puVar14;
        local_d0 = CONCAT44(local_d0._4_4_ - fVar28,(undefined4)local_d0);
        if (puVar7 == *(undefined8 **)(this + 0x10)) {
          std::__ndk1::
          vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
          ::__push_back_slow_path<cocos2d::Terrain::TerrainVertexData_const&>
                    (this,(TerrainVertexData *)&local_d0);
        }
        else {
          puVar7[1] = uStack_c8;
          *puVar7 = local_d0;
          puVar7[3] = local_b8;
          puVar7[2] = uStack_c0;
          *(undefined8 **)(this + 8) = puVar7 + 4;
        }
        fVar25 = (float)iVar13;
        if (*(float *)(this + 0xf0) * fVar22 < fVar25) break;
        lVar4 = *(long *)(this + 0xe8);
                    /* try { // try from 00d44e90 to 00e44e9b has its CatchHandler @ 00d44ecc */
        fVar21 = *(float *)(this + 0xf4);
        puVar7 = *(undefined8 **)(this + 8);
                    /* try { // try from 00d44e9c to 00e44edf has its CatchHandler @ 00d44e44 */
      }
    }
  }
  fVar25 = *(float *)(this + 0xf4);
  if (0.0 < fVar25) {
    fVar26 = *(float *)(this + 0xf0);
    iVar13 = 0;
    fVar21 = 0.0;
                    /* catch() { ... } // from try @ 00d44e90 with catch @ 00d44ecc */
                    /* try { // try from 00d44ee0 to 00e44f1b has its CatchHandler @ 00d44ee0
                       catch() { ... } // from try @ 00d44ee0 with catch @ 00d44ee0
                       catch() { ... } // from try @ 00d44f60 with catch @ 00d44ee0 */
    do {
      if (0.0 < fVar26) {
        fVar25 = 0.0;
        iVar12 = 1;
        do {
                    /* try { // try from 00d44f50 to 00e44f5f has its CatchHandler @ 00d44f98 */
          uVar6 = (uint)(fVar25 + fVar21 * (fVar26 + 1.0));
                    /* try { // try from 00d44f60 to 00e44fbf has its CatchHandler @ 00d44ee0 */
          uVar11 = -(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5;
          lVar4 = uVar11 + 0x20;
          puVar7 = (undefined8 *)(*(long *)this + uVar11);
          puVar14 = (undefined8 *)(*(long *)this + lVar4);
          Vec3::Vec3((Vec3 *)&local_d0);
          Vec3::Vec3((Vec3 *)((long)&uStack_c8 + 4));
                    /* catch() { ... } // from try @ 00d44f50 with catch @ 00d44f98 */
          Vec3::Vec3((Vec3 *)&local_b8);
          local_d0 = *puVar7;
                    /* catch() { ... } // from try @ 00d44f1c with catch @ 00d44fa8 */
          uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)(puVar7 + 1));
                    /* catch() { ... } // from try @ 00d44f3c with catch @ 00d44fac */
                    /* try { // try from 00d44fc0 to 00e45013 has its CatchHandler @ 00d44fc0
                       catch() { ... } // from try @ 00d44fc0 with catch @ 00d44fc0
                       catch() { ... } // from try @ 00d45054 with catch @ 00d44fc0 */
          local_b0 = *(undefined4 *)(puVar14 + 1);
          local_b8 = *puVar14;
          lVar16 = *(long *)this;
          fVar25 = *(float *)(this + 0xf0) + 1.0 + (float)(int)uVar6;
          puVar7 = (undefined8 *)(lVar16 + lVar4);
          puVar14 = (undefined8 *)(lVar16 + (long)fVar25 * 0x20);
          puVar1 = (undefined8 *)(lVar16 + (long)(fVar25 + 1.0) * 0x20);
          Vec3::Vec3((Vec3 *)&local_f8);
          Vec3::Vec3((Vec3 *)&uStack_ec);
          Vec3::Vec3((Vec3 *)&uStack_e0);
          uStack_f0 = *(undefined4 *)(puVar7 + 1);
          local_f8 = *puVar7;
                    /* try { // try from 00d45014 to 00e45053 has its CatchHandler @ 00d4508c */
          uStack_e4 = *(undefined4 *)(puVar14 + 1);
          uVar8 = *puVar14;
          uStack_ec = (undefined4)uVar8;
          uStack_e8 = (undefined4)((ulong)uVar8 >> 0x20);
          local_d8 = *(undefined4 *)(puVar1 + 1);
          uStack_e0 = *puVar1;
          puVar7 = *(undefined8 **)(this + 0x120);
          if (puVar7 == *(undefined8 **)(this + 0x128)) {
            pvVar17 = *(void **)(this + 0x118);
            sVar18 = (long)puVar7 - (long)pvVar17;
                    /* catch() { ... } // from try @ 00d45014 with catch @ 00d4508c */
            uVar11 = ((long)sVar18 >> 2) * -0x71c71c71c71c71c7 + 1;
            if (0x71c71c71c71c71c < uVar11) goto LAB_00d4529c;
            lVar4 = (long)*(undefined8 **)(this + 0x128) - (long)pvVar17 >> 2;
            uVar20 = 0x71c71c71c71c71c;
            if ((ulong)(lVar4 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
              uVar9 = lVar4 * 0x1c71c71c71c71c72;
              uVar20 = uVar11;
              if (uVar11 <= uVar9) {
                uVar20 = uVar9;
              }
              if (uVar20 != 0) goto LAB_00d450e8;
              pvVar3 = (void *)0x0;
            }
            else {
LAB_00d450e8:
              pvVar3 = operator_new(uVar20 * 0x24);
            }
            puVar7 = (undefined8 *)((long)pvVar3 + ((long)sVar18 >> 2) * 4);
            puVar14 = (undefined8 *)((long)puVar7 + 0x24);
            *(undefined4 *)(puVar7 + 4) = local_b0;
            puVar7[1] = uStack_c8;
            *puVar7 = local_d0;
            puVar7[3] = local_b8;
            puVar7[2] = uStack_c0;
            if (0 < (long)sVar18) {
              memcpy((void *)((long)puVar7 - sVar18),pvVar17,sVar18);
            }
            *(void **)(this + 0x118) = (void *)((long)puVar7 - sVar18);
            *(undefined8 **)(this + 0x120) = puVar14;
            *(void **)(this + 0x128) = (void *)((long)pvVar3 + uVar20 * 0x24);
            if (pvVar17 != (void *)0x0) {
              operator_delete(pvVar17);
              puVar14 = *(undefined8 **)(this + 0x120);
            }
          }
          else {
            puVar14 = (undefined8 *)((long)puVar7 + 0x24);
                    /* try { // try from 00d45054 to 00e4509f has its CatchHandler @ 00d44fc0 */
            *(undefined4 *)(puVar7 + 4) = local_b0;
            puVar7[1] = uStack_c8;
            *puVar7 = local_d0;
            puVar7[3] = local_b8;
            puVar7[2] = uStack_c0;
            *(undefined8 **)(this + 0x120) = puVar14;
          }
          if (puVar14 == *(undefined8 **)(this + 0x128)) {
            pvVar17 = *(void **)(this + 0x118);
            sVar18 = (long)puVar14 - (long)pvVar17;
            uVar11 = ((long)sVar18 >> 2) * -0x71c71c71c71c71c7 + 1;
            if (0x71c71c71c71c71c < uVar11) {
LAB_00d4529c:
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            lVar4 = (long)*(undefined8 **)(this + 0x128) - (long)pvVar17 >> 2;
            uVar20 = 0x71c71c71c71c71c;
            if ((ulong)(lVar4 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
              uVar9 = lVar4 * 0x1c71c71c71c71c72;
              uVar20 = uVar11;
              if (uVar11 <= uVar9) {
                uVar20 = uVar9;
              }
              if (uVar20 != 0) goto LAB_00d451d8;
              pvVar3 = (void *)0x0;
            }
            else {
LAB_00d451d8:
              pvVar3 = operator_new(uVar20 * 0x24);
            }
            puVar7 = (undefined8 *)((long)pvVar3 + ((long)sVar18 >> 2) * 4);
            *(undefined4 *)(puVar7 + 4) = local_d8;
            puVar7[1] = CONCAT44(uStack_ec,uStack_f0);
            *puVar7 = local_f8;
            puVar7[3] = uStack_e0;
            puVar7[2] = CONCAT44(uStack_e4,uStack_e8);
            if (0 < (long)sVar18) {
              memcpy((void *)((long)puVar7 - sVar18),pvVar17,sVar18);
            }
            *(void **)(this + 0x118) = (void *)((long)puVar7 - sVar18);
            *(long *)(this + 0x120) = (long)puVar7 + 0x24;
            *(void **)(this + 0x128) = (void *)((long)pvVar3 + uVar20 * 0x24);
            if (pvVar17 != (void *)0x0) {
              operator_delete(pvVar17);
            }
          }
          else {
                    /* try { // try from 00d44f1c to 00e44f27 has its CatchHandler @ 00d44fa8 */
            *(undefined4 *)(puVar14 + 4) = local_d8;
            puVar14[1] = CONCAT44(uStack_ec,uStack_f0);
            *puVar14 = local_f8;
            puVar14[3] = uStack_e0;
            puVar14[2] = CONCAT44(uStack_e4,uStack_e8);
            *(long *)(this + 0x120) = (long)puVar14 + 0x24;
          }
          fVar26 = *(float *)(this + 0xf0);
                    /* try { // try from 00d44f3c to 00e44f4f has its CatchHandler @ 00d44fac */
          fVar25 = (float)iVar12;
          iVar12 = iVar12 + 1;
        } while (fVar25 < fVar26);
        fVar25 = *(float *)(this + 0xf4);
      }
      iVar13 = iVar13 + 1;
      fVar21 = (float)iVar13;
    } while (fVar21 < fVar25);
  }
  calculateAABB((Chunk *)this);
  finish((Chunk *)this);
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d45280 to 00e452bf has its CatchHandler @ 00d45280
                       catch() { ... } // from try @ 00d45280 with catch @ 00d45280
                       catch() { ... } // from try @ 00d452c8 with catch @ 00d45280 */
  return;
}


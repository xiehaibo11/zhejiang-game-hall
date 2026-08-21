
/* spine::SkeletonRenderer::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
spine::SkeletonRenderer::draw(SkeletonRenderer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  SkeletonRenderer SVar3;
  undefined1 uVar4;
  undefined1 uVar8;
  long lVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  SkeletonBatch *this_00;
  SkeletonTwoColorBatch *this_01;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  undefined1 *puVar22;
  Node *this_02;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  float *pfVar26;
  undefined4 *puVar27;
  long lVar28;
  undefined4 *puVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  SkeletonTwoColorBatch *pSVar44;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  void *local_d8;
  uint local_d0;
  uint local_cc;
  void *local_c8;
  void *local_c0;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  long local_80;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar9;
  undefined1 uVar10;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  this_00 = (SkeletonBatch *)SkeletonBatch::getInstance();
  this_01 = (SkeletonTwoColorBatch *)SkeletonTwoColorBatch::getInstance();
                    /* try { // try from 00d51868 to 00e51897 has its CatchHandler @ 00d51d4c */
  lVar15 = cocos2d::Node::getGLProgramState((Node *)this);
  lVar16 = SkeletonTwoColorBatch::getInstance();
  puVar17 = *(undefined8 **)(this + 0x3a0);
  lVar16 = *(long *)(lVar16 + 0x58);
  if (puVar17 != (undefined8 *)0x0) {
    (*(code *)*puVar17)(puVar17,*(undefined8 *)(this + 0x388));
  }
  cocos2d::Color4F::Color4F((Color4F *)&local_90);
  pbVar18 = (byte *)(**(code **)(*(long *)this + 0x4b8))(this);
  local_90 = (float)NEON_ucvtf((uint)*pbVar18);
  local_90 = local_90 / 255.0;
  lVar19 = (**(code **)(*(long *)this + 0x4b8))(this);
  fStack_8c = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 1));
  fStack_8c = fStack_8c / 255.0;
  lVar19 = (**(code **)(*(long *)this + 0x4b8))(this);
                    /* try { // try from 00d518f4 to 00e518ff has its CatchHandler @ 00d51d3c */
  local_88 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 2));
  local_88 = local_88 / 255.0;
                    /* try { // try from 00d51904 to 00e51913 has its CatchHandler @ 00d51d38 */
  bVar12 = (**(code **)(*(long *)this + 0x488))(this);
  local_84 = (float)bVar12 / 255.0;
  cocos2d::Color4F::Color4F((Color4F *)&local_a0);
  cocos2d::Color4F::Color4F((Color4F *)&local_b0);
  lVar19 = *(long *)(this + 0x388);
  uVar2 = *(uint *)(lVar19 + 0x20);
  if (0 < (int)uVar2) {
    uVar33 = 0;
                    /* try { // try from 00d51950 to 00e51957 has its CatchHandler @ 00d51d00 */
                    /* try { // try from 00d51958 to 00e51987 has its CatchHandler @ 00d51d34 */
    local_108 = 0;
    do {
      plVar35 = *(long **)(*(long *)(lVar19 + 0x30) + uVar33 * 8);
      lVar19 = plVar35[5];
      if (lVar19 == 0) {
LAB_00d5240c:
        spSkeletonClipping_clipEnd(*(undefined8 *)(this + 0x398),plVar35);
      }
      else {
        iVar13 = *(int *)(lVar19 + 8);
        if (iVar13 == 6) {
          spSkeletonClipping_clipStart(*(undefined8 *)(this + 0x398),plVar35,lVar19);
          goto LAB_00d5240c;
        }
        if (iVar13 == 2) {
          lVar20 = (**(code **)(*(long *)this + 0x558))(this,lVar19);
                    /* try { // try from 00d51a1c to 00e51c7b has its CatchHandler @ 00d51d48 */
          lVar25 = *(long *)(lVar20 + 0x10);
          if (lVar15 == lVar16) {
            local_cc = *(uint *)(lVar25 + 0x14);
            local_d8 = *(void **)(lVar25 + 8);
            pvVar21 = (void *)SkeletonTwoColorBatch::allocateVertices
                                        (this_01,*(uint *)(lVar25 + 0x10));
            local_d0 = *(uint *)(*(long **)(lVar20 + 0x10) + 2);
            if ((0 < (int)local_d0) &&
               (*(undefined8 *)((long)pvVar21 + 0x14) =
                     *(undefined8 *)(**(long **)(lVar20 + 0x10) + 0x10), 1 < (int)local_d0)) {
              lVar28 = 0x28;
              lVar32 = 0x30;
              lVar25 = 1;
              do {
                lVar25 = lVar25 + 1;
                puVar17 = (undefined8 *)(**(long **)(lVar20 + 0x10) + lVar28);
                lVar28 = lVar28 + 0x18;
                *(undefined8 *)((long)pvVar21 + lVar32) = *puVar17;
                lVar32 = lVar32 + 0x1c;
              } while (lVar25 < (int)local_d0);
            }
            uVar31 = (ulong)((long)(int)local_d0 * 0x1c) >> 2;
            uVar23 = 7;
            local_e0 = pvVar21;
          }
          else {
            local_b4 = *(uint *)(lVar25 + 0x14);
            local_c0 = *(void **)(lVar25 + 8);
            local_c8 = (void *)SkeletonBatch::allocateVertices(this_00,*(uint *)(lVar25 + 0x10));
            puVar17 = *(undefined8 **)(lVar20 + 0x10);
            local_b8 = *(uint *)(puVar17 + 2);
            memcpy(local_c8,(void *)*puVar17,(long)*(int *)(puVar17 + 2) * 0x18);
            uVar23 = 6;
            uVar31 = ((long)(int)local_b8 * 3 & 0x1fffffffffffffffU) << 1;
            pvVar21 = local_c8;
          }
          spVertexAttachment_computeWorldVertices(lVar19,plVar35,0,uVar31,pvVar21,0,uVar23);
          local_a0 = *(undefined8 *)(lVar19 + 0xa8);
          pfVar26 = (float *)(lVar19 + 0xb4);
          fStack_98 = *(float *)(lVar19 + 0xb0);
        }
        else {
          if (iVar13 != 0) goto LAB_00d5240c;
                    /* try { // try from 00d5199c to 00e519a3 has its CatchHandler @ 00d51cfc */
          lVar20 = (**(code **)(*(long *)this + 0x550))(this,lVar19);
                    /* try { // try from 00d519a4 to 00e519d3 has its CatchHandler @ 00d51d30 */
          lVar25 = *(long *)(lVar20 + 0x10);
          if (lVar15 == lVar16) {
            local_cc = *(uint *)(lVar25 + 0x14);
            local_d8 = *(void **)(lVar25 + 8);
            pvVar21 = (void *)SkeletonTwoColorBatch::allocateVertices
                                        (this_01,*(uint *)(lVar25 + 0x10));
            local_d0 = *(uint *)(*(long **)(lVar20 + 0x10) + 2);
            if ((0 < (int)local_d0) &&
               (*(undefined8 *)((long)pvVar21 + 0x14) =
                     *(undefined8 *)(**(long **)(lVar20 + 0x10) + 0x10), 1 < (int)local_d0)) {
              lVar28 = 0x28;
              lVar32 = 0x30;
              lVar25 = 1;
              do {
                lVar25 = lVar25 + 1;
                puVar17 = (undefined8 *)(**(long **)(lVar20 + 0x10) + lVar28);
                lVar28 = lVar28 + 0x18;
                *(undefined8 *)((long)pvVar21 + lVar32) = *puVar17;
                lVar32 = lVar32 + 0x1c;
              } while (lVar25 < (int)local_d0);
            }
            lVar25 = plVar35[1];
            uVar23 = 7;
            local_e0 = pvVar21;
          }
          else {
            local_b4 = *(uint *)(lVar25 + 0x14);
            local_c0 = *(void **)(lVar25 + 8);
            local_c8 = (void *)SkeletonBatch::allocateVertices(this_00,*(uint *)(lVar25 + 0x10));
                    /* try { // try from 00d519d8 to 00e519df has its CatchHandler @ 00d51d24 */
            puVar17 = *(undefined8 **)(lVar20 + 0x10);
            local_b8 = *(uint *)(puVar17 + 2);
                    /* try { // try from 00d519e8 to 00e519ef has its CatchHandler @ 00d51cf8 */
                    /* try { // try from 00d519f4 to 00e519ff has its CatchHandler @ 00d51cf4 */
            memcpy(local_c8,(void *)*puVar17,(long)*(int *)(puVar17 + 2) * 0x18);
            lVar25 = plVar35[1];
            uVar23 = 6;
            pvVar21 = local_c8;
          }
          spRegionAttachment_computeWorldVertices(lVar19,lVar25,pvVar21,0,uVar23);
          local_a0 = *(undefined8 *)(lVar19 + 0x44);
          pfVar26 = (float *)(lVar19 + 0x50);
          fStack_98 = *(float *)(lVar19 + 0x4c);
        }
        puVar17 = (undefined8 *)plVar35[4];
        if (puVar17 == (undefined8 *)0x0) {
          fStack_a8 = 0.0;
          local_b0 = 0;
        }
        else {
          local_b0 = CONCAT44((float)((ulong)*puVar17 >> 0x20) * 255.0,(float)*puVar17 * 255.0);
          fStack_a8 = *(float *)(puVar17 + 1) * 255.0;
        }
        lVar19 = *(long *)(this + 0x388);
        fStack_94 = local_84 * *(float *)(lVar19 + 0x7c) * *(float *)((long)plVar35 + 0x1c) * 255.0
                    * *pfVar26;
        if (fStack_94 == 0.0) goto LAB_00d5240c;
        SVar3 = this[0x380];
        fVar36 = 255.0;
        if (SVar3 != (SkeletonRenderer)0x0) {
          fVar36 = fStack_94;
        }
        local_a0 = CONCAT44(fStack_8c * (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20) *
                            (float)((ulong)plVar35[2] >> 0x20) * fVar36 *
                            (float)((ulong)local_a0 >> 0x20),
                            local_90 * (float)*(undefined8 *)(lVar19 + 0x70) * (float)plVar35[2] *
                            fVar36 * (float)local_a0);
                    /* try { // try from 00d51cb4 to 00e51cbb has its CatchHandler @ 00d51cf0 */
                    /* try { // try from 00d51cbc to 00e51d67 has its CatchHandler @ 00d516a0 */
        fStack_98 = fVar36 * local_88 * *(float *)(lVar19 + 0x78) * *(float *)(plVar35 + 3) *
                    fStack_98;
        iVar13 = *(int *)(*plVar35 + 0x38);
        if (iVar13 == 3) {
          uVar31 = 0x30100000000;
          uVar34 = 1;
        }
        else if (iVar13 == 2) {
          uVar31 = 0x30300000000;
          uVar34 = 0x306;
        }
        else {
                    /* catch() { ... } // from try @ 00d51cb4 with catch @ 00d51cf0 */
                    /* catch() { ... } // from try @ 00d519f4 with catch @ 00d51cf4 */
          if (iVar13 == 1) {
                    /* catch() { ... } // from try @ 00d519e8 with catch @ 00d51cf8 */
            uVar24 = 0x302;
                    /* catch() { ... } // from try @ 00d5199c with catch @ 00d51cfc */
                    /* catch() { ... } // from try @ 00d51950 with catch @ 00d51d00 */
            if (SVar3 != (SkeletonRenderer)0x0) {
              uVar24 = 1;
            }
            uVar34 = (ulong)uVar24;
                    /* catch() { ... } // from try @ 00d517b4 with catch @ 00d51d04 */
            uVar31 = 0x100000000;
          }
          else {
                    /* catch() { ... } // from try @ 00d519d8 with catch @ 00d51d24 */
            uVar24 = 0x302;
                    /* catch() { ... } // from try @ 00d517c8 with catch @ 00d51d28 */
                    /* catch() { ... } // from try @ 00d517bc with catch @ 00d51d2c */
            if (SVar3 != (SkeletonRenderer)0x0) {
              uVar24 = 1;
            }
            uVar34 = (ulong)uVar24;
                    /* catch() { ... } // from try @ 00d519a4 with catch @ 00d51d30 */
            uVar31 = 0x30300000000;
          }
        }
                    /* catch() { ... } // from try @ 00d51958 with catch @ 00d51d34 */
                    /* catch() { ... } // from try @ 00d51904 with catch @ 00d51d38 */
        iVar13 = spSkeletonClipping_isClipping(*(undefined8 *)(this + 0x398));
                    /* catch() { ... } // from try @ 00d518f4 with catch @ 00d51d3c */
                    /* catch() { ... } // from try @ 00d51774 with catch @ 00d51d40 */
                    /* catch() { ... } // from try @ 00d51704 with catch @ 00d51d44 */
                    /* catch() { ... } // from try @ 00d51a1c with catch @ 00d51d48 */
        if (lVar15 == lVar16) {
          if (iVar13 == 0) {
                    /* WARNING: Load size is inaccurate */
            pSVar44._0_4_ = *(SkeletonTwoColorBatch **)(this + 0x170);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5229c with catch @ 00d52240
                       catch(type#1 @ 00000000) { ... } // from try @ 00d5262c with catch @ 00d52240
                        */
            uVar14 = cocos2d::Texture2D::getName(*(Texture2D **)(lVar20 + 8));
            local_108 = SkeletonTwoColorBatch::addCommand
                                  (pSVar44._0_4_,this_01,param_1,uVar14,
                                   *(undefined8 *)(this + 0x1d8),uVar31 | uVar34,&local_e0,param_2,
                                   param_3);
            lVar19 = *(long *)(this + 0x3a0);
            if (lVar19 == 0) {
              uVar24 = *(uint *)(local_108 + 0x80);
              uVar31 = (ulong)uVar24;
                    /* try { // try from 00d52544 to 00e52547 has its CatchHandler @ 00d52704 */
              if (0 < (int)uVar24) {
                lVar19 = *(long *)(local_108 + 0x70);
                uVar4 = (undefined1)(int)(float)local_a0;
                uVar5 = (undefined1)(int)local_a0._4_4_;
                uVar6 = (undefined1)(int)fStack_98;
                uVar7 = (undefined1)(int)fStack_94;
                uVar8 = (undefined1)(int)(float)local_b0;
                uVar9 = (undefined1)(int)local_b0._4_4_;
                uVar10 = (undefined1)(int)fStack_a8;
                if (uVar24 == 1) {
                  uVar30 = 0;
                }
                else {
                  uVar30 = uVar31 & 0xfffffffe;
                  puVar22 = (undefined1 *)(lVar19 + 0x2f);
                  uVar34 = uVar30;
                  do {
                    puVar22[-0x23] = uVar4;
                    puVar22[-7] = uVar4;
                    /* try { // try from 00d52628 to 00e5262b has its CatchHandler @ 00d52718 */
                    puVar22[-0x22] = uVar5;
                    /* try { // try from 00d5262c to 00e5274b has its CatchHandler @ 00d52240 */
                    puVar22[-6] = uVar5;
                    puVar22[-0x21] = uVar6;
                    puVar22[-5] = uVar6;
                    puVar22[-0x20] = uVar7;
                    puVar22[-4] = uVar7;
                    puVar22[-0x1f] = uVar8;
                    puVar22[-3] = uVar8;
                    puVar22[-0x1e] = uVar9;
                    puVar22[-2] = uVar9;
                    puVar22[-0x1d] = uVar10;
                    puVar22[-1] = uVar10;
                    puVar22[-0x1c] = 1;
                    *puVar22 = 1;
                    uVar34 = uVar34 - 2;
                    puVar22 = puVar22 + 0x38;
                  } while (uVar34 != 0);
                  if (uVar30 == uVar31) goto LAB_00d5240c;
                }
                lVar20 = uVar31 - uVar30;
                puVar22 = (undefined1 *)(lVar19 + uVar30 * 0x1c + 0x13);
                do {
                  puVar22[-7] = uVar4;
                  puVar22[-6] = uVar5;
                  puVar22[-5] = uVar6;
                  puVar22[-4] = uVar7;
                  puVar22[-3] = uVar8;
                  puVar22[-2] = uVar9;
                  puVar22[-1] = uVar10;
                  *puVar22 = 1;
                  lVar20 = lVar20 + -1;
                  puVar22 = puVar22 + 0x1c;
                } while (lVar20 != 0);
              }
            }
            else {
              uVar31 = (ulong)*(uint *)(local_108 + 0x80);
              if (0 < (int)*(uint *)(local_108 + 0x80)) {
                lVar20 = 0x18;
                    /* try { // try from 00d5229c to 00e52327 has its CatchHandler @ 00d52240 */
                fVar36 = (float)local_a0 / 255.0;
                fVar38 = local_a0._4_4_ / 255.0;
                fVar39 = fStack_98 / 255.0;
                fVar42 = fStack_94 / 255.0;
                fVar37 = (float)local_b0 / 255.0;
                fVar41 = local_b0._4_4_ / 255.0;
                fVar40 = fStack_a8 / 255.0;
                fVar43 = fStack_a4 / 255.0;
                while( true ) {
                    /* try { // try from 00d52294 to 00e5229b has its CatchHandler @ 00d526e0 */
                  uVar31 = uVar31 - 1;
                  lVar25 = *(long *)(local_108 + 0x70) + lVar20;
                  local_100 = CONCAT44(fVar41,fVar37);
                  uStack_f8 = CONCAT44(fVar43,fVar40);
                  local_f0 = CONCAT44(fVar38,fVar36);
                  uStack_e8 = CONCAT44(fVar42,fVar39);
                  (**(code **)(lVar19 + 8))
                            (lVar19,lVar25 + -0x18,lVar25 + -0x14,lVar25 + -4,lVar25,&local_f0,
                             &local_100);
                  *(char *)(lVar25 + -0xc) = (char)(int)((float)local_f0 * 255.0);
                  *(char *)(lVar25 + -0xb) = (char)(int)(local_f0._4_4_ * 255.0);
                  *(char *)(lVar25 + -10) = (char)(int)((float)uStack_e8 * 255.0);
                    /* try { // try from 00d52328 to 00e523ff has its CatchHandler @ 00d5272c */
                  *(char *)(lVar25 + -9) = (char)(int)(uStack_e8._4_4_ * 255.0);
                  *(char *)(lVar25 + -8) = (char)(int)((float)local_100 * 255.0);
                  *(char *)(lVar25 + -7) = (char)(int)(local_100._4_4_ * 255.0);
                  *(char *)(lVar25 + -6) = (char)(int)((float)uStack_f8 * 255.0);
                  *(undefined1 *)(lVar25 + -5) = 1;
                  if (uVar31 == 0) break;
                  lVar19 = *(long *)(this + 0x3a0);
                  lVar20 = lVar20 + 0x1c;
                }
              }
            }
          }
          else {
            spSkeletonClipping_clipTriangles
                      (*(undefined8 *)(this + 0x398),local_e0,
                       (ulong)((long)(int)local_d0 * 0x1c) >> 2,local_d8,local_cc,
                       (long)local_e0 + 0x14,7);
            SkeletonTwoColorBatch::deallocateVertices(this_01,local_d0);
            lVar19 = *(long *)(this + 0x398);
            if (**(int **)(lVar19 + 0x28) == 0) {
              spSkeletonClipping_clipEnd(lVar19,plVar35);
              goto LAB_00d52418;
            }
            local_d0 = **(int **)(lVar19 + 0x18) >> 1;
            local_e0 = (void *)SkeletonTwoColorBatch::allocateVertices(this_01,local_d0);
            local_cc = **(uint **)(*(long *)(this + 0x398) + 0x28);
            local_d8 = (void *)SkeletonTwoColorBatch::allocateIndices(this_01,local_cc);
            memcpy(local_d8,*(void **)(*(int **)(*(long *)(this + 0x398) + 0x28) + 2),
                   (long)**(int **)(*(long *)(this + 0x398) + 0x28) << 1);
                    /* WARNING: Load size is inaccurate */
            pSVar44._0_4_ = *(SkeletonTwoColorBatch **)(this + 0x170);
            uVar14 = cocos2d::Texture2D::getName(*(Texture2D **)(lVar20 + 8));
            local_108 = SkeletonTwoColorBatch::addCommand
                                  (pSVar44._0_4_,this_01,param_1,uVar14,
                                   *(undefined8 *)(this + 0x1d8),uVar31 | uVar34,&local_e0,param_2,
                                   param_3);
            lVar19 = *(long *)(this + 0x3a0);
            lVar25 = *(long *)(*(long *)(*(long *)(this + 0x398) + 0x18) + 8);
            lVar20 = *(long *)(*(long *)(*(long *)(this + 0x398) + 0x20) + 8);
            if (lVar19 == 0) {
              uVar31 = (ulong)*(uint *)(local_108 + 0x80);
                    /* try { // try from 00d52488 to 00e524af has its CatchHandler @ 00d52730 */
              if (0 < (int)*(uint *)(local_108 + 0x80)) {
                puVar22 = (undefined1 *)(*(long *)(local_108 + 0x70) + 0xc);
                puVar27 = (undefined4 *)(lVar20 + 4);
                puVar29 = (undefined4 *)(lVar25 + 4);
                do {
                  uVar31 = uVar31 - 1;
                  *(undefined4 *)(puVar22 + -0xc) = puVar29[-1];
                  *(undefined4 *)(puVar22 + -8) = *puVar29;
                  *(undefined4 *)(puVar22 + 8) = puVar27[-1];
                  uVar14 = *puVar27;
                  *puVar22 = (char)(int)(float)local_a0;
                  puVar22[1] = (char)(int)local_a0._4_4_;
                  puVar22[2] = (char)(int)fStack_98;
                  puVar22[3] = (char)(int)fStack_94;
                  puVar22[4] = (char)(int)(float)local_b0;
                  puVar22[5] = (char)(int)local_b0._4_4_;
                  puVar22[6] = (char)(int)fStack_a8;
                  puVar22[7] = 1;
                  *(undefined4 *)(puVar22 + 0xc) = uVar14;
                  puVar22 = puVar22 + 0x1c;
                  puVar27 = puVar27 + 2;
                  puVar29 = puVar29 + 2;
                } while (uVar31 != 0);
              }
            }
            else {
              uVar31 = (ulong)*(uint *)(local_108 + 0x80);
              if (0 < (int)*(uint *)(local_108 + 0x80)) {
                lVar28 = 0;
                puVar27 = (undefined4 *)(lVar25 + 4);
                fVar36 = (float)local_a0 / 255.0;
                fVar38 = local_a0._4_4_ / 255.0;
                fVar39 = fStack_98 / 255.0;
                fVar42 = fStack_94 / 255.0;
                fVar37 = (float)local_b0 / 255.0;
                fVar41 = local_b0._4_4_ / 255.0;
                fVar40 = fStack_a8 / 255.0;
                fVar43 = fStack_a4 / 255.0;
                puVar29 = (undefined4 *)(lVar20 + 4);
                while( true ) {
                  uVar31 = uVar31 - 1;
                  puVar1 = (undefined4 *)(*(long *)(local_108 + 0x70) + lVar28);
                  *puVar1 = puVar27[-1];
                  puVar1[1] = *puVar27;
                  puVar1[5] = puVar29[-1];
                  puVar1[6] = *puVar29;
                  local_100 = CONCAT44(fVar41,fVar37);
                  uStack_f8 = CONCAT44(fVar43,fVar40);
                  local_f0 = CONCAT44(fVar38,fVar36);
                  uStack_e8 = CONCAT44(fVar42,fVar39);
                  (**(code **)(lVar19 + 8))(lVar19,puVar1);
                  *(char *)(puVar1 + 3) = (char)(int)((float)local_f0 * 255.0);
                  *(char *)((long)puVar1 + 0xd) = (char)(int)(local_f0._4_4_ * 255.0);
                  *(char *)((long)puVar1 + 0xe) = (char)(int)((float)uStack_e8 * 255.0);
                  *(char *)((long)puVar1 + 0xf) = (char)(int)(uStack_e8._4_4_ * 255.0);
                  *(char *)(puVar1 + 4) = (char)(int)((float)local_100 * 255.0);
                  *(char *)((long)puVar1 + 0x11) = (char)(int)(local_100._4_4_ * 255.0);
                  *(undefined1 *)((long)puVar1 + 0x13) = 1;
                  *(char *)((long)puVar1 + 0x12) = (char)(int)((float)uStack_f8 * 255.0);
                  if (uVar31 == 0) break;
                  lVar19 = *(long *)(this + 0x3a0);
                  lVar28 = lVar28 + 0x1c;
                  puVar27 = puVar27 + 2;
                  puVar29 = puVar29 + 2;
                }
              }
            }
          }
          goto LAB_00d5240c;
        }
                    /* catch() { ... } // from try @ 00d51868 with catch @ 00d51d4c */
        if (iVar13 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* try { // try from 00d52150 to 00e52157 has its CatchHandler @ 00d52200 */
          lVar19 = SkeletonBatch::addCommand
                             (*(SkeletonBatch **)(this + 0x170),this_00,param_1,
                              *(undefined8 *)(lVar20 + 8),*(undefined8 *)(this + 0x1d8),
                              uVar31 | uVar34,&local_c8,param_2,param_3);
          lVar20 = *(long *)(this + 0x3a0);
                    /* try { // try from 00d5215c to 00e52167 has its CatchHandler @ 00d521fc */
          if (lVar20 == 0) {
            uVar24 = *(uint *)(lVar19 + 0x40);
            uVar31 = (ulong)uVar24;
                    /* try { // try from 00d52450 to 00e52457 has its CatchHandler @ 00d52700 */
            if (0 < (int)uVar24) {
                    /* try { // try from 00d5245c to 00e52467 has its CatchHandler @ 00d526fc */
              lVar19 = *(long *)(lVar19 + 0x30);
              uVar4 = (undefined1)(int)(float)local_a0;
              uVar5 = (undefined1)(int)local_a0._4_4_;
              uVar6 = (undefined1)(int)fStack_98;
              uVar7 = (undefined1)(int)fStack_94;
              if (uVar24 == 1) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar31 & 0xfffffffe;
                puVar22 = (undefined1 *)(lVar19 + 0x27);
                uVar34 = uVar30;
                do {
                  puVar22[-0x1b] = uVar4;
                  puVar22[-3] = uVar4;
                  puVar22[-0x1a] = uVar5;
                  puVar22[-2] = uVar5;
                  puVar22[-0x19] = uVar6;
                  puVar22[-1] = uVar6;
                  puVar22[-0x18] = uVar7;
                  *puVar22 = uVar7;
                  uVar34 = uVar34 - 2;
                  puVar22 = puVar22 + 0x30;
                } while (uVar34 != 0);
                if (uVar30 == uVar31) goto LAB_00d5240c;
              }
              lVar20 = uVar31 - uVar30;
              puVar22 = (undefined1 *)(lVar19 + uVar30 * 0x18 + 0xf);
              do {
                puVar22[-3] = uVar4;
                puVar22[-2] = uVar5;
                puVar22[-1] = uVar6;
                *puVar22 = uVar7;
                lVar20 = lVar20 + -1;
                puVar22 = puVar22 + 0x18;
              } while (lVar20 != 0);
            }
          }
          else {
            uVar31 = (ulong)*(uint *)(lVar19 + 0x40);
            if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                    /* try { // try from 00d52178 to 00e5219f has its CatchHandler @ 00d52220 */
              lVar25 = 0;
              fVar36 = (float)local_a0 / 255.0;
              fVar37 = local_a0._4_4_ / 255.0;
              fVar38 = fStack_98 / 255.0;
              fVar41 = fStack_94 / 255.0;
              while( true ) {
                uVar31 = uVar31 - 1;
                local_100 = 0;
                uStack_f8 = 0;
                    /* try { // try from 00d521a0 to 00e5223f has its CatchHandler @ 00d51d68 */
                lVar28 = *(long *)(lVar19 + 0x30) + lVar25;
                local_f0 = CONCAT44(fVar37,fVar36);
                uStack_e8 = CONCAT44(fVar41,fVar38);
                (**(code **)(lVar20 + 8))
                          (lVar20,lVar28,lVar28 + 4,lVar28 + 0x10,lVar28 + 0x14,&local_f0,&local_100
                          );
                *(char *)(lVar28 + 0xc) = (char)(int)((float)local_f0 * 255.0);
                *(char *)(lVar28 + 0xd) = (char)(int)(local_f0._4_4_ * 255.0);
                *(char *)(lVar28 + 0xe) = (char)(int)((float)uStack_e8 * 255.0);
                    /* catch() { ... } // from try @ 00d5215c with catch @ 00d521fc */
                    /* catch() { ... } // from try @ 00d52150 with catch @ 00d52200 */
                    /* catch() { ... } // from try @ 00d51db8 with catch @ 00d52204 */
                *(char *)(lVar28 + 0xf) = (char)(int)(uStack_e8._4_4_ * 255.0);
                if (uVar31 == 0) break;
                lVar20 = *(long *)(this + 0x3a0);
                lVar25 = lVar25 + 0x18;
              }
            }
          }
          goto LAB_00d5240c;
        }
                    /* catch() { ... } // from try @ 00d51dc0 with catch @ 00d51d68
                       catch() { ... } // from try @ 00d521a0 with catch @ 00d51d68 */
        spSkeletonClipping_clipTriangles
                  (*(undefined8 *)(this + 0x398),local_c8,
                   ((long)(int)local_b8 * 3 & 0x1fffffffffffffffU) << 1,local_c0,local_b4,
                   (long)local_c8 + 0x10,6);
        SkeletonBatch::deallocateVertices(this_00,local_b8);
        lVar19 = *(long *)(this + 0x398);
        if (**(int **)(lVar19 + 0x28) != 0) {
          local_b8 = **(int **)(lVar19 + 0x18) >> 1;
          local_c8 = (void *)SkeletonBatch::allocateVertices(this_00,local_b8);
                    /* try { // try from 00d51db8 to 00e51dbf has its CatchHandler @ 00d52204 */
          local_b4 = **(uint **)(*(long *)(this + 0x398) + 0x28);
                    /* try { // try from 00d51dc0 to 00e51e2f has its CatchHandler @ 00d51d68 */
          local_c0 = (void *)SkeletonBatch::allocateIndices(this_00,local_b4);
          memcpy(local_c0,*(void **)(*(int **)(*(long *)(this + 0x398) + 0x28) + 2),
                 (long)**(int **)(*(long *)(this + 0x398) + 0x28) << 1);
                    /* WARNING: Load size is inaccurate */
          lVar19 = SkeletonBatch::addCommand
                             (*(SkeletonBatch **)(this + 0x170),this_00,param_1,
                              *(undefined8 *)(lVar20 + 8),*(undefined8 *)(this + 0x1d8),
                              uVar31 | uVar34,&local_c8,param_2,param_3);
          lVar20 = *(long *)(this + 0x3a0);
          lVar25 = *(long *)(*(long *)(*(long *)(this + 0x398) + 0x18) + 8);
          lVar28 = *(long *)(*(long *)(*(long *)(this + 0x398) + 0x20) + 8);
          if (lVar20 == 0) {
            uVar31 = (ulong)*(uint *)(lVar19 + 0x40);
            if (0 < (int)*(uint *)(lVar19 + 0x40)) {
              puVar22 = (undefined1 *)(*(long *)(lVar19 + 0x30) + 0xc);
              puVar27 = (undefined4 *)(lVar25 + 4);
              puVar29 = (undefined4 *)(lVar28 + 4);
              do {
                uVar31 = uVar31 - 1;
                *(undefined4 *)(puVar22 + -0xc) = puVar27[-1];
                *(undefined4 *)(puVar22 + -8) = *puVar27;
                *(undefined4 *)(puVar22 + 4) = puVar29[-1];
                uVar14 = *puVar29;
                *puVar22 = (char)(int)(float)local_a0;
                puVar22[1] = (char)(int)local_a0._4_4_;
                puVar22[2] = (char)(int)fStack_98;
                puVar22[3] = (char)(int)fStack_94;
                *(undefined4 *)(puVar22 + 8) = uVar14;
                puVar22 = puVar22 + 0x18;
                puVar27 = puVar27 + 2;
                puVar29 = puVar29 + 2;
              } while (uVar31 != 0);
            }
          }
          else {
            uVar31 = (ulong)*(uint *)(lVar19 + 0x40);
                    /* try { // try from 00d51e30 to 00e5209b has its CatchHandler @ 00d52224 */
            if (0 < (int)*(uint *)(lVar19 + 0x40)) {
              lVar32 = 0;
              puVar27 = (undefined4 *)(lVar28 + 4);
              fVar36 = (float)local_a0 / 255.0;
              fVar37 = local_a0._4_4_ / 255.0;
              fVar38 = fStack_98 / 255.0;
              fVar41 = fStack_94 / 255.0;
              puVar29 = (undefined4 *)(lVar25 + 4);
              while( true ) {
                uVar31 = uVar31 - 1;
                local_100 = 0;
                uStack_f8 = 0;
                puVar1 = (undefined4 *)(*(long *)(lVar19 + 0x30) + lVar32);
                *puVar1 = puVar29[-1];
                puVar1[1] = *puVar29;
                puVar1[4] = puVar27[-1];
                puVar1[5] = *puVar27;
                local_f0 = CONCAT44(fVar37,fVar36);
                uStack_e8 = CONCAT44(fVar41,fVar38);
                (**(code **)(lVar20 + 8))(lVar20,puVar1);
                *(char *)(puVar1 + 3) = (char)(int)((float)local_f0 * 255.0);
                *(char *)((long)puVar1 + 0xd) = (char)(int)(local_f0._4_4_ * 255.0);
                *(char *)((long)puVar1 + 0xe) = (char)(int)((float)uStack_e8 * 255.0);
                *(char *)((long)puVar1 + 0xf) = (char)(int)(uStack_e8._4_4_ * 255.0);
                if (uVar31 == 0) break;
                lVar20 = *(long *)(this + 0x3a0);
                lVar32 = lVar32 + 0x18;
                puVar27 = puVar27 + 2;
                puVar29 = puVar29 + 2;
              }
            }
          }
          goto LAB_00d5240c;
        }
        spSkeletonClipping_clipEnd(lVar19,plVar35);
      }
LAB_00d52418:
      uVar33 = uVar33 + 1;
      if (uVar33 == uVar2) goto LAB_00d526c0;
      lVar19 = *(long *)(this + 0x388);
    } while( true );
  }
  local_108 = 0;
LAB_00d526c0:
  spSkeletonClipping_clipEnd2(*(undefined8 *)(this + 0x398));
  if (local_108 != 0) {
    plVar35 = (long *)(**(code **)(*(long *)this + 0x260))(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5252c with catch @ 00d526dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52294 with catch @ 00d526e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5245c with catch @ 00d526fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52450 with catch @ 00d52700
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52544 with catch @ 00d52704
                        */
    if (((plVar35 != (long *)0x0) && (lVar15 = (**(code **)(*plVar35 + 0x250))(), lVar15 < 0x65)) &&
       (lVar15 = (**(code **)(*(long *)this + 0x250))(this), lVar15 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52628 with catch @ 00d52718
                        */
      plVar35 = (long *)(**(code **)(*plVar35 + 0x240))(plVar35);
      lVar16 = *plVar35;
      lVar19 = plVar35[1] - lVar16 >> 3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52328 with catch @ 00d5272c
                        */
      lVar15 = 0;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d52488 with catch @ 00d52730
                        */
        lVar20 = lVar15;
        if (lVar19 <= lVar20) goto LAB_00d527d4;
        lVar15 = lVar20 + 1;
      } while ((lVar19 + -1 <= lVar20) ||
              (*(SkeletonRenderer **)(lVar16 + lVar20 * 8) != this
                    /* catch() { ... } // from try @ 00d527a8 with catch @ 00d5274c
                       catch() { ... } // from try @ 00d52cf4 with catch @ 00d5274c */));
      lVar15 = *(long *)(lVar16 + lVar15 * 8);
      if ((lVar15 != 0) &&
         (this_02 = (Node *)__dynamic_cast(lVar15,&cocos2d::Node::typeinfo,&typeinfo,0),
         this_02 != (Node *)0x0)) {
        lVar15 = cocos2d::Node::getGLProgramState(this_02);
        lVar16 = SkeletonTwoColorBatch::getInstance();
                    /* try { // try from 00d527a0 to 00e527a7 has its CatchHandler @ 00d52d48 */
        if ((lVar15 == *(long *)(lVar16 + 0x58)) &&
           (uVar33 = (**(code **)(*(long *)this_02 + 0x178))(this_02), (uVar33 & 1) != 0)) {
                    /* try { // try from 00d527a8 to 00e52837 has its CatchHandler @ 00d5274c */
          fVar36 = (float)(**(code **)(*(long *)this_02 + 0x48))(this_02);
          fVar37 = (float)(**(code **)(*(long *)this + 0x48))(this);
          if (fVar36 == fVar37) goto LAB_00d527dc;
        }
      }
    }
LAB_00d527d4:
    *(undefined1 *)(local_108 + 0xcc) = 1;
  }
LAB_00d527dc:
  if (*(long *)(this + 0x3a0) != 0) {
    (**(code **)(*(long *)(this + 0x3a0) + 0x10))();
  }
  if (((this[0x394] != (SkeletonRenderer)0x0) || (this[0x395] != (SkeletonRenderer)0x0)) ||
     (this[0x396] != (SkeletonRenderer)0x0)) {
    (**(code **)(*(long *)this + 0x530))(this,param_1,param_2,param_3);
  }
  if (*(long *)(lVar11 + 0x28) == local_80) {
                    /* try { // try from 00d52838 to 00e52ae7 has its CatchHandler @ 00d52d68 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


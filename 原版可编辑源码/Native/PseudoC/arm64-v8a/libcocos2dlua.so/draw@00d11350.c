
/* cocos2d::BatchMesh::draw() */

void __thiscall cocos2d::BatchMesh::draw(BatchMesh *this)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_01;
  ulong *puVar1;
  Mat4 *pMVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  BatchMesh BVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  void *pvVar24;
  VertexBuffer *pVVar25;
  void *pvVar26;
  Technique *pTVar27;
  long *plVar28;
  StateBlock *pSVar29;
  GLProgramState *pGVar30;
  undefined4 *puVar31;
  short sVar32;
  long lVar33;
  short *psVar34;
  long lVar35;
  ulong uVar36;
  undefined8 *puVar37;
  Mat4 *pMVar38;
  Mat4 *pMVar39;
  Pass *this_02;
  size_t sVar40;
  ulong uVar41;
  long lVar42;
  int *piVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined5 uStack_98;
  uint3 uStack_93;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  if (((*(long *)(this + 0x58) != *(long *)(this + 0x60)) ||
      (*(long *)(this + 0xe8) != *(long *)(this + 0xf0))) ||
     (*(long *)(this + 0xd0) != *(long *)(this + 0xd8))) {
    if (this[0x287] != (BatchMesh)0x0) {
      this[0x287] = (BatchMesh)0x0;
      uVar23 = Sprite3DMaterial::updateWithFilename
                         (*(Sprite3DMaterial **)(this + 0x2a8),(basic_string *)(this + 0x28),
                          (bool)this[0x285],(bool)this[0x284],(bool)this[0x286]);
      if ((uVar23 & 1) != 0) {
        setMaterial(this,*(Material **)(this + 0x2a8));
      }
    }
    if (this[0x280] != (BatchMesh)0x0) {
      lVar44 = *(long *)(this + 0xd0);
      lVar42 = *(long *)(this + 0xd8);
      lVar33 = lVar42 - lVar44;
      uVar23 = (lVar33 >> 4) * 0x6db6db6db6db6db7;
      if (lVar33 < 0x3801) {
        pvVar24 = (void *)0x0;
        uVar41 = 0;
      }
      else {
        uVar41 = uVar23;
        if (0x124924924924923 < (long)uVar23) {
          uVar41 = 0x124924924924924;
        }
        do {
          pvVar24 = operator_new(uVar41 * 0x70,(nothrow_t *)&std::nothrow);
          if (pvVar24 != (void *)0x0) goto LAB_00d11464;
          uVar41 = uVar41 >> 1;
        } while (uVar41 != 0);
        pvVar24 = (void *)0x0;
      }
LAB_00d11464:
      std::__ndk1::
      __stable_sort<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
                (lVar44,lVar42,&local_b0,uVar23,pvVar24,uVar41);
      if (pvVar24 != (void *)0x0) {
        operator_delete(pvVar24);
      }
      plVar28 = *(long **)(this + 0xd0);
      plVar3 = *(long **)(this + 0xd8);
      if (plVar28 != plVar3) {
        this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x100);
        this_01 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x118);
        do {
          puVar1 = *(ulong **)(this + 0xe8);
          puVar4 = *(ulong **)(this + 0xf0);
          if (puVar1 == puVar4) {
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            uStack_93 = 0;
            local_a0 = 0;
            uStack_9c = 0;
            if (puVar1 < *(ulong **)(this + 0xf8)) {
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              *(ulong **)(this + 0xf0) = puVar1 + 4;
            }
            else {
              std::__ndk1::
              vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
              ::__push_back_slow_path<cocos2d::BatchMesh::OnceDraw>
                        ((vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
                          *)(this + 0xe8),(OnceDraw *)&local_b0);
            }
          }
          else if ((int)puVar4[-1] == 0x1e) {
            uStack_98 = 0;
            local_a0 = 0;
            uStack_a8 = (ulong)(uint)((int)puVar4[-2] + *(int *)((long)puVar4 + -0x14)) << 0x20;
            local_b0 = (ulong)(uint)(*(int *)((long)puVar4 + -0x1c) + (int)puVar4[-4]);
            uStack_9c = (int)puVar4[-1] + *(int *)((long)puVar4 + -0xc);
            if (puVar4 == *(ulong **)(this + 0xf8)) {
              std::__ndk1::
              vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
              ::__push_back_slow_path<cocos2d::BatchMesh::OnceDraw_const&>
                        ((vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
                          *)(this + 0xe8),(OnceDraw *)&local_b0);
            }
            else {
              puVar4[1] = uStack_a8;
              *puVar4 = local_b0;
              puVar4[3] = (ulong)uStack_93 << 0x28;
              puVar4[2] = (ulong)uStack_9c << 0x20;
              *(ulong **)(this + 0xf0) = puVar4 + 4;
            }
          }
          iVar20 = *(int *)(this + 0x290);
          sVar40 = (size_t)iVar20;
          lVar44 = *(long *)(this + 0xf0);
          uVar10 = 0;
          if (iVar20 != 0) {
            uVar10 = (int)plVar28[10] / iVar20;
          }
          pVVar25 = (VertexBuffer *)
                    MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x2a0));
          iVar20 = VertexBuffer::getSizePerVertex(pVVar25);
          iVar20 = iVar20 * uVar10;
          *(int *)(plVar28 + 10) = iVar20;
          uVar23 = *(long *)(this + 0x108) - *(long *)(this + 0x100);
          uVar41 = uVar23 + (long)iVar20;
          if (uVar23 < uVar41) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      (this_00,(long)iVar20);
          }
          else if (uVar23 != uVar41) {
            *(ulong *)(this + 0x108) = *(long *)(this + 0x100) + uVar41;
          }
          local_b0 = CONCAT44(local_b0._4_4_,(float)*(int *)(lVar44 + -8));
          if (0 < (int)uVar10) {
            lVar42 = 0;
            uVar41 = (ulong)uVar10;
            do {
              memcpy((void *)(*(long *)this_00 + uVar23),(void *)(*plVar28 + lVar42),sVar40);
              uVar41 = uVar41 - 1;
              lVar42 = lVar42 + sVar40;
              *(undefined4 *)(*(long *)this_00 + sVar40 + uVar23) = (undefined4)local_b0;
              lVar35 = plVar28[0xb];
              lVar33 = *(long *)this_00 + sVar40 + uVar23;
              uVar23 = uVar23 + sVar40 + 0x14;
              *(long *)(lVar33 + 0xc) = plVar28[0xc];
              *(long *)(lVar33 + 4) = lVar35;
            } while (uVar41 != 0);
          }
          iVar21 = IndexBuffer::getSizePerIndex(*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28));
          iVar20 = 0;
          if (iVar21 != 0) {
            iVar20 = *(int *)((long)plVar28 + 0x54) / iVar21;
          }
          *(int *)((long)plVar28 + 0x54) = iVar20 * iVar21;
          lVar42 = *(long *)(this + 0x118);
          lVar33 = *(long *)(this + 0x120);
          sVar40 = (size_t)(iVar20 * iVar21);
          uVar41 = lVar33 - lVar42;
          uVar23 = uVar41 + sVar40;
          if (uVar41 < uVar23) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                      (this_01,sVar40);
            sVar40 = (size_t)*(int *)((long)plVar28 + 0x54);
            lVar35 = *(long *)this_01;
          }
          else {
            lVar35 = lVar42;
            if (uVar41 != uVar23) {
              *(ulong *)(this + 0x120) = lVar42 + uVar23;
            }
          }
          memcpy((void *)(lVar35 + uVar41),(void *)plVar28[1],sVar40);
          iVar20 = *(int *)((long)plVar28 + 0x54);
          iVar8 = *(int *)(lVar44 + -0x18);
          uVar11 = 0;
          if (iVar21 != 0) {
            uVar11 = iVar20 / iVar21;
          }
          if ((-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000) != 0 || uVar11 != 0) {
            lVar35 = *(long *)this_01;
            uVar23 = ((long)(int)uVar11 * 2 - 2U >> 1) + 1;
            psVar34 = (short *)(lVar35 + uVar41);
            sVar32 = (short)iVar8;
            if (0xf < uVar23) {
              uVar36 = uVar23 & 0xfffffffffffffff0;
              psVar34 = psVar34 + uVar36;
              puVar37 = (undefined8 *)(lVar35 + uVar41 + 0x10);
              uVar41 = uVar36;
              do {
                uVar46 = puVar37[-1];
                uVar45 = puVar37[-2];
                uVar48 = puVar37[1];
                uVar47 = *puVar37;
                uVar41 = uVar41 - 0x10;
                puVar37[-1] = CONCAT26((short)((ulong)uVar46 >> 0x30) + sVar32,
                                       CONCAT24((short)((ulong)uVar46 >> 0x20) + sVar32,
                                                CONCAT22((short)((ulong)uVar46 >> 0x10) + sVar32,
                                                         (short)uVar46 + sVar32)));
                puVar37[-2] = CONCAT26((short)((ulong)uVar45 >> 0x30) + sVar32,
                                       CONCAT24((short)((ulong)uVar45 >> 0x20) + sVar32,
                                                CONCAT22((short)((ulong)uVar45 >> 0x10) + sVar32,
                                                         (short)uVar45 + sVar32)));
                puVar37[1] = CONCAT26((short)((ulong)uVar48 >> 0x30) + sVar32,
                                      CONCAT24((short)((ulong)uVar48 >> 0x20) + sVar32,
                                               CONCAT22((short)((ulong)uVar48 >> 0x10) + sVar32,
                                                        (short)uVar48 + sVar32)));
                *puVar37 = CONCAT26((short)((ulong)uVar47 >> 0x30) + sVar32,
                                    CONCAT24((short)((ulong)uVar47 >> 0x20) + sVar32,
                                             CONCAT22((short)((ulong)uVar47 >> 0x10) + sVar32,
                                                      (short)uVar47 + sVar32)));
                puVar37 = puVar37 + 4;
              } while (uVar41 != 0);
              if (uVar23 == uVar36) goto LAB_00d114b4;
            }
            lVar35 = lVar35 + (((lVar33 + (long)(int)uVar11 * 2) - (long)psVar34) - lVar42);
            do {
              lVar35 = lVar35 + -2;
              *psVar34 = *psVar34 + sVar32;
              psVar34 = psVar34 + 1;
            } while (lVar35 != 0);
          }
LAB_00d114b4:
          *(undefined1 *)(lVar44 + -4) = 1;
          *(uint *)(lVar44 + -0x18) = iVar8 + uVar10;
          lVar42 = plVar28[10];
          *(int *)(lVar44 + -0x10) = *(int *)(lVar44 + -0x10) + iVar20;
          plVar28 = plVar28 + 0xe;
          *(int *)(lVar44 + -0x1c) = *(int *)(lVar44 + -0x1c) + (int)lVar42;
          *(int *)(lVar44 + -8) = *(int *)(lVar44 + -8) + 1;
        } while (plVar28 != plVar3);
      }
    }
    lVar44 = Camera::getVisitingCamera();
    if ((this[0x281] == (BatchMesh)0x0) &&
       ((*(uint *)(lVar44 + 0x42c) & (uint)*(ushort *)(this + 0x28a)) != 0)) {
      lVar44 = *(long *)(this + 0xd0);
      lVar33 = *(long *)(this + 0xd8);
      lVar42 = *(long *)(this + 0x130);
      this[0x281] = (BatchMesh)0x1;
      if ((lVar33 - lVar44 >> 4) * 0x6db6db6db6db6db7 - (*(long *)(this + 0x138) - lVar42 >> 6) == 0
         ) {
        if (lVar44 != lVar33) {
          do {
            Mat4::Mat4((Mat4 *)&local_b0,(Mat4 *)(lVar42 + (long)*(int *)(lVar44 + 0x6c) * 0x40));
            pMVar2 = *(Mat4 **)(this + 0x150);
            if (pMVar2 == *(Mat4 **)(this + 0x158)) {
              std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
              __push_back_slow_path<cocos2d::Mat4_const&>
                        ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                         (this + 0x148),(Mat4 *)&local_b0);
              BVar9 = this[0x288];
            }
            else {
              Mat4::Mat4(pMVar2,(Mat4 *)&local_b0);
              *(Mat4 **)(this + 0x150) = pMVar2 + 0x40;
              BVar9 = this[0x288];
            }
            if (BVar9 != (BatchMesh)0x0) {
              Mat4::Mat4((Mat4 *)&local_f0,(Mat4 *)&local_b0);
              local_b8 = 0;
              local_c0 = 0;
              Mat4::inverse((Mat4 *)&local_f0);
              Mat4::transpose((Mat4 *)&local_f0);
              uVar19 = local_c8;
              uVar18 = uStack_cc;
              uVar17 = local_d0;
              uVar16 = local_d8;
              uVar15 = uStack_dc;
              uVar14 = local_e0;
              uVar13 = local_e8;
              uVar22 = uStack_ec;
              uVar7 = local_f0;
              puVar31 = *(undefined4 **)(this + 0x168);
              if (puVar31 == *(undefined4 **)(this + 0x170)) {
                pvVar24 = *(void **)(this + 0x160);
                sVar40 = (long)puVar31 - (long)pvVar24;
                uVar23 = ((long)sVar40 >> 2) * -0x71c71c71c71c71c7 + 1;
                if (0x71c71c71c71c71c < uVar23) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                lVar42 = (long)*(undefined4 **)(this + 0x170) - (long)pvVar24 >> 2;
                uVar41 = 0x71c71c71c71c71c;
                if ((ulong)(lVar42 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
                  uVar36 = lVar42 * 0x1c71c71c71c71c72;
                  uVar41 = uVar23;
                  if (uVar23 <= uVar36) {
                    uVar41 = uVar36;
                  }
                  if (uVar41 != 0) goto LAB_00d1195c;
                  uVar41 = 0;
                  pvVar26 = (void *)0x0;
                }
                else {
LAB_00d1195c:
                  pvVar26 = operator_new(uVar41 * 0x24);
                }
                puVar31 = (undefined4 *)((long)pvVar26 + ((long)sVar40 >> 2) * 4);
                puVar31[6] = uVar17;
                puVar31[7] = uVar18;
                *puVar31 = uVar7;
                puVar31[1] = uVar22;
                puVar31[2] = uVar13;
                puVar31[3] = uVar14;
                puVar31[4] = uVar15;
                puVar31[5] = uVar16;
                puVar31[8] = uVar19;
                if (0 < (long)sVar40) {
                  memcpy((void *)((long)puVar31 - sVar40),pvVar24,sVar40);
                }
                *(void **)(this + 0x160) = (void *)((long)puVar31 - sVar40);
                *(undefined4 **)(this + 0x168) = puVar31 + 9;
                *(void **)(this + 0x170) = (void *)((long)pvVar26 + uVar41 * 0x24);
                if (pvVar24 != (void *)0x0) {
                  operator_delete(pvVar24);
                }
              }
              else {
                *puVar31 = local_f0;
                puVar31[1] = uStack_ec;
                puVar31[2] = local_e8;
                puVar31[3] = local_e0;
                puVar31[4] = uStack_dc;
                puVar31[5] = local_d8;
                puVar31[6] = local_d0;
                puVar31[7] = uStack_cc;
                puVar31[8] = local_c8;
                *(undefined4 **)(this + 0x168) = puVar31 + 9;
              }
              Mat4::~Mat4((Mat4 *)&local_f0);
            }
            Mat4::~Mat4((Mat4 *)&local_b0);
            if (lVar33 == lVar44 + 0x70) break;
            lVar42 = *(long *)(this + 0x130);
            lVar44 = lVar44 + 0x70;
          } while( true );
        }
        lVar44 = Director::getInstance();
        lVar44 = *(long *)(lVar44 + 0x158);
        pTVar27 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
        plVar28 = (long *)Technique::getPasses(pTVar27);
        puVar5 = (undefined8 *)plVar28[1];
        for (puVar37 = (undefined8 *)*plVar28; puVar37 != puVar5; puVar37 = puVar37 + 1) {
          this_02 = (Pass *)*puVar37;
          Pass::getGLProgramState(this_02);
          if ((lVar44 != 0) && (*(long *)(lVar44 + 0x338) != *(long *)(lVar44 + 0x330))) {
            setLightUniforms((Pass *)this,(Scene *)this_02,(uint)lVar44);
          }
        }
        if (this[0x280] != (BatchMesh)0x0) {
          iVar20 = (int)((ulong)(*(long *)(this + 0xf0) - *(long *)(this + 0xe8)) >> 5) +
                   (int)((ulong)(*(long *)(this + 0x60) - *(long *)(this + 0x58)) >> 5);
          pVVar25 = (VertexBuffer *)
                    MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x2a0));
          VertexBuffer::recreateVBO(pVVar25,iVar20);
          IndexBuffer::recreateVBO(*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),iVar20);
        }
        piVar43 = *(int **)(this + 0x58);
        piVar6 = *(int **)(this + 0x60);
        if (piVar43 == piVar6) {
          iVar20 = 0;
        }
        else {
          iVar20 = 0;
          do {
            if ((ulong)(long)piVar43[5] <
                (ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0) >> 6)) {
              if (this[0x280] != (BatchMesh)0x0) {
                pVVar25 = (VertexBuffer *)
                          MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x2a0));
                VertexBuffer::updateVertices
                          (pVVar25,(uchar *)(*(long *)(this + 0x70) + (long)*piVar43),piVar43[1],
                           iVar20);
                IndexBuffer::updateIndices
                          (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),
                           (uchar *)(*(long *)(this + 0x88) + (long)piVar43[3]),piVar43[4],iVar20);
              }
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setCullFace(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setDepthTest(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setDepthWrite(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setBlend(pSVar29,false);
              pTVar27 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
              plVar28 = (long *)Technique::getPasses(pTVar27);
              puVar5 = (undefined8 *)plVar28[1];
              for (puVar37 = (undefined8 *)*plVar28; puVar37 != puVar5; puVar37 = puVar37 + 1) {
                pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,"u_models");
                GLProgramState::setUniformMat4v
                          (pGVar30,(basic_string *)&local_b0,(long)piVar43[6],
                           (Mat4 *)(*(long *)(this + 0xa0) + (long)piVar43[5] * 0x40));
                if ((local_b0 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                }
                if (this[0x288] != (BatchMesh)0x0) {
                  pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,"u_viewPos");
                  GLProgramState::setUniformVec3
                            (pGVar30,(basic_string *)&local_b0,(Vec3 *)(this + 0x294));
                  if ((local_b0 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                  }
                  pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,"u_nMats");
                  GLProgramState::setUniformMat3v
                            (pGVar30,(basic_string *)&local_b0,(long)piVar43[6],
                             (Mat3 *)(*(long *)(this + 0xb8) + (long)piVar43[5] * 0x24));
                  if ((local_b0 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                  }
                }
                Pass::bind((Pass *)*puVar37,iVar20);
                uVar7 = *(undefined4 *)(*(long *)(this + 0x2a0) + 0x68);
                uVar22 = IndexBuffer::getIndexNumber
                                   (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),iVar20);
                glDrawElements(uVar7,uVar22,0x1403,0);
                lVar44 = Director::getInstance();
                lVar44 = *(long *)(lVar44 + 0x1b0);
                plVar28 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar44);
                *plVar28 = *plVar28 + 1;
                iVar21 = IndexBuffer::getIndexNumber
                                   (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),iVar20);
                *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar44) =
                     *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar44) + (long)iVar21;
                Pass::unbind((Pass *)*puVar37);
              }
              iVar20 = iVar20 + 1;
            }
            piVar43 = piVar43 + 8;
          } while (piVar43 != piVar6);
        }
        piVar43 = *(int **)(this + 0xe8);
        piVar6 = *(int **)(this + 0xf0);
        if (piVar43 != piVar6) {
          do {
            if ((ulong)(long)piVar43[5] <
                (ulong)(*(long *)(this + 0x150) - *(long *)(this + 0x148) >> 6)) {
              if (this[0x280] != (BatchMesh)0x0) {
                pVVar25 = (VertexBuffer *)
                          MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x2a0));
                VertexBuffer::updateVertices
                          (pVVar25,(uchar *)(*(long *)(this + 0x100) + (long)*piVar43),piVar43[1],
                           iVar20);
                IndexBuffer::updateIndices
                          (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),
                           (uchar *)(*(long *)(this + 0x118) + (long)piVar43[3]),piVar43[4],iVar20);
              }
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setCullFace(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setDepthTest(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setDepthWrite(pSVar29,(bool)this[0x282]);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setBlend(pSVar29,true);
              pSVar29 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
              RenderState::StateBlock::setBlendFunc
                        (pSVar29,(BlendFunc *)&BlendFunc::ALPHA_NON_PREMULTIPLIED);
              pTVar27 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
              plVar28 = (long *)Technique::getPasses(pTVar27);
              puVar5 = (undefined8 *)plVar28[1];
              for (puVar37 = (undefined8 *)*plVar28; puVar37 != puVar5; puVar37 = puVar37 + 1) {
                pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,"u_models");
                GLProgramState::setUniformMat4v
                          (pGVar30,(basic_string *)&local_b0,(long)piVar43[6],
                           (Mat4 *)(*(long *)(this + 0x148) + (long)piVar43[5] * 0x40));
                if ((local_b0 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                }
                if (this[0x288] != (BatchMesh)0x0) {
                  pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,"u_viewPos");
                  GLProgramState::setUniformVec3
                            (pGVar30,(basic_string *)&local_b0,(Vec3 *)(this + 0x294));
                  if ((local_b0 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                  }
                  pGVar30 = (GLProgramState *)Pass::getGLProgramState((Pass *)*puVar37);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)&local_b0,"u_nMats");
                  GLProgramState::setUniformMat3v
                            (pGVar30,(basic_string *)&local_b0,(long)piVar43[6],
                             (Mat3 *)(*(long *)(this + 0x160) + (long)piVar43[5] * 0x24));
                  if ((local_b0 & 1) != 0) {
                    operator_delete((void *)CONCAT44(uStack_9c,local_a0));
                  }
                }
                Pass::bind((Pass *)*puVar37,iVar20);
                uVar7 = *(undefined4 *)(*(long *)(this + 0x2a0) + 0x68);
                uVar22 = IndexBuffer::getIndexNumber
                                   (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),iVar20);
                glDrawElements(uVar7,uVar22,0x1403,0);
                lVar44 = Director::getInstance();
                lVar44 = *(long *)(lVar44 + 0x1b0);
                plVar28 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar44);
                *plVar28 = *plVar28 + 1;
                iVar21 = IndexBuffer::getIndexNumber
                                   (*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28),iVar20);
                *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar44) =
                     *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar44) + (long)iVar21;
                Pass::unbind((Pass *)*puVar37);
              }
              iVar20 = iVar20 + 1;
            }
            piVar43 = piVar43 + 8;
          } while (piVar43 != piVar6);
        }
        pMVar2 = *(Mat4 **)(this + 0x130);
        pMVar38 = *(Mat4 **)(this + 0x138);
        this[0x280] = (BatchMesh)0x0;
        while (pMVar38 != pMVar2) {
          pMVar38 = pMVar38 + -0x40;
          Mat4::~Mat4(pMVar38);
        }
        pMVar38 = *(Mat4 **)(this + 0x148);
        pMVar39 = *(Mat4 **)(this + 0x150);
        *(Mat4 **)(this + 0x138) = pMVar2;
        while (pMVar39 != pMVar38) {
          pMVar39 = pMVar39 + -0x40;
          Mat4::~Mat4(pMVar39);
        }
        pMVar2 = *(Mat4 **)(this + 0xa0);
        pMVar39 = *(Mat4 **)(this + 0xa8);
        *(Mat4 **)(this + 0x150) = pMVar38;
        *(undefined8 *)(this + 0x168) = *(undefined8 *)(this + 0x160);
        while (pMVar39 != pMVar2) {
          pMVar39 = pMVar39 + -0x40;
          Mat4::~Mat4(pMVar39);
        }
        *(Mat4 **)(this + 0xa8) = pMVar2;
        *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0xb8);
      }
      else {
        this[0x280] = (BatchMesh)0x1;
        clear(this);
      }
    }
  }
  if (*(long *)(lVar12 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cocos2d::BatchMesh::onMeshDraw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned char*, int,
   unsigned char*, int, cocos2d::Vec4) */

void __thiscall
cocos2d::BatchMesh::onMeshDraw
          (BatchMesh *this,undefined8 param_2_00,Mat4 *param_2,void *param_3,int param_4,
          void *param_5,int param_6,undefined8 *param_8)

{
  Mat4 *this_00;
  int iVar1;
  BatchMesh BVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>> *this_01
  ;
  VertexBuffer *this_02;
  void *pvVar13;
  short sVar14;
  ulong *puVar15;
  ulong *puVar16;
  short *psVar17;
  undefined4 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  void *__src;
  ulong uVar23;
  long lVar24;
  size_t sVar25;
  long lVar26;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x290) < 1) goto LAB_00d112dc;
  if (this[0x280] != (BatchMesh)0x0) {
    this_01 = (vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>
               *)(this + 0x58);
    puVar16 = *(ulong **)this_01;
    puVar15 = *(ulong **)(this + 0x60);
    if (puVar16 == puVar15) {
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_a0 = 0;
      local_9c = 0;
      if (puVar16 < *(ulong **)(this + 0x68)) {
        puVar16[1] = 0;
        *puVar16 = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        *(ulong **)(this + 0x60) = puVar16 + 4;
      }
      else {
        std::__ndk1::
        vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>::
        __push_back_slow_path<cocos2d::BatchMesh::OnceDraw>(this_01,(OnceDraw *)&local_b0);
      }
    }
    else if ((int)puVar15[-1] == 0x1e) {
      uStack_98 = 0;
      uStack_94 = uStack_94 & 0xffffff00;
      local_a0 = 0;
      uStack_a8 = (ulong)(uint)((int)puVar15[-2] + *(int *)((long)puVar15 + -0x14)) << 0x20;
      local_b0 = (ulong)(uint)(*(int *)((long)puVar15 + -0x1c) + (int)puVar15[-4]);
      local_9c = (int)puVar15[-1] + *(int *)((long)puVar15 + -0xc);
      if (puVar15 == *(ulong **)(this + 0x68)) {
        std::__ndk1::
        vector<cocos2d::BatchMesh::OnceDraw,std::__ndk1::allocator<cocos2d::BatchMesh::OnceDraw>>::
        __push_back_slow_path<cocos2d::BatchMesh::OnceDraw_const&>(this_01,(OnceDraw *)&local_b0);
      }
      else {
        puVar15[1] = uStack_a8;
        *puVar15 = local_b0;
        puVar15[3] = (ulong)uStack_94 << 0x20;
        puVar15[2] = (ulong)local_9c << 0x20;
        *(ulong **)(this + 0x60) = puVar15 + 4;
      }
    }
    iVar11 = *(int *)(this + 0x290);
    sVar25 = (size_t)iVar11;
    lVar22 = *(long *)(this + 0x60);
    uVar3 = 0;
    if (iVar11 != 0) {
      uVar3 = param_4 / iVar11;
    }
    this_02 = (VertexBuffer *)MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x2a0));
    iVar11 = VertexBuffer::getSizePerVertex(this_02);
    pvVar27 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x70);
    iVar11 = iVar11 * uVar3;
    uVar29 = *(long *)(this + 0x78) - *(long *)pvVar27;
    uVar23 = uVar29 + (long)iVar11;
    if (uVar29 < uVar23) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                (pvVar27,(long)iVar11);
    }
    else if (uVar29 != uVar23) {
      *(ulong *)(this + 0x78) = *(long *)pvVar27 + uVar23;
    }
    local_b0 = CONCAT44(local_b0._4_4_,(float)*(int *)(lVar22 + -8));
    if (0 < (int)uVar3) {
      uVar23 = (ulong)uVar3;
      do {
        memcpy((void *)(*(long *)pvVar27 + uVar29),param_3,sVar25);
        uVar23 = uVar23 - 1;
        param_3 = (void *)((long)param_3 + sVar25);
        *(undefined4 *)(*(long *)pvVar27 + sVar25 + uVar29) = (undefined4)local_b0;
        uVar30 = *param_8;
        lVar24 = *(long *)pvVar27 + sVar25 + uVar29;
        uVar29 = uVar29 + sVar25 + 0x14;
        *(undefined8 *)(lVar24 + 0xc) = param_8[1];
        *(undefined8 *)(lVar24 + 4) = uVar30;
      } while (uVar23 != 0);
    }
    iVar12 = IndexBuffer::getSizePerIndex(*(IndexBuffer **)(*(long *)(this + 0x2a0) + 0x28));
    pvVar27 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x88);
    lVar24 = *(long *)pvVar27;
    uVar4 = 0;
    if (iVar12 != 0) {
      uVar4 = param_6 / iVar12;
    }
    uVar23 = (ulong)(int)(uVar4 * iVar12);
    lVar26 = *(long *)(this + 0x90);
    uVar28 = lVar26 - lVar24;
    uVar29 = uVar28 + uVar23;
    if (uVar28 < uVar29) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                (pvVar27,uVar23);
      lVar19 = *(long *)pvVar27;
    }
    else {
      lVar19 = lVar24;
      if (uVar28 != uVar29) {
        *(ulong *)(this + 0x90) = lVar24 + uVar29;
      }
    }
    memcpy((void *)(lVar19 + uVar28),param_5,uVar23);
    iVar1 = *(int *)(lVar22 + -0x18);
    if ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000) != 0 || uVar4 != 0) {
      lVar19 = *(long *)pvVar27;
      uVar29 = ((long)(int)uVar4 * 2 - 2U >> 1) + 1;
      psVar17 = (short *)(lVar19 + uVar28);
      sVar14 = (short)iVar1;
      if (0xf < uVar29) {
        uVar20 = uVar29 & 0xfffffffffffffff0;
        psVar17 = psVar17 + uVar20;
        puVar21 = (undefined8 *)(uVar28 + lVar19 + 0x10);
        uVar23 = uVar20;
        do {
          uVar31 = puVar21[-1];
          uVar30 = puVar21[-2];
          uVar33 = puVar21[1];
          uVar32 = *puVar21;
          uVar23 = uVar23 - 0x10;
          puVar21[-1] = CONCAT26((short)((ulong)uVar31 >> 0x30) + sVar14,
                                 CONCAT24((short)((ulong)uVar31 >> 0x20) + sVar14,
                                          CONCAT22((short)((ulong)uVar31 >> 0x10) + sVar14,
                                                   (short)uVar31 + sVar14)));
          puVar21[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) + sVar14,
                                 CONCAT24((short)((ulong)uVar30 >> 0x20) + sVar14,
                                          CONCAT22((short)((ulong)uVar30 >> 0x10) + sVar14,
                                                   (short)uVar30 + sVar14)));
          puVar21[1] = CONCAT26((short)((ulong)uVar33 >> 0x30) + sVar14,
                                CONCAT24((short)((ulong)uVar33 >> 0x20) + sVar14,
                                         CONCAT22((short)((ulong)uVar33 >> 0x10) + sVar14,
                                                  (short)uVar33 + sVar14)));
          *puVar21 = CONCAT26((short)((ulong)uVar32 >> 0x30) + sVar14,
                              CONCAT24((short)((ulong)uVar32 >> 0x20) + sVar14,
                                       CONCAT22((short)((ulong)uVar32 >> 0x10) + sVar14,
                                                (short)uVar32 + sVar14)));
          puVar21 = puVar21 + 4;
        } while (uVar23 != 0);
        if (uVar29 == uVar20) goto LAB_00d1110c;
      }
      lVar19 = lVar19 + (((lVar26 + (long)(int)uVar4 * 2) - (long)psVar17) - lVar24);
      do {
        lVar19 = lVar19 + -2;
        *psVar17 = *psVar17 + sVar14;
        psVar17 = psVar17 + 1;
      } while (lVar19 != 0);
    }
LAB_00d1110c:
    *(uint *)(lVar22 + -0x18) = iVar1 + uVar3;
    *(int *)(lVar22 + -0x1c) = *(int *)(lVar22 + -0x1c) + iVar11;
    *(uint *)(lVar22 + -0x10) = *(int *)(lVar22 + -0x10) + uVar4 * iVar12;
    *(int *)(lVar22 + -8) = *(int *)(lVar22 + -8) + 1;
  }
  this_00 = *(Mat4 **)(this + 0xa8);
  this[0x281] = (BatchMesh)0x0;
  if (this_00 == *(Mat4 **)(this + 0xb0)) {
    std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
    __push_back_slow_path<cocos2d::Mat4_const&>
              ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0xa0),param_2)
    ;
    BVar2 = this[0x288];
  }
  else {
    Mat4::Mat4(this_00,param_2);
    *(Mat4 **)(this + 0xa8) = this_00 + 0x40;
    BVar2 = this[0x288];
  }
  if (BVar2 == (BatchMesh)0x0) goto LAB_00d112dc;
  Mat4::Mat4((Mat4 *)&local_b0,param_2);
  local_78 = 0;
  local_80 = 0;
  Mat4::inverse((Mat4 *)&local_b0);
  Mat4::transpose((Mat4 *)&local_b0);
  uVar10 = uStack_98;
  uVar3 = local_9c;
  uVar9 = local_a0;
  puVar18 = *(undefined4 **)(this + 0xc0);
  uVar6 = (undefined4)local_b0;
  uVar7 = local_b0._4_4_;
  uVar8 = (undefined4)uStack_a8;
  if (puVar18 == *(undefined4 **)(this + 200)) {
    __src = *(void **)(this + 0xb8);
    sVar25 = (long)puVar18 - (long)__src;
    uVar23 = 0x71c71c71c71c71c;
    uVar29 = ((long)sVar25 >> 2) * -0x71c71c71c71c71c7 + 1;
    if (0x71c71c71c71c71c < uVar29) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar22 = (long)*(undefined4 **)(this + 200) - (long)__src >> 2;
    if ((ulong)(lVar22 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
      uVar28 = lVar22 * 0x1c71c71c71c71c72;
      uVar23 = uVar29;
      if (uVar29 <= uVar28) {
        uVar23 = uVar28;
      }
      if (uVar23 != 0) goto LAB_00d1125c;
      pvVar13 = (void *)0x0;
    }
    else {
LAB_00d1125c:
      pvVar13 = operator_new(uVar23 * 0x24);
    }
    puVar18 = (undefined4 *)((long)pvVar13 + ((long)sVar25 >> 2) * 4);
    *puVar18 = uVar6;
    puVar18[1] = uVar7;
    puVar18[6] = local_90;
    puVar18[7] = uStack_8c;
    puVar18[2] = uVar8;
    puVar18[3] = uVar9;
    puVar18[4] = uVar3;
    puVar18[5] = uVar10;
    puVar18[8] = local_88;
    if (0 < (long)sVar25) {
      memcpy((void *)((long)puVar18 - sVar25),__src,sVar25);
    }
    *(void **)(this + 0xb8) = (void *)((long)puVar18 - sVar25);
    *(undefined4 **)(this + 0xc0) = puVar18 + 9;
    *(void **)(this + 200) = (void *)((long)pvVar13 + uVar23 * 0x24);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar18 = (undefined4)local_b0;
    puVar18[1] = local_b0._4_4_;
    puVar18[2] = (undefined4)uStack_a8;
    puVar18[3] = local_a0;
    puVar18[4] = local_9c;
    puVar18[5] = uStack_98;
    puVar18[6] = local_90;
    puVar18[7] = uStack_8c;
    puVar18[8] = local_88;
    *(undefined4 **)(this + 0xc0) = puVar18 + 9;
  }
  Mat4::~Mat4((Mat4 *)&local_b0);
LAB_00d112dc:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


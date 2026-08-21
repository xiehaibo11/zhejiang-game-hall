
/* cocos2d::MeshVertexData::create(cocos2d::MeshData const&) */

Ref * cocos2d::MeshVertexData::create(MeshData *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int *piVar9;
  int iVar12;
  Ref *this;
  undefined8 uVar13;
  Ref *this_00;
  IndexBuffer *this_01;
  vector *pvVar14;
  vector *pvVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  VertexBuffer *this_02;
  undefined4 *puVar23;
  void *pvVar24;
  long lVar25;
  undefined4 *puVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  Ref *local_98 [3];
  VertexStreamAttribute local_80 [4];
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  int *piVar7;
  int *piVar8;
  int *piVar10;
  int *piVar11;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__MeshVertexData_016d35c0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  lVar16 = *(long *)(param_1 + 0x70);
  lVar17 = *(long *)(param_1 + 0x78);
  if (lVar16 == lVar17) {
    uVar29 = 0;
  }
  else {
    uVar19 = (lVar17 - lVar16) - 0x10U >> 4;
    uVar28 = uVar19 + 1;
    if (uVar28 < 9) {
      uVar29 = 0;
    }
    else {
      uVar20 = 8;
      if ((uVar28 & 7) != 0) {
        uVar20 = uVar28 & 7;
      }
      piVar18 = (int *)(lVar16 + 0x4c);
      iVar30 = 0;
      iVar31 = 0;
      iVar12 = 0;
      iVar32 = 0;
      lVar16 = lVar16 + (uVar28 - uVar20) * 0x10;
      lVar25 = (uVar19 - uVar20) + 1;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      do {
        piVar22 = piVar18 + -0x10;
        iVar37 = *piVar18;
        piVar6 = piVar18 + 4;
        piVar7 = piVar18 + 8;
        piVar8 = piVar18 + 0xc;
        piVar9 = piVar18 + -0xc;
        piVar10 = piVar18 + -8;
        piVar11 = piVar18 + -4;
        lVar25 = lVar25 + -8;
        piVar18 = piVar18 + 0x20;
        iVar33 = iVar37 + iVar33;
        iVar34 = *piVar6 + iVar34;
        iVar35 = *piVar7 + iVar35;
        iVar36 = *piVar8 + iVar36;
        iVar30 = *piVar22 + iVar30;
        iVar31 = *piVar9 + iVar31;
        iVar12 = *piVar10 + iVar12;
        iVar32 = *piVar11 + iVar32;
      } while (lVar25 != 0);
      uVar29 = iVar33 + iVar30 + iVar34 + iVar31 + iVar35 + iVar12 + iVar36 + iVar32;
    }
    do {
      piVar18 = (int *)(lVar16 + 0xc);
      lVar16 = lVar16 + 0x10;
      uVar29 = *piVar18 + uVar29;
    } while (lVar17 != lVar16);
  }
  uVar1 = uVar29 + 3;
  if (-1 < (int)uVar29) {
    uVar1 = uVar29;
  }
  uVar28 = (long)((ulong)uVar1 << 0x20) >> 0x22;
  iVar30 = 0;
  if (uVar28 != 0) {
    iVar30 = (int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 2) / uVar28);
  }
  uVar13 = VertexBuffer::create(uVar29,iVar30,0x88e4,1);
  *(undefined8 *)(this + 0x30) = uVar13;
  this_00 = (Ref *)VertexData::create();
  *(Ref **)(this + 0x28) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0x30));
  }
  puVar23 = *(undefined4 **)(param_1 + 0x70);
  puVar26 = *(undefined4 **)(param_1 + 0x78);
  if (puVar23 != puVar26) {
    iVar30 = 0;
    do {
      local_70 = *puVar23;
      local_78 = NEON_rev64(*(undefined8 *)(puVar23 + 1),4);
      local_80[0] = (VertexStreamAttribute)0x0;
      local_7c = iVar30;
      VertexData::setStream(*(VertexData **)(this + 0x28),*(VertexBuffer **)(this + 0x30),local_80);
      piVar18 = puVar23 + 3;
      puVar23 = puVar23 + 4;
      iVar30 = *piVar18 + iVar30;
    } while (puVar26 != puVar23);
  }
  if ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)
      (this + 0x50) !=
      (vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)
      (param_1 + 0x70)) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::assign<cocos2d::MeshVertexAttrib*>
              ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)(this + 0x50),*(MeshVertexAttrib **)(param_1 + 0x70),
               *(MeshVertexAttrib **)(param_1 + 0x78));
  }
  this_02 = *(VertexBuffer **)(this + 0x30);
  if (this_02 != (VertexBuffer *)0x0) {
    pvVar24 = *(void **)param_1;
    iVar30 = *(int *)(param_1 + 8);
    iVar12 = VertexBuffer::getSizePerVertex(this_02);
    iVar31 = 0;
    if (iVar12 != 0) {
      iVar31 = (int)(iVar30 - (int)pvVar24 & 0xfffffffcU) / iVar12;
    }
    VertexBuffer::updateVertices(this_02,pvVar24,iVar31,0,0);
  }
  lVar16 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) - lVar16 != 0) {
    lVar17 = *(long *)(param_1 + 0x28) - lVar16 >> 3;
    uVar28 = 0;
    lVar25 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 3) * -0x5555555555555555;
    do {
      plVar27 = (long *)(lVar16 + uVar28 * 0x18);
      this_01 = (IndexBuffer *)IndexBuffer::create(0,(ulong)(plVar27[1] - *plVar27) >> 1,0x88e4,1);
      pvVar15 = (vector *)0x0;
      IndexBuffer::updateIndices
                (this_01,(void *)*plVar27,(int)((ulong)(plVar27[1] - *plVar27) >> 1),0,0);
      if (uVar28 < (ulong)((*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) *
                          -0x5555555555555555)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_80,(basic_string *)(*(long *)(param_1 + 0x38) + uVar28 * 0x18));
        if (lVar25 + lVar17 * 0x5555555555555555 != 0) goto LAB_00d3151c;
LAB_00d31560:
        local_98[0] = (Ref *)MeshIndexData::create
                                       ((basic_string *)local_80,(MeshVertexData *)this,this_01,
                                        (AABB *)(*(long *)(param_1 + 0x50) + uVar28 * 0x18));
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_80,"");
        if (lVar25 + lVar17 * 0x5555555555555555 == 0) goto LAB_00d31560;
LAB_00d3151c:
        lVar16 = *(long *)(param_1 + 0x70);
        lVar4 = *(long *)(param_1 + 0x78);
        if (lVar16 == lVar4) {
          pvVar14 = (vector *)0x0;
        }
        else {
          uVar20 = (lVar4 - lVar16) - 0x10U >> 4;
          uVar19 = uVar20 + 1;
          if (uVar19 < 9) {
            pvVar14 = (vector *)0x0;
          }
          else {
            uVar2 = 8;
            if ((uVar19 & 7) != 0) {
              uVar2 = uVar19 & 7;
            }
            piVar18 = (int *)(lVar16 + 0x4c);
            iVar30 = 0;
            iVar31 = 0;
            iVar12 = 0;
            iVar32 = 0;
            lVar16 = lVar16 + (uVar19 - uVar2) * 0x10;
            lVar21 = (uVar20 - uVar2) + 1;
            iVar33 = 0;
            iVar34 = 0;
            iVar35 = 0;
            iVar36 = 0;
            do {
              piVar22 = piVar18 + -0x10;
              iVar37 = *piVar18;
              piVar6 = piVar18 + 4;
              piVar7 = piVar18 + 8;
              piVar8 = piVar18 + 0xc;
              piVar9 = piVar18 + -0xc;
              piVar10 = piVar18 + -8;
              piVar11 = piVar18 + -4;
              lVar21 = lVar21 + -8;
              piVar18 = piVar18 + 0x20;
              iVar33 = iVar37 + iVar33;
              iVar34 = *piVar6 + iVar34;
              iVar35 = *piVar7 + iVar35;
              iVar36 = *piVar8 + iVar36;
              iVar30 = *piVar22 + iVar30;
              iVar31 = *piVar9 + iVar31;
              iVar12 = *piVar10 + iVar12;
              iVar32 = *piVar11 + iVar32;
            } while (lVar21 != 0);
            pvVar14 = (vector *)
                      (ulong)(uint)(iVar33 + iVar30 + iVar34 + iVar31 +
                                   iVar35 + iVar12 + iVar36 + iVar32);
          }
          do {
            piVar18 = (int *)(lVar16 + 0xc);
            lVar16 = lVar16 + 0x10;
            pvVar14 = (vector *)(ulong)(uint)(*piVar18 + (int)pvVar14);
          } while (lVar4 != lVar16);
        }
        Bundle3D::calculateAABB((Bundle3D *)param_1,pvVar14,(int)plVar27,pvVar15);
        local_98[0] = (Ref *)MeshIndexData::create
                                       ((basic_string *)local_80,(MeshVertexData *)this,this_01,
                                        (AABB *)local_98);
      }
      puVar3 = *(undefined8 **)(this + 0x40);
      if (puVar3 == *(undefined8 **)(this + 0x48)) {
        std::__ndk1::vector<cocos2d::MeshIndexData*,std::__ndk1::allocator<cocos2d::MeshIndexData*>>
        ::__push_back_slow_path<cocos2d::MeshIndexData*const&>
                  ((vector<cocos2d::MeshIndexData*,std::__ndk1::allocator<cocos2d::MeshIndexData*>>
                    *)(this + 0x38),(MeshIndexData **)local_98);
      }
      else {
        *puVar3 = local_98[0];
        *(undefined8 **)(this + 0x40) = puVar3 + 1;
      }
      Ref::retain(local_98[0]);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      uVar28 = uVar28 + 1;
      if ((ulong)(lVar17 * -0x5555555555555555) <= uVar28) break;
      lVar16 = *(long *)(param_1 + 0x20);
    } while( true );
  }
  Ref::autorelease(this);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


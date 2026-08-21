
/* cocos2d::BatchMesh::init(cocos2d::Material*, std::__ndk1::vector<cocos2d::MeshVertexAttrib,
   std::__ndk1::allocator<cocos2d::MeshVertexAttrib> >, int, int, int) */

undefined4 __thiscall
cocos2d::BatchMesh::init
          (BatchMesh *this,Material *param_1,
          vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
          *param_3,int param_4,int param_5,int param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  int *piVar7;
  int iVar10;
  Ref *this_00;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  int *piVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uVar19;
  void *pvVar20;
  ulong uVar21;
  size_t sVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  BatchMesh *pBStack_98;
  undefined ***local_80;
  long local_68;
  int *piVar5;
  int *piVar6;
  int *piVar8;
  int *piVar9;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x290) = 0;
  puVar15 = *(undefined8 **)param_3;
  puVar2 = *(undefined8 **)(param_3 + 8);
  if (puVar15 != puVar2) {
    uVar17 = (ulong)((long)puVar2 + (-0x10 - (long)puVar15)) >> 4;
    uVar21 = uVar17 + 1;
    if (uVar21 < 9) {
      iVar10 = 0;
    }
    else {
      uVar1 = 8;
      if ((uVar21 & 7) != 0) {
        uVar1 = uVar21 & 7;
      }
      piVar16 = (int *)((long)puVar15 + 0x4c);
      iVar10 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      puVar15 = puVar15 + (uVar21 - uVar1) * 2;
      lVar13 = (uVar17 - uVar1) + 1;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      do {
        piVar18 = piVar16 + -0x10;
        iVar30 = *piVar16;
        piVar4 = piVar16 + 4;
        piVar5 = piVar16 + 8;
        piVar6 = piVar16 + 0xc;
        piVar7 = piVar16 + -0xc;
        piVar8 = piVar16 + -8;
        piVar9 = piVar16 + -4;
        lVar13 = lVar13 + -8;
        piVar16 = piVar16 + 0x20;
        iVar26 = iVar26 + iVar30;
        iVar27 = iVar27 + *piVar4;
        iVar28 = iVar28 + *piVar5;
        iVar29 = iVar29 + *piVar6;
        iVar10 = iVar10 + *piVar18;
        iVar23 = iVar23 + *piVar7;
        iVar24 = iVar24 + *piVar8;
        iVar25 = iVar25 + *piVar9;
      } while (lVar13 != 0);
      iVar10 = iVar26 + iVar10 + iVar27 + iVar23 + iVar28 + iVar24 + iVar29 + iVar25;
    }
    do {
      piVar16 = (int *)((long)puVar15 + 0xc);
      puVar15 = puVar15 + 2;
      iVar10 = iVar10 + *piVar16;
    } while (puVar2 != puVar15);
    *(int *)(this + 0x290) = iVar10;
  }
  uStack_a8 = 0x40000000b;
  local_b0 = 0x140600000001;
  if (puVar2 == *(undefined8 **)(param_3 + 0x10)) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::__push_back_slow_path<cocos2d::MeshVertexAttrib_const&>(param_3,(MeshVertexAttrib *)&local_b0)
    ;
    puVar15 = *(undefined8 **)(param_3 + 8);
  }
  else {
    puVar15 = puVar2 + 2;
    puVar2[1] = 0x40000000b;
    *puVar2 = 0x140600000001;
    *(undefined8 **)(param_3 + 8) = puVar15;
  }
  uStack_b8 = 0x100000000c;
  local_c0 = 0x140600000004;
  iVar10 = uStack_a8._4_4_ + *(int *)(this + 0x290);
  if (puVar15 == *(undefined8 **)(param_3 + 0x10)) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::__push_back_slow_path<cocos2d::MeshVertexAttrib_const&>(param_3,(MeshVertexAttrib *)&local_c0)
    ;
  }
  else {
    puVar15[1] = 0x100000000c;
    *puVar15 = 0x140600000004;
    *(undefined8 **)(param_3 + 8) = puVar15 + 2;
  }
  this_00 = (Ref *)MeshVertexData::create
                             (param_4,iVar10 + uStack_b8._4_4_,(vector *)param_3,param_5);
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
    *(undefined8 *)(this + 0x2a0) = **(undefined8 **)(this_00 + 0x38);
    setMaterial(this,param_1);
    iVar10 = VertexBuffer::getSize(*(VertexBuffer **)(this_00 + 0x30),0);
    pvVar20 = *(void **)(this + 0x70);
    uVar21 = (ulong)iVar10;
    if ((ulong)(*(long *)(this + 0x80) - (long)pvVar20) < uVar21) {
      sVar22 = *(long *)(this + 0x78) - (long)pvVar20;
      pvVar11 = operator_new(uVar21);
      if (0 < (long)sVar22) {
        memcpy(pvVar11,pvVar20,sVar22);
      }
      *(void **)(this + 0x70) = pvVar11;
      *(size_t *)(this + 0x78) = (long)pvVar11 + sVar22;
      *(ulong *)(this + 0x80) = (long)pvVar11 + uVar21;
      if (pvVar20 != (void *)0x0) {
        operator_delete(pvVar20);
      }
    }
    iVar10 = IndexBuffer::getSize(*(IndexBuffer **)(**(long **)(this_00 + 0x38) + 0x28),0);
    pvVar20 = *(void **)(this + 0x88);
    uVar21 = (ulong)iVar10;
    if ((ulong)(*(long *)(this + 0x98) - (long)pvVar20) < uVar21) {
      sVar22 = *(long *)(this + 0x90) - (long)pvVar20;
      pvVar11 = operator_new(uVar21);
      if (0 < (long)sVar22) {
        memcpy(pvVar11,pvVar20,sVar22);
      }
      *(void **)(this + 0x88) = pvVar11;
      *(size_t *)(this + 0x90) = (long)pvVar11 + sVar22;
      *(ulong *)(this + 0x98) = (long)pvVar11 + uVar21;
      if (pvVar20 != (void *)0x0) {
        operator_delete(pvVar20);
      }
    }
    std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::reserve
              ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0xa0),
               (long)param_6);
    std::__ndk1::vector<cocos2d::Mat3,std::__ndk1::allocator<cocos2d::Mat3>>::reserve
              ((vector<cocos2d::Mat3,std::__ndk1::allocator<cocos2d::Mat3>> *)(this + 0xb8),
               (long)param_6);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_d8,"event_scene_after_render_visit");
    local_a0 = &PTR_FUN_016d26b8;
    pBStack_98 = this;
    local_80 = &local_a0;
    uVar12 = EventListenerCustom::create((basic_string *)local_d8,(function *)&local_a0);
    *(undefined8 *)(this + 0x300) = uVar12;
    if (&local_a0 == local_80) {
      pcVar14 = (code *)(*local_80)[4];
LAB_00d0feb4:
      (*pcVar14)();
    }
    else if (local_80 != (undefined ***)0x0) {
      pcVar14 = (code *)(*local_80)[5];
      goto LAB_00d0feb4;
    }
    if (((byte)local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
      Ref::retain(*(Ref **)(this + 0x300));
      lVar13 = Director::getInstance();
      uVar19 = 1;
      EventDispatcher::addEventListenerWithFixedPriority
                (*(EventDispatcher **)(lVar13 + 0xb0),*(EventListener **)(this + 0x300),1);
      goto LAB_00d0fef4;
    }
  }
  uVar19 = 0;
LAB_00d0fef4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::MeshVertexData::create(int, int, std::__ndk1::vector<cocos2d::MeshVertexAttrib,
   std::__ndk1::allocator<cocos2d::MeshVertexAttrib> > const&, int) */

Ref * cocos2d::MeshVertexData::create(int param_1,int param_2,vector *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  Ref *this;
  undefined8 uVar5;
  Ref *pRVar6;
  IndexBuffer *pIVar7;
  undefined4 *puVar8;
  int iVar9;
  AABB aAStack_88 [24];
  MeshIndexData *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
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
  uVar5 = VertexBuffer::create(param_2,param_1,0x88e4,1);
  *(undefined8 *)(this + 0x30) = uVar5;
  pRVar6 = (Ref *)VertexData::create();
  *(Ref **)(this + 0x28) = pRVar6;
  if (pRVar6 != (Ref *)0x0) {
    Ref::retain(pRVar6);
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0x30));
  }
  puVar8 = *(undefined4 **)param_3;
  puVar3 = *(undefined4 **)(param_3 + 8);
  if (puVar8 != puVar3) {
    iVar9 = 0;
    do {
      local_60 = *puVar8;
      local_68 = NEON_rev64(*(undefined8 *)(puVar8 + 1),4);
      local_70 = (MeshIndexData *)(CONCAT44(iVar9,(int)local_70) & 0xffffffffffffff00);
      VertexData::setStream
                (*(VertexData **)(this + 0x28),*(VertexBuffer **)(this + 0x30),
                 (VertexStreamAttribute *)&local_70);
      piVar1 = puVar8 + 3;
      puVar8 = puVar8 + 4;
      iVar9 = *piVar1 + iVar9;
    } while (puVar3 != puVar8);
  }
  if ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)
      (this + 0x50) !=
      (vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)param_3
     ) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::assign<cocos2d::MeshVertexAttrib*>
              ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)(this + 0x50),*(MeshVertexAttrib **)param_3,*(MeshVertexAttrib **)(param_3 + 8));
  }
  pIVar7 = (IndexBuffer *)IndexBuffer::create(0,param_4,0x88e4,1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,"");
  AABB::AABB(aAStack_88);
  pRVar6 = (Ref *)MeshIndexData::create
                            ((basic_string *)&local_70,(MeshVertexData *)this,pIVar7,aAStack_88);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  puVar2 = *(undefined8 **)(this + 0x40);
  local_70 = (MeshIndexData *)pRVar6;
  if (puVar2 == *(undefined8 **)(this + 0x48)) {
    std::__ndk1::vector<cocos2d::MeshIndexData*,std::__ndk1::allocator<cocos2d::MeshIndexData*>>::
    __push_back_slow_path<cocos2d::MeshIndexData*const&>
              ((vector<cocos2d::MeshIndexData*,std::__ndk1::allocator<cocos2d::MeshIndexData*>> *)
               (this + 0x38),&local_70);
  }
  else {
    *puVar2 = pRVar6;
    *(undefined8 **)(this + 0x40) = puVar2 + 1;
  }
  Ref::retain((Ref *)local_70);
  Ref::autorelease(this);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


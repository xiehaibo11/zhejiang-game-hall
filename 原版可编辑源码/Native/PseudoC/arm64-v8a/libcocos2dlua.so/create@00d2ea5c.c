
/* cocos2d::Mesh::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::MeshIndexData*, cocos2d::MeshSkin*) */

Mesh * cocos2d::Mesh::create(basic_string *param_1,MeshIndexData *param_2,MeshSkin *param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  Mesh *this;
  Ref *pRVar3;
  
  this = operator_new(0x2c0,(nothrow_t *)&std::nothrow);
  if (this != (Mesh *)0x0) {
    Mesh(this);
  }
  Ref::autorelease((Ref *)this);
  bindMeshCommand(this);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50),(char *)pbVar2,uVar1);
  }
  pRVar3 = *(Ref **)(this + 0x128);
  if (pRVar3 != (Ref *)param_2) {
    if (param_2 != (MeshIndexData *)0x0) {
      Ref::retain((Ref *)param_2);
      pRVar3 = *(Ref **)(this + 0x128);
    }
    if (pRVar3 != (Ref *)0x0) {
      Ref::release(pRVar3);
    }
    *(MeshIndexData **)(this + 0x128) = param_2;
    calculateAABB(this);
    bindMeshCommand(this);
  }
  pRVar3 = *(Ref **)(this + 0x40);
  if (pRVar3 != (Ref *)param_3) {
    if (param_3 != (MeshSkin *)0x0) {
      Ref::retain((Ref *)param_3);
      pRVar3 = *(Ref **)(this + 0x40);
    }
    if (pRVar3 != (Ref *)0x0) {
      Ref::release(pRVar3);
    }
    *(MeshSkin **)(this + 0x40) = param_3;
    calculateAABB(this);
  }
  return this;
}


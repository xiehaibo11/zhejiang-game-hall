
/* cocos2d::MeshIndexData::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::MeshVertexData*, cocos2d::IndexBuffer*,
   cocos2d::AABB const&) */

Ref * cocos2d::MeshIndexData::create
                (basic_string *param_1,MeshVertexData *param_2,IndexBuffer *param_3,AABB *param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  Ref *this;
  undefined8 uVar3;
  undefined8 uVar4;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR__MeshIndexData_016d35a0;
    AABB::AABB((AABB *)(this + 0x38));
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 4;
  }
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
  *(IndexBuffer **)(this + 0x28) = param_3;
  *(MeshVertexData **)(this + 0x30) = param_2;
  Ref::retain((Ref *)param_3);
  uVar4 = *(undefined8 *)(param_4 + 8);
  uVar3 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar3;
  Ref::autorelease(this);
  return this;
}


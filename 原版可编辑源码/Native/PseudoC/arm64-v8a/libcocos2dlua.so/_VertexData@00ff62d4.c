
/* cocos2d::VertexData::~VertexData() */

void __thiscall cocos2d::VertexData::~VertexData(VertexData *this)

{
  bool bVar1;
  VertexData *pVVar2;
  long lVar3;
  __tree<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>>>
  *this_00;
  VertexData *pVVar4;
  
  *(undefined ***)this = &PTR__VertexData_017247d8;
  this_00 = (__tree<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>>>
             *)(this + 0x28);
  pVVar4 = *(VertexData **)this_00;
  while (pVVar4 != this + 0x30) {
    Ref::release(*(Ref **)(pVVar4 + 0x28));
    pVVar2 = *(VertexData **)(pVVar4 + 8);
    if (*(VertexData **)(pVVar4 + 8) == (VertexData *)0x0) {
      pVVar2 = pVVar4 + 0x10;
      bVar1 = *(VertexData **)*(VertexData **)pVVar2 != pVVar4;
      pVVar4 = *(VertexData **)pVVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pVVar2;
          pVVar2 = (VertexData *)(lVar3 + 0x10);
          pVVar4 = *(VertexData **)pVVar2;
        } while (*(long *)pVVar4 != lVar3);
      }
    }
    else {
      do {
        pVVar4 = pVVar2;
        pVVar2 = *(VertexData **)pVVar4;
      } while (*(VertexData **)pVVar4 != (VertexData *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>>>
  ::destroy(this_00,*(__tree_node **)(this + 0x30));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(VertexData **)(this + 0x28) = this + 0x30;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,cocos2d::VertexData::BufferAttribute>>>
  ::destroy(this_00,(__tree_node *)0x0);
  Ref::~Ref((Ref *)this);
  return;
}


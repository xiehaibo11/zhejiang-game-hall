
/* cocos2d::VertexData::VertexData() */

void __thiscall cocos2d::VertexData::VertexData(VertexData *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__VertexData_017247d8;
  *(undefined8 *)(this + 0x30) = 0;
  *(VertexData **)(this + 0x28) = this + 0x30;
  return;
}


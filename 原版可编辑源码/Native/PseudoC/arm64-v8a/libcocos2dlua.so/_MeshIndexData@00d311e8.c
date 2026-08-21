
/* cocos2d::MeshIndexData::~MeshIndexData() */

void __thiscall cocos2d::MeshIndexData::~MeshIndexData(MeshIndexData *this)

{
  *(undefined ***)this = &PTR__MeshIndexData_016d35a0;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Ref::~Ref((Ref *)this);
  return;
}


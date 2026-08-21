
/* cocos2d::Mesh::setMeshIndexData(cocos2d::MeshIndexData*) */

void __thiscall cocos2d::Mesh::setMeshIndexData(Mesh *this,MeshIndexData *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x128);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (MeshIndexData *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x128);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(MeshIndexData **)(this + 0x128) = param_1;
    calculateAABB(this);
    bindMeshCommand(this);
    return;
  }
  return;
}


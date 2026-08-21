
/* cocos2d::Mesh::setSkin(cocos2d::MeshSkin*) */

void __thiscall cocos2d::Mesh::setSkin(Mesh *this,MeshSkin *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x40);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (MeshSkin *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x40);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(MeshSkin **)(this + 0x40) = param_1;
    calculateAABB(this);
    return;
  }
  return;
}



/* cocos2d::MeshSkin::getRootBone() const */

Bone3D * __thiscall cocos2d::MeshSkin::getRootBone(MeshSkin *this)

{
  long lVar1;
  Bone3D *this_00;
  
  if (*(undefined8 **)(this + 0x30) == *(undefined8 **)(this + 0x28)) {
    this_00 = (Bone3D *)0x0;
  }
  else {
    this_00 = (Bone3D *)**(undefined8 **)(this + 0x28);
    lVar1 = Bone3D::getParentBone(this_00);
    while (lVar1 != 0) {
      this_00 = (Bone3D *)Bone3D::getParentBone(this_00);
      lVar1 = Bone3D::getParentBone(this_00);
    }
  }
  return this_00;
}


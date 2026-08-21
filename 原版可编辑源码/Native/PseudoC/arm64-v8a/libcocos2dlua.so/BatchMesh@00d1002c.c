
/* cocos2d::BatchMesh::BatchMesh() */

void __thiscall cocos2d::BatchMesh::BatchMesh(BatchMesh *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__BatchMesh_016d2680;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(BatchMesh **)(this + 0x40) = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  memset(this + 0x58,0,0x228);
  *(undefined4 *)(this + 0x283) = 0x1010101;
  *(undefined2 *)(this + 0x287) = 0x100;
  *(undefined4 *)(this + 0x28c) = 0xffffffff;
  Vec3::Vec3((Vec3 *)(this + 0x294));
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x2b0));
  *(undefined8 *)(this + 0x300) = 0;
  this[0x2c2] = (BatchMesh)0x1;
  *(undefined2 *)(this + 0x2c0) = 0x100;
  *(undefined2 *)(this + 0x280) = 1;
  this[0x282] = (BatchMesh)0x0;
  return;
}


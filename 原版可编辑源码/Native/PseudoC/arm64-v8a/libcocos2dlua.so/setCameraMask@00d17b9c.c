
/* cocos2d::BatchSprite3D::setCameraMask(unsigned short, bool) */

void __thiscall
cocos2d::BatchSprite3D::setCameraMask(BatchSprite3D *this,ushort param_1,bool param_2)

{
  BatchMesh *this_00;
  
  Node::setCameraMask((Node *)this,param_1,param_2);
  this_00 = *(BatchMesh **)(this + 0x338);
  this[0x2fa] = (BatchSprite3D)0x1;
  if (this_00 != (BatchMesh *)0x0) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
  }
  return;
}


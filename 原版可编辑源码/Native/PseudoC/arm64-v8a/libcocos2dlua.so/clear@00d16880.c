
/* cocos2d::BatchSprite3D::clear() */

void __thiscall cocos2d::BatchSprite3D::clear(BatchSprite3D *this)

{
  BatchMesh *this_00;
  
  this_00 = *(BatchMesh **)(this + 0x338);
  if (this_00 != (BatchMesh *)0x0) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
  }
  return;
}



/* cocos2d::BatchSprite3D::updateVisual() */

void __thiscall cocos2d::BatchSprite3D::updateVisual(BatchSprite3D *this)

{
  BatchMesh *this_00;
  
  if ((this[0x1f9] != (BatchSprite3D)0x0) &&
     (this_00 = *(BatchMesh **)(this + 0x338), this_00 != (BatchMesh *)0x0)) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
  }
  return;
}



/* cocos2d::BatchSprite3D::setVisible(bool) */

void __thiscall cocos2d::BatchSprite3D::setVisible(BatchSprite3D *this,bool param_1)

{
  BatchMesh *this_00;
  
  if ((BatchSprite3D)param_1 != this[0x1f9]) {
    Node::setVisible((Node *)this,param_1);
    this_00 = *(BatchMesh **)(this + 0x338);
    if (this_00 != (BatchMesh *)0x0) {
      BatchMesh::clear(this_00);
      *(undefined2 *)(this_00 + 0x280) = 1;
    }
  }
  return;
}


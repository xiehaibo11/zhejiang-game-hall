
/* cocos2d::BatchSprite3D::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::BatchSprite3D::setColor(BatchSprite3D *this,Color3B *param_1)

{
  BatchMesh *this_00;
  
  Node::setColor((Node *)this,param_1);
  this_00 = *(BatchMesh **)(this + 0x338);
  if (this_00 != (BatchMesh *)0x0) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
  }
  return;
}


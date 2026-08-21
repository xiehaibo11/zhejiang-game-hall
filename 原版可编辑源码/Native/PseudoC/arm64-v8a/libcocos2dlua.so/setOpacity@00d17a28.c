
/* cocos2d::BatchSprite3D::setOpacity(unsigned char) */

void __thiscall cocos2d::BatchSprite3D::setOpacity(BatchSprite3D *this,uchar param_1)

{
  BatchMesh *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(BatchMesh **)(this + 0x338);
  fVar1 = *(float *)(this + 0x300);
  fVar2 = (float)param_1 / 255.0;
  if ((((this_00[0x283] == (BatchMesh)0x0) || (fVar2 == fVar1)) &&
      ((1.0 <= fVar2 || (fVar1 != 1.0)))) &&
     (((fVar2 == fVar1 || (fVar2 != 1.0)) || (1.0 <= fVar1)))) {
    return;
  }
  if (this_00 != (BatchMesh *)0x0) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
  }
  *(float *)(this + 0x300) = fVar2;
  Node::setOpacity((Node *)this,param_1);
  return;
}



/* cocos2d::BatchSprite3D::~BatchSprite3D() */

void __thiscall cocos2d::BatchSprite3D::~BatchSprite3D(BatchSprite3D *this)

{
  void *pvVar1;
  BatchMesh *this_00;
  
  this_00 = *(BatchMesh **)(this + 0x338);
  *(undefined ***)this = &PTR__BatchSprite3D_016d27b8;
  if (this_00 != (BatchMesh *)0x0) {
    BatchMesh::clear(this_00);
    *(undefined2 *)(this_00 + 0x280) = 1;
    if (*(Ref **)(this + 0x338) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x338));
    }
  }
  pvVar1 = *(void **)(this + 0x358);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x360) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x340);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x348) = pvVar1;
    operator_delete(pvVar1);
  }
  Node::~Node((Node *)this);
  return;
}


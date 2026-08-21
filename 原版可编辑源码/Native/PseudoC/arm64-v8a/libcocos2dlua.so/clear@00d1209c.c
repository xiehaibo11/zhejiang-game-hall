
/* cocos2d::BatchMesh::clear() */

void __thiscall cocos2d::BatchMesh::clear(BatchMesh *this)

{
  Mat4 *pMVar1;
  long lVar2;
  Mat4 *pMVar3;
  Mat4 *this_00;
  long lVar4;
  
  pMVar1 = *(Mat4 **)(this + 0xa0);
  pMVar3 = *(Mat4 **)(this + 0xa8);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x88);
  while (pMVar3 != pMVar1) {
    pMVar3 = pMVar3 + -0x40;
    Mat4::~Mat4(pMVar3);
  }
  lVar2 = *(long *)(this + 0xd0);
  lVar4 = *(long *)(this + 0xd8);
  *(Mat4 **)(this + 0xa8) = pMVar1;
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 0xb8);
  for (; lVar4 != lVar2; lVar4 = lVar4 + -0x70) {
    Vec4::~Vec4((Vec4 *)(lVar4 + -0x18));
    Mat4::~Mat4((Mat4 *)(lVar4 + -0x60));
  }
  *(long *)(this + 0xd8) = lVar2;
  pMVar1 = *(Mat4 **)(this + 0x148);
  pMVar3 = *(Mat4 **)(this + 0x150);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(this + 0x100);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(this + 0x118);
  while (pMVar3 != pMVar1) {
    pMVar3 = pMVar3 + -0x40;
    Mat4::~Mat4(pMVar3);
  }
  pMVar3 = *(Mat4 **)(this + 0x130);
  this_00 = *(Mat4 **)(this + 0x138);
  *(Mat4 **)(this + 0x150) = pMVar1;
  *(undefined8 *)(this + 0x168) = *(undefined8 *)(this + 0x160);
  while (this_00 != pMVar3) {
    this_00 = this_00 + -0x40;
    Mat4::~Mat4(this_00);
  }
  *(Mat4 **)(this + 0x138) = pMVar3;
  return;
}


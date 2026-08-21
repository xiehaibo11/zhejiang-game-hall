
/* cocos2d::MeshSkin::~MeshSkin() */

void __thiscall cocos2d::MeshSkin::~MeshSkin(MeshSkin *this)

{
  Mat4 *pMVar1;
  long lVar2;
  long lVar3;
  MeshSkin *pMVar4;
  undefined8 *puVar5;
  Mat4 *this_00;
  undefined8 *puVar6;
  Mat4 *pMVar7;
  
  *(undefined ***)this = &PTR__MeshSkin_016d3568;
  pMVar4 = this + 0x28;
  puVar5 = *(undefined8 **)pMVar4;
  puVar6 = *(undefined8 **)(this + 0x30);
  if (puVar5 != puVar6) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar6 != puVar5);
    puVar5 = *(undefined8 **)pMVar4;
  }
  lVar2 = *(long *)(this + 0x68);
  *(undefined8 **)(this + 0x30) = puVar5;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      lVar3 = lVar3 << 4;
      do {
        Vec4::~Vec4((Vec4 *)(lVar2 + -0x10 + lVar3));
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
    *(undefined8 *)(this + 0x68) = 0;
  }
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  pMVar7 = *(Mat4 **)(this + 0x40);
  if (pMVar7 != (Mat4 *)0x0) {
    this_00 = *(Mat4 **)(this + 0x48);
    pMVar1 = pMVar7;
    if (this_00 != pMVar7) {
      do {
        this_00 = this_00 + -0x40;
        Mat4::~Mat4(this_00);
      } while (pMVar7 != this_00);
      pMVar1 = *(Mat4 **)(this + 0x40);
    }
    *(Mat4 **)(this + 0x48) = pMVar7;
    operator_delete(pMVar1);
  }
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar6 = *(undefined8 **)(this + 0x30);
  if (puVar5 != puVar6) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar6 != puVar5);
    puVar5 = *(undefined8 **)pMVar4;
  }
  *(undefined8 **)(this + 0x30) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar5;
    operator_delete(puVar5);
  }
  Ref::~Ref((Ref *)this);
  return;
}


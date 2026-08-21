
/* cocos2d::MeshSkin::removeAllBones() */

void __thiscall cocos2d::MeshSkin::removeAllBones(MeshSkin *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar5 != puVar1) {
    do {
      puVar4 = puVar5 + 1;
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar4;
    } while (puVar1 != puVar4);
    puVar5 = *(undefined8 **)(this + 0x28);
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
    return;
  }
  return;
}


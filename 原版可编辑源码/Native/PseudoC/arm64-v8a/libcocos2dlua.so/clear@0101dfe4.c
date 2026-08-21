
/* cocos2d::NavMeshDebugDraw::clear() */

void __thiscall cocos2d::NavMeshDebugDraw::clear(NavMeshDebugDraw *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(this + 8);
  for (lVar3 = *(long *)(this + 0x10); lVar3 != lVar1; lVar3 = lVar3 + -0x1c) {
    Vec4::~Vec4((Vec4 *)(lVar3 + -0x10));
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  puVar2 = *(undefined8 **)(this + 0x28);
  *(long *)(this + 0x10) = lVar1;
  if (puVar4 != puVar2) {
    do {
                    /* catch() { ... } // from try @ 0101df38 with catch @ 0101e03c */
      if ((void *)*puVar4 != (void *)0x0) {
        operator_delete((void *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x20);
  }
  *(undefined8 **)(this + 0x28) = puVar4;
  return;
}



/* btCollisionWorld::~btCollisionWorld() */

void __thiscall btCollisionWorld::~btCollisionWorld(btCollisionWorld *this)

{
  void *pvVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(this + 0xc);
  pvVar1 = *(void **)(this + 0x18);
  *(undefined ***)this = &PTR__btCollisionWorld_01731a80;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)pvVar1 + lVar5 * 8);
      lVar4 = *(long *)(lVar6 + 0xc0);
      if (lVar4 != 0) {
        plVar2 = (long *)(**(code **)(**(long **)(this + 0x60) + 0x48))();
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar4,*(undefined8 *)(this + 0x28));
        (**(code **)(**(long **)(this + 0x60) + 0x18))
                  (*(long **)(this + 0x60),lVar4,*(undefined8 *)(this + 0x28));
        *(undefined8 *)(lVar6 + 0xc0) = 0;
        iVar3 = *(int *)(this + 0xc);
        pvVar1 = *(void **)(this + 0x18);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if (pvVar1 != (void *)0x0) {
    if (this[0x20] != (btCollisionWorld)0x0) {
      btAlignedFreeInternal(pvVar1);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (btCollisionWorld)0x1;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}


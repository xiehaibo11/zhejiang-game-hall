
/* cocos2d::Animate3D::~Animate3D() */

void __thiscall cocos2d::Animate3D::~Animate3D(Animate3D *this)

{
  Animate3D *pAVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  
  *(undefined ***)this = &PTR__Animate3D_016d1fe0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016d2040;
  removeFromMap(this);
  for (plVar7 = *(long **)(this + 0x128); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((long *)plVar7[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[3] + 8))();
    }
  }
  pAVar1 = this + 0x118;
  if (*(long *)(this + 0x130) != 0) {
    puVar2 = *(void **)(this + 0x128);
    while (puVar2 != (void *)0x0) {
      pvVar8 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = pvVar8;
    }
    lVar5 = *(long *)(this + 0x120);
    *(undefined8 *)(this + 0x128) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)pAVar1 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(this + 0x130) = 0;
  }
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  puVar2 = *(void **)(this + 0x150);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x140);
  *(undefined8 *)(this + 0x140) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar2 = *(void **)(this + 0x128);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)pAVar1;
  *(undefined8 *)pAVar1 = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar2 = *(void **)(this + 0x100);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    puVar3 = (void *)puVar2[5];
    while (puVar3 != (void *)0x0) {
      pvVar4 = (void *)*puVar3;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar4;
    }
    pvVar4 = (void *)puVar2[3];
    puVar2[3] = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0xf0);
  *(undefined8 *)(this + 0xf0) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar2 = *(void **)(this + 0xd8);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)(this + 200);
  *(undefined8 *)(this + 200) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  puVar2 = *(void **)(this + 0xb0);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  Action::~Action((Action *)this);
  return;
}


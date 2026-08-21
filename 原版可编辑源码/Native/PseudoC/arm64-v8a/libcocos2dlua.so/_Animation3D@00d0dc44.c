
/* cocos2d::Animation3D::~Animation3D() */

void __thiscall cocos2d::Animation3D::~Animation3D(Animation3D *this)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(this + 0x38);
  *(undefined ***)this = &PTR__Animation3D_016d2080;
  if (plVar2 != (long *)0x0) {
    do {
      puVar3 = (undefined8 *)plVar2[5];
      if (puVar3 != (undefined8 *)0x0) {
        if ((Ref *)*puVar3 != (Ref *)0x0) {
          Ref::release((Ref *)*puVar3);
          *puVar3 = 0;
        }
        if ((Ref *)puVar3[1] != (Ref *)0x0) {
          Ref::release((Ref *)puVar3[1]);
          puVar3[1] = 0;
        }
        if ((Ref *)puVar3[2] != (Ref *)0x0) {
          Ref::release((Ref *)puVar3[2]);
        }
        operator_delete(puVar3);
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    puVar3 = *(void **)(this + 0x38);
    while (puVar3 != (void *)0x0) {
      pvVar1 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar1;
    }
  }
  pvVar1 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  Ref::~Ref((Ref *)this);
  return;
}



/* cocos2d::renderer::Scene::~Scene() */

void __thiscall cocos2d::renderer::Scene::~Scene(Scene *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar2 != *(undefined8 **)(this + 0x50)) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(this + 0x50));
    puVar2 = *(undefined8 **)(this + 0x48);
  }
  *(undefined8 **)(this + 0x50) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x50) = puVar2;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  puVar2 = *(undefined8 **)(this + 0x18);
  if (puVar2 != *(undefined8 **)(this + 0x20)) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(this + 0x20));
    puVar2 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x20) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)this;
  if (puVar2 != *(undefined8 **)(this + 8)) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(this + 8));
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}


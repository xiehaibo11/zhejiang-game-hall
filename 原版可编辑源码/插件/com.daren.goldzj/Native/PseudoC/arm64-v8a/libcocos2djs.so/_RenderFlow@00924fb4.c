
/* cocos2d::renderer::RenderFlow::~RenderFlow() */

void __thiscall cocos2d::renderer::RenderFlow::~RenderFlow(RenderFlow *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ModelBatcher *this_00;
  undefined8 *puVar4;
  
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  this_00 = *(ModelBatcher **)this;
  *(undefined8 *)(this + 0x48) = 0;
  if (this_00 != (ModelBatcher *)0x0) {
    ModelBatcher::~ModelBatcher(this_00);
    operator_delete(this_00);
  }
  puVar4 = *(undefined8 **)(this + 0x28);
  *(undefined8 *)this = 0;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = *(undefined8 **)(this + 0x30);
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar2 = puVar3 + -3;
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        puVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x28);
  }
  *(undefined8 **)(this + 0x30) = puVar4;
  operator_delete(puVar2);
  return;
}


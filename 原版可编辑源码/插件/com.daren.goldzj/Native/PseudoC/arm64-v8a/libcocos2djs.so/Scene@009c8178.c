
/* cocos2d::renderer::Scene::Scene() */

void __thiscall cocos2d::renderer::Scene::Scene(Scene *this)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 009c7fcc with catch @ 009c8178 */
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = operator_new(4000);
  *(void **)(this + 0x38) = pvVar1;
  *(void **)(this + 0x30) = pvVar1;
  *(long *)(this + 0x40) = (long)pvVar1 + 4000;
  return;
}


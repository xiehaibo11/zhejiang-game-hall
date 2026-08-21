
/* cocos2d::Scene::~Scene() */

void __thiscall cocos2d::Scene::~Scene(Scene *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__Scene_0170fe10;
                    /* catch() { ... } // from try @ 00f3c9a4 with catch @ 00f3c9d8 */
  if (*(Ref **)(this + 0x350) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x350));
  }
  if (*(Ref **)(this + 0x358) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x358));
  }
  if (*(Ref **)(this + 0x360) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x360));
  }
  lVar1 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 800));
  if (*(Ref **)(this + 800) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 800));
  }
  if (*(Ref **)(this + 0x328) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x328));
  }
  if (*(long **)(this + 0x348) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x348) + 0xb8))();
  }
  pvVar2 = *(void **)(this + 0x330);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x338) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x2f8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x300) = pvVar2;
    operator_delete(pvVar2);
  }
  Node::~Node((Node *)this);
  return;
}


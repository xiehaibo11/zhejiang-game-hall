
/* ListenerComponent::~ListenerComponent() */

void __thiscall ListenerComponent::~ListenerComponent(ListenerComponent *this)

{
  long lVar1;
  ListenerComponent *pLVar2;
  code *pcVar3;
  
                    /* try { // try from 00dd9880 to 00ed988f has its CatchHandler @ 00dd9cf0 */
                    /* try { // try from 00dd9894 to 00ed98a7 has its CatchHandler @ 00dd9cf4 */
  *(undefined ***)this = &PTR__ListenerComponent_016e2478;
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)(this + 0xa8));
  cocos2d::Ref::release(*(Ref **)(this + 0xa8));
  pLVar2 = *(ListenerComponent **)(this + 0x90);
  if (this + 0x70 == pLVar2) {
    pcVar3 = *(code **)(*(long *)pLVar2 + 0x20);
  }
  else {
    if (pLVar2 == (ListenerComponent *)0x0) goto LAB_00dd98dc;
    pcVar3 = *(code **)(*(long *)pLVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00dd98dc:
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  cocos2d::Component::~Component((Component *)this);
  return;
}


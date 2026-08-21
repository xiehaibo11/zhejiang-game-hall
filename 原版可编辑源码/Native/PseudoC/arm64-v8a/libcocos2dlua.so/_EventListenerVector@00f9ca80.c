
/* cocos2d::EventDispatcher::EventListenerVector::~EventListenerVector() */

void __thiscall
cocos2d::EventDispatcher::EventListenerVector::~EventListenerVector(EventListenerVector *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9ca18 with catch @ 00f9ca80
                        */
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)this;
  *(undefined8 *)(this + 8) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


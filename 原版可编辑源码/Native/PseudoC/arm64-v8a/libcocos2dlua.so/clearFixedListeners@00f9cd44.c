
/* cocos2d::EventDispatcher::EventListenerVector::clearFixedListeners() */

void __thiscall
cocos2d::EventDispatcher::EventListenerVector::clearFixedListeners(EventListenerVector *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    puVar2[1] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    *(undefined8 *)this = 0;
  }
  return;
}


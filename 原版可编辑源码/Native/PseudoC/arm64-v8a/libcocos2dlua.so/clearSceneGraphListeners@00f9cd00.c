
/* cocos2d::EventDispatcher::EventListenerVector::clearSceneGraphListeners() */

void __thiscall
cocos2d::EventDispatcher::EventListenerVector::clearSceneGraphListeners(EventListenerVector *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    puVar2[1] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


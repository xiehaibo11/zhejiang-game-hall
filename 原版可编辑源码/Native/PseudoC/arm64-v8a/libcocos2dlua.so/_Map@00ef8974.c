
/* cocos2d::Map<int, cocos2d::Primitive*>::~Map() */

void __thiscall cocos2d::Map<int,cocos2d::Primitive*>::~Map(Map<int,cocos2d::Primitive*> *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[3]);
                    /* try { // try from 00ef8998 to 00ff8bf3 has its CatchHandler @ 00ef8998
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef8998 with catch @ 00ef8998
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef8bfc with catch @ 00ef8998
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef8c40 with catch @ 00ef8998
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef8d60 with catch @ 00ef8998
                        */
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar1 = *(void **)(this + 0x10);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar5);
  return;
}


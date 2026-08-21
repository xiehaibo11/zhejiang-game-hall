
/* cocos2d::FontAtlas::~FontAtlas() */

void __thiscall cocos2d::FontAtlas::~FontAtlas(FontAtlas *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
                    /* try { // try from 00efcc64 to 00ffcd6b has its CatchHandler @ 00efcc64
                       catch() { ... } // from try @ 00efcc64 with catch @ 00efcc64
                       catch() { ... } // from try @ 00efceb0 with catch @ 00efcc64 */
  *(undefined ***)this = &PTR__FontAtlas_016fd000;
  if ((*(long *)(this + 0x88) != 0) && (*(long *)(this + 0xc0) != 0)) {
    lVar2 = Director::getInstance();
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = 0;
  }
  Ref::release(*(Ref **)(this + 0x80));
  for (plVar4 = *(long **)(this + 0x38); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[3]);
  }
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa0));
  }
  puVar1 = *(void **)(this + 0x60);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  Ref::~Ref((Ref *)this);
  return;
}


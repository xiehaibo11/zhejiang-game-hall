
/* cocos2d::FontAtlas::~FontAtlas() */

void __thiscall cocos2d::FontAtlas::~FontAtlas(FontAtlas *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x88);
  *(undefined ***)this = &PTR__FontAtlas_01c6c368;
                    /* try { // try from 009f27a0 to 00af27a7 has its CatchHandler @ 009f2a64 */
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x90);
                    /* try { // try from 009f27a8 to 00af28db has its CatchHandler @ 009f2750 */
    puVar1 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0xb;
        (**(code **)*puVar3)(puVar3);
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)(this + 0x88);
    }
    *(undefined8 **)(this + 0x90) = puVar4;
    operator_delete(puVar1);
  }
  *(undefined ***)(this + 0x30) = &PTR__FontAtlasFrame_01c6c348;
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar4 = *(void **)(this + 0x18);
  while (puVar4 != (void *)0x0) {
    pvVar2 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


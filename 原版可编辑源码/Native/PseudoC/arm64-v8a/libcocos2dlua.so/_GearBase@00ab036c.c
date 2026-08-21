
/* fairygui::GearBase::~GearBase() */

void __thiscall fairygui::GearBase::~GearBase(GearBase *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
                    /* catch() { ... } // from try @ 00aafca8 with catch @ 00ab0388 */
  *(undefined ***)this = &PTR__GearBase_016a9f40;
  if (pvVar1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00aafc98 with catch @ 00ab0398 */
    if (*(GTweener **)((long)pvVar1 + 0x18) != (GTweener *)0x0) {
                    /* catch() { ... } // from try @ 00aafbe0 with catch @ 00ab039c */
      GTweener::kill(*(GTweener **)((long)pvVar1 + 0x18),false);
      pvVar1 = *(void **)(this + 0x18);
      if (pvVar1 == (void *)0x0) goto LAB_00ab03b4;
    }
    operator_delete(pvVar1);
  }
LAB_00ab03b4:
                    /* catch() { ... } // from try @ 00aafbd0 with catch @ 00ab03b4 */
  operator_delete(this);
  return;
}


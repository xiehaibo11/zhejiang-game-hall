
/* fairygui::GearBase::~GearBase() */

void __thiscall fairygui::GearBase::~GearBase(GearBase *this)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00aafd14 with catch @ 00ab031c */
                    /* catch() { ... } // from try @ 00aafc4c with catch @ 00ab0320 */
                    /* catch() { ... } // from try @ 00aafbf8 with catch @ 00ab0324 */
  pvVar1 = *(void **)(this + 0x18);
                    /* catch() { ... } // from try @ 00aafb3c with catch @ 00ab0328 */
                    /* catch() { ... } // from try @ 00aafb0c with catch @ 00ab032c */
  *(undefined ***)this = &PTR__GearBase_016a9f40;
  if (pvVar1 != (void *)0x0) {
    if (*(GTweener **)((long)pvVar1 + 0x18) != (GTweener *)0x0) {
                    /* catch() { ... } // from try @ 00aafec4 with catch @ 00ab0344 */
                    /* catch() { ... } // from try @ 00aafeb0 with catch @ 00ab0348 */
      GTweener::kill(*(GTweener **)((long)pvVar1 + 0x18),false);
                    /* catch() { ... } // from try @ 00aafea0 with catch @ 00ab034c */
      pvVar1 = *(void **)(this + 0x18);
                    /* catch() { ... } // from try @ 00aafdc8 with catch @ 00ab0350 */
      if (pvVar1 == (void *)0x0) goto LAB_00ab0358;
    }
    operator_delete(pvVar1);
  }
LAB_00ab0358:
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


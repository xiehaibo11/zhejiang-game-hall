
/* fairygui::GearText::~GearText() */

void __thiscall fairygui::GearText::~GearText(GearText *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* catch() { ... } // from try @ 00ab5740 with catch @ 00ab5840 */
  *(undefined ***)this = &PTR__GearText_016aa658;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  puVar1 = *(void **)(this + 0x30);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  GearBase::~GearBase((GearBase *)this);
  return;
}


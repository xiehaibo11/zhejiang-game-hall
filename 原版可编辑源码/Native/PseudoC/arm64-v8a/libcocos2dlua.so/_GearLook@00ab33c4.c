
/* fairygui::GearLook::~GearLook() */

void __thiscall fairygui::GearLook::~GearLook(GearLook *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__GearLook_016aa2d8;
  puVar1 = *(void **)(this + 0x30);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
                    /* try { // try from 00ab3414 to 00bb3447 has its CatchHandler @ 00ab3508 */
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
  operator_delete(this);
  return;
}



/* fairygui::GearIcon::~GearIcon() */

void __thiscall fairygui::GearIcon::~GearIcon(GearIcon *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00ab2f64 to 00bb2f77 has its CatchHandler @ 00ab2ffc */
  *(undefined ***)this = &PTR__GearIcon_016aa278;
                    /* try { // try from 00ab2f7c to 00bb2faf has its CatchHandler @ 00ab3000 */
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  puVar1 = *(void **)(this + 0x30);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
                    /* try { // try from 00ab2fb0 to 00bb304b has its CatchHandler @ 00ab2cb0 */
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


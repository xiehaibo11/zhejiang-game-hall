
/* fairygui::GearLook::init() */

void __thiscall fairygui::GearLook::init(GearLook *this)

{
  GearLook GVar1;
  GearLook GVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
                    /* try { // try from 00ab3450 to 00bb346b has its CatchHandler @ 00ab3504 */
  lVar4 = *(long *)(this + 8);
  GVar1 = *(GearLook *)(lVar4 + 0xf6);
  GVar2 = *(GearLook *)(lVar4 + 0xf5);
                    /* try { // try from 00ab346c to 00bb349f has its CatchHandler @ 00ab33c0 */
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(lVar4 + 0xec);
  this[0x50] = GVar1;
  this[0x51] = GVar2;
  if (*(long *)(this + 0x38) != 0) {
    puVar3 = *(void **)(this + 0x30);
    while (puVar3 != (void *)0x0) {
                    /* try { // try from 00ab34a0 to 00bb34b3 has its CatchHandler @ 00ab3508 */
      pvVar6 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar6;
    }
                    /* try { // try from 00ab34b4 to 00bb3543 has its CatchHandler @ 00ab33c0 */
    lVar4 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}


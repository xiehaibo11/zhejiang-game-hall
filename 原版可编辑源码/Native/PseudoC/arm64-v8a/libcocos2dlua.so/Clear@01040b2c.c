
/* p2t::Triangle::Clear() */

void __thiscall p2t::Triangle::Clear(Triangle *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(this + 0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    if (*(Triangle **)(lVar1 + 0x20) != this) {
      puVar2 = (undefined8 *)(lVar1 + 0x28);
      if (*(Triangle **)(lVar1 + 0x28) != this) {
        puVar2 = (undefined8 *)(lVar1 + 0x30);
      }
    }
    *puVar2 = 0;
  }
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    if (*(Triangle **)(lVar1 + 0x20) != this) {
      puVar2 = (undefined8 *)(lVar1 + 0x28);
      if (*(Triangle **)(lVar1 + 0x28) != this) {
        puVar2 = (undefined8 *)(lVar1 + 0x30);
      }
    }
    *puVar2 = 0;
  }
  lVar1 = *(long *)(this + 0x30);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x20);
    if (*(Triangle **)(lVar1 + 0x20) != this) {
      puVar2 = (undefined8 *)(lVar1 + 0x28);
      if (*(Triangle **)(lVar1 + 0x28) != this) {
        puVar2 = (undefined8 *)(lVar1 + 0x30);
      }
    }
    *puVar2 = 0;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


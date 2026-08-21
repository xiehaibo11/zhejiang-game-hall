
/* btConvexPolyhedron::~btConvexPolyhedron() */

void __thiscall btConvexPolyhedron::~btConvexPolyhedron(btConvexPolyhedron *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__btConvexPolyhedron_01734738;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (this[0x60] != (btConvexPolyhedron)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x58));
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  uVar2 = (ulong)*(uint *)(this + 0x2c);
  this[0x60] = (btConvexPolyhedron)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  if (0 < (int)*(uint *)(this + 0x2c)) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(this + 0x38) + lVar3;
      if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
        if (*(char *)(lVar1 + 0x18) != '\0') {
          btAlignedFreeInternal(*(void **)(lVar1 + 0x10));
        }
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x30;
      *(undefined1 *)(lVar1 + 0x18) = 1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 8) = 0;
    } while (uVar2 != 0);
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    if (this[0x40] != (btConvexPolyhedron)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x38));
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  this[0x40] = (btConvexPolyhedron)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btConvexPolyhedron)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  this[0x20] = (btConvexPolyhedron)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}


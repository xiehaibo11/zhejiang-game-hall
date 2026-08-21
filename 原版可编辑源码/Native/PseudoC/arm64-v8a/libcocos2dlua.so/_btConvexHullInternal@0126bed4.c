
/* btConvexHullInternal::~btConvexHullInternal() */

void __thiscall btConvexHullInternal::~btConvexHullInternal(btConvexHullInternal *this)

{
  undefined8 *puVar1;
  
  if (*(void **)(this + 0x90) != (void *)0x0) {
    if (this[0x98] != (btConvexHullInternal)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x90));
    }
    *(undefined8 *)(this + 0x90) = 0;
  }
  puVar1 = *(undefined8 **)(this + 0x60);
  this[0x98] = (btConvexHullInternal)0x1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x60) = puVar1[2];
    btAlignedFreeInternal((void *)*puVar1);
    btAlignedFreeInternal(puVar1);
    puVar1 = *(undefined8 **)(this + 0x60);
  }
  while (puVar1 = *(undefined8 **)(this + 0x40), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x40) = puVar1[2];
    btAlignedFreeInternal((void *)*puVar1);
    btAlignedFreeInternal(puVar1);
  }
  while (puVar1 = *(undefined8 **)(this + 0x20), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x20) = puVar1[2];
    btAlignedFreeInternal((void *)*puVar1);
    btAlignedFreeInternal(puVar1);
  }
  return;
}



/* btUnionFind::Free() */

void __thiscall btUnionFind::Free(btUnionFind *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    if (this[0x18] != (btUnionFind)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (btUnionFind)0x1;
  *(undefined8 *)(this + 4) = 0;
  return;
}



/* btHashedSimplePairCache::~btHashedSimplePairCache() */

void __thiscall btHashedSimplePairCache::~btHashedSimplePairCache(btHashedSimplePairCache *this)

{
  *(undefined ***)this = &PTR__btHashedSimplePairCache_01734638;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    if (this[0x68] != (btHashedSimplePairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x60));
    }
    *(undefined8 *)(this + 0x60) = 0;
  }
  this[0x68] = (btHashedSimplePairCache)0x1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    if (this[0x48] != (btHashedSimplePairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x40));
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  this[0x48] = (btHashedSimplePairCache)0x1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btHashedSimplePairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (btHashedSimplePairCache)0x1;
  *(undefined8 *)(this + 0xc) = 0;
  return;
}


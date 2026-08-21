
/* btHashedSimplePairCache::btHashedSimplePairCache() */

void __thiscall btHashedSimplePairCache::btHashedSimplePairCache(btHashedSimplePairCache *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  this[0x28] = (btHashedSimplePairCache)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x20] = (btHashedSimplePairCache)0x1;
  this[0x48] = (btHashedSimplePairCache)0x1;
  this[0x68] = (btHashedSimplePairCache)0x1;
  *(undefined ***)this = &PTR__btHashedSimplePairCache_01734638;
  *(undefined8 *)(this + 0x54) = 0;
  lVar1 = btAlignedAllocInternal(0x20,0x10);
  lVar2 = (long)*(int *)(this + 0xc);
  if (0 < *(int *)(this + 0xc)) {
    lVar3 = 0;
    do {
      lVar2 = lVar2 + -1;
      uVar4 = *(undefined8 *)(*(long *)(this + 0x18) + lVar3);
      ((undefined8 *)(lVar1 + lVar3))[1] = ((undefined8 *)(*(long *)(this + 0x18) + lVar3))[1];
      *(undefined8 *)(lVar1 + lVar3) = uVar4;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btHashedSimplePairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(long *)(this + 0x18) = lVar1;
  this[0x20] = (btHashedSimplePairCache)0x1;
  *(undefined4 *)(this + 0x10) = 2;
  growTables(this);
  return;
}


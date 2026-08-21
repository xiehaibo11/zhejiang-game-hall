
/* btSortedOverlappingPairCache::btSortedOverlappingPairCache() */

void __thiscall
btSortedOverlappingPairCache::btSortedOverlappingPairCache(btSortedOverlappingPairCache *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  *(undefined2 *)(this + 0x28) = 0x100;
  *(undefined ***)this = &PTR__btSortedOverlappingPairCache_01731738;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  lVar3 = btAlignedAllocInternal(0x40,0x10);
  lVar4 = (long)*(int *)(this + 0xc);
  if (0 < *(int *)(this + 0xc)) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      lVar4 = lVar4 + -1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar5);
      uVar6 = *puVar2;
      lVar5 = lVar5 + 0x20;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    } while (lVar4 != 0);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (this[0x20] != (btSortedOverlappingPairCache)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x18));
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  *(long *)(this + 0x18) = lVar3;
  this[0x20] = (btSortedOverlappingPairCache)0x1;
  *(undefined4 *)(this + 0x10) = 2;
  return;
}


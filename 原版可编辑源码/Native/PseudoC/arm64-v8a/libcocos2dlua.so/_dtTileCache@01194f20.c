
/* dtTileCache::~dtTileCache() */

void __thiscall dtTileCache::~dtTileCache(dtTileCache *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 0x54);
  if (0 < iVar1) {
    lVar2 = *(long *)(this + 0x18);
    lVar3 = 0;
    lVar4 = 0;
    do {
      if ((*(byte *)(lVar2 + lVar3 + 0x2c) & 1) != 0) {
        dtFree(*(void **)(lVar2 + lVar3 + 0x20));
        lVar2 = *(long *)(this + 0x18);
        *(undefined8 *)(lVar2 + lVar3 + 0x20) = 0;
        iVar1 = *(int *)(this + 0x54);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar4 < iVar1);
  }
  dtFree(*(void **)(this + 0x78));
  *(undefined8 *)(this + 0x78) = 0;
  dtFree(*(void **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  dtFree(*(void **)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  return;
}


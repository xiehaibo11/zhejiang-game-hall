
/* v8::internal::Map::StartInobjectSlackTracking() */

void __thiscall v8::internal::Map::StartInobjectSlackTracking(Map *this)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)this;
  bVar1 = *(byte *)(lVar2 + 5);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)*(byte *)(lVar2 + 3) - (uint)bVar1;
  }
  if (uVar3 != 0) {
    *(uint *)(lVar2 + 0xb) = *(uint *)(lVar2 + 0xb) | 0xe0000000;
  }
  return;
}



/* v8::internal::Map::HasOutOfObjectProperties() const */

bool __thiscall v8::internal::Map::HasOutOfObjectProperties(Map *this)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  iVar1 = 0;
  uVar2 = (ulong)(*(uint *)(uVar4 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar2 != 0) {
    puVar3 = (uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x17)) + 0x13);
    do {
      uVar2 = uVar2 - 1;
      iVar1 = ((*puVar3 >> 2 ^ 0xffffffff) & 1) + iVar1;
      puVar3 = puVar3 + 3;
    } while (uVar2 != 0);
  }
  return (int)((uint)*(byte *)(uVar4 + 3) - (uint)*(byte *)(uVar4 + 4)) < iVar1;
}


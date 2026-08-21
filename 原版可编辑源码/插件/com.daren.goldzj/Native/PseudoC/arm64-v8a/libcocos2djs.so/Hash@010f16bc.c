
/* v8::internal::Map::Hash() */

uint __thiscall v8::internal::Map::Hash(Map *this)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)this;
  uVar5 = uVar3 & 0xffffffff00000000;
  uVar4 = uVar5 | *(uint *)(uVar3 + 0x13);
  if ((*(uint *)(uVar3 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar4 + 0x13);
      uVar4 = uVar5 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar2 = *(int *)(uVar3 + 0xf) << 0xe;
  return (uint)uVar4 >> 2 & 0xffff ^ uVar2 ^ (int)uVar2 >> 0x10 ^ (uint)*(byte *)(uVar3 + 10);
}


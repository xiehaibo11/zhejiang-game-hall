
/* v8::internal::Map::NumberOfEnumerableProperties() const */

int __thiscall v8::internal::Map::NumberOfEnumerableProperties(Map *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)this;
  iVar3 = 0;
  uVar4 = (ulong)(*(uint *)(uVar5 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar4 != 0) {
    uVar6 = uVar5 & 0xffffffff00000000;
    puVar1 = (uint *)((uVar6 | *(uint *)(uVar5 + 0x17)) + 0x13);
    uVar2 = *puVar1;
    while( true ) {
      if (((uVar2 >> 5 & 1) == 0) &&
         (((puVar1[-1] & 1) == 0 ||
          (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | puVar1[-1]) - 1)) != 0x40)))) {
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 - 1;
      puVar1 = puVar1 + 3;
      if (uVar4 == 0) break;
      uVar2 = *puVar1;
    }
  }
  return iVar3;
}


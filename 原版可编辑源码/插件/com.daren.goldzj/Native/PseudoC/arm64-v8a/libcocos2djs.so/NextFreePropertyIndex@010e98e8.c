
/* v8::internal::Map::NextFreePropertyIndex() const */

int __thiscall v8::internal::Map::NextFreePropertyIndex(Map *this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)this;
  uVar4 = (ulong)(*(uint *)(uVar2 + 0xb) >> 10) & 0x3ff;
  lVar3 = uVar4 + 1;
  lVar5 = uVar4 * 0xc00000000 + 0x400000000;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 < 1) {
      return 0;
    }
    uVar1 = *(uint *)((lVar5 >> 0x20 | 3U) +
                     (uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17)));
    lVar5 = lVar5 + -0xc00000000;
  } while ((uVar1 >> 2 & 1) != 0);
  return (uVar1 >> 0x14 & 0x3ff) + 1;
}


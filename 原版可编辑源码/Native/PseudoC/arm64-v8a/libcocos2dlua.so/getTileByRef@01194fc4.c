
/* dtTileCache::getTileByRef(unsigned int) const */

uint * __thiscall dtTileCache::getTileByRef(dtTileCache *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    uVar1 = param_1 & (-1 << (ulong)(*(uint *)(this + 0x24) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar1 < *(int *)(this + 0x54)) {
      puVar2 = (uint *)(*(long *)(this + 0x18) + (ulong)uVar1 * 0x38);
      if (*puVar2 !=
          (param_1 >> (ulong)(*(uint *)(this + 0x24) & 0x1f) &
          (-1 << (ulong)(*(uint *)(this + 0x20) & 0x1f) ^ 0xffffffffU))) {
        puVar2 = (uint *)0x0;
      }
      return puVar2;
    }
  }
  return (uint *)0x0;
}


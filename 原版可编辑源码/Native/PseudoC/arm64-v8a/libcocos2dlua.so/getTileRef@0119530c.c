
/* dtTileCache::getTileRef(dtCompressedTile const*) const */

uint __thiscall dtTileCache::getTileRef(dtTileCache *this,dtCompressedTile *param_1)

{
  if (param_1 != (dtCompressedTile *)0x0) {
    return *(int *)param_1 << (ulong)(*(uint *)(this + 0x24) & 0x1f) |
           (int)((ulong)((long)param_1 - *(long *)(this + 0x18)) >> 3) * -0x49249249;
  }
  return 0;
}


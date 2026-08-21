
/* dtTileCache::getObstacleRef(dtTileCacheObstacle const*) const */

uint __thiscall dtTileCache::getObstacleRef(dtTileCache *this,dtTileCacheObstacle *param_1)

{
  if (param_1 != (dtTileCacheObstacle *)0x0) {
    return (int)((ulong)((long)param_1 - *(long *)(this + 0x78)) >> 3) * -0x3b13b13b |
           (uint)*(ushort *)(param_1 + 0x54) << 0x10;
  }
  return 0;
}


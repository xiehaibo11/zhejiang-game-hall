
/* dtFreeTileCache(dtTileCache*) */

void dtFreeTileCache(dtTileCache *param_1)

{
  if (param_1 != (dtTileCache *)0x0) {
    dtTileCache::~dtTileCache(param_1);
    dtFree(param_1);
    return;
  }
  return;
}


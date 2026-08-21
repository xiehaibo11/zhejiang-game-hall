
/* dtTileCache::getObstacleByRef(unsigned int) */

long __thiscall dtTileCache::getObstacleByRef(dtTileCache *this,uint param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && ((int)(param_1 & 0xffff) < *(int *)(this + 0x58))) {
    lVar1 = *(long *)(this + 0x78) + (ulong)(param_1 & 0xffff) * 0x68;
    if ((uint)*(ushort *)(lVar1 + 0x54) != param_1 >> 0x10) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}


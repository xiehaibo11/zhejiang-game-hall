
/* dtTileCache::removeObstacle(unsigned int) */

undefined8 __thiscall dtTileCache::removeObstacle(dtTileCache *this,uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(this + 0x288);
    if (0x3f < iVar1) {
      return 0x80000010;
    }
    *(int *)(this + 0x288) = iVar1 + 1;
    *(undefined8 *)(this + (long)iVar1 * 8 + 0x88) = 0;
    *(undefined4 *)(this + (long)iVar1 * 8 + 0x88) = 1;
    *(uint *)(this + (long)iVar1 * 8 + 0x8c) = param_1;
  }
  return 0x40000000;
}


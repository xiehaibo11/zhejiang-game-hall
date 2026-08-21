
/* dtTileCache::getTilesAt(int, int, unsigned int*, int) const */

int __thiscall
dtTileCache::getTilesAt(dtTileCache *this,int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  piVar2 = *(int **)(*(long *)(this + 8) +
                    (long)(int)(*(uint *)(this + 4) & param_1 * -0x72594cbd + param_2 * -0x27e9c7bf)
                    * 8);
  if (piVar2 != (int *)0x0) {
    iVar1 = 0;
    lVar3 = *(long *)(piVar2 + 2);
    while( true ) {
      if ((((lVar3 == 0) || (*(int *)(lVar3 + 8) != param_1)) || (param_4 <= iVar1)) ||
         (*(int *)(lVar3 + 0xc) != param_2)) {
        piVar2 = *(int **)(piVar2 + 0xc);
      }
      else {
        param_3[iVar1] =
             *piVar2 << (ulong)(*(uint *)(this + 0x24) & 0x1f) |
             (int)((ulong)((long)piVar2 - *(long *)(this + 0x18)) >> 3) * -0x49249249;
        piVar2 = *(int **)(piVar2 + 0xc);
        iVar1 = iVar1 + 1;
      }
      if (piVar2 == (int *)0x0) break;
      lVar3 = *(long *)(piVar2 + 2);
    }
    return iVar1;
  }
  return 0;
}


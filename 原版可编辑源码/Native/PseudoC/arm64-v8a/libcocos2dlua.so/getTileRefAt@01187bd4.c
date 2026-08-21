
/* dtNavMesh::getTileRefAt(int, int, int) const */

uint __thiscall dtNavMesh::getTileRefAt(dtNavMesh *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(*(long *)(this + 0x40) +
                    (long)(int)(*(uint *)(this + 0x38) &
                               param_1 * -0x72594cbd + param_2 * -0x27e9c7bf) * 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    lVar2 = *(long *)(piVar1 + 2);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 8) == param_1)) && (*(int *)(lVar2 + 0xc) == param_2))
       && (*(int *)(lVar2 + 0x10) == param_3)) break;
    piVar1 = *(int **)(piVar1 + 0x18);
  }
  return *piVar1 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f) |
         (int)((ulong)((long)piVar1 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
         (ulong)(*(uint *)(this + 0x60) & 0x1f);
}


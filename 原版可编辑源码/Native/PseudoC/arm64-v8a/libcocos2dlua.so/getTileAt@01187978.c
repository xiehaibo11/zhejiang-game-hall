
/* dtNavMesh::getTileAt(int, int, int) const */

void __thiscall dtNavMesh::getTileAt(dtNavMesh *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(this + 0x40) +
                   (long)(int)(*(uint *)(this + 0x38) &
                              param_1 * -0x72594cbd + param_2 * -0x27e9c7bf) * 8);
  while ((lVar1 != 0 &&
         ((((lVar2 = *(long *)(lVar1 + 8), lVar2 == 0 || (*(int *)(lVar2 + 8) != param_1)) ||
           (*(int *)(lVar2 + 0xc) != param_2)) || (*(int *)(lVar2 + 0x10) != param_3))))) {
    lVar1 = *(long *)(lVar1 + 0x60);
  }
  return;
}


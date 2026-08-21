
/* dtNavMesh::getNeighbourTilesAt(int, int, int, dtMeshTile**, int) const */

int __thiscall
dtNavMesh::getNeighbourTilesAt
          (dtNavMesh *this,int param_1,int param_2,int param_3,dtMeshTile **param_4,int param_5)

{
  int iVar1;
  dtMeshTile *pdVar2;
  long lVar3;
  
  switch(param_3) {
  case 0:
    param_1 = param_1 + 1;
    break;
  case 1:
    param_1 = param_1 + 1;
  case 2:
    param_2 = param_2 + 1;
    break;
  case 3:
    param_1 = param_1 + -1;
    param_2 = param_2 + 1;
    break;
  case 4:
    param_1 = param_1 + -1;
    break;
  case 5:
    param_1 = param_1 + -1;
  case 6:
switchD_01187a88_caseD_6:
    param_2 = param_2 + -1;
    break;
  case 7:
    param_1 = param_1 + 1;
    goto switchD_01187a88_caseD_6;
  }
  pdVar2 = *(dtMeshTile **)
            (*(long *)(this + 0x40) +
            (long)(int)(param_1 * -0x72594cbd + param_2 * -0x27e9c7bf & *(uint *)(this + 0x38)) * 8)
  ;
  if (pdVar2 == (dtMeshTile *)0x0) {
    return 0;
  }
  iVar1 = 0;
  lVar3 = *(long *)(pdVar2 + 8);
  while( true ) {
    if ((((lVar3 == 0) || (*(int *)(lVar3 + 8) != param_1)) || (param_5 <= iVar1)) ||
       (*(int *)(lVar3 + 0xc) != param_2)) {
      pdVar2 = *(dtMeshTile **)(pdVar2 + 0x60);
    }
    else {
      param_4[iVar1] = pdVar2;
      pdVar2 = *(dtMeshTile **)(pdVar2 + 0x60);
      iVar1 = iVar1 + 1;
    }
    if (pdVar2 == (dtMeshTile *)0x0) break;
    lVar3 = *(long *)(pdVar2 + 8);
  }
  return iVar1;
}


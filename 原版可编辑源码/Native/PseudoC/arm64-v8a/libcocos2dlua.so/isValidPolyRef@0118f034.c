
/* dtNavMeshQuery::isValidPolyRef(unsigned int, dtQueryFilter const*) const */

void __thiscall
dtNavMeshQuery::isValidPolyRef(dtNavMeshQuery *this,uint param_1,dtQueryFilter *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  dtPoly *local_38;
  dtMeshTile *pdStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (dtPoly *)0x0;
  pdStack_30 = (dtMeshTile *)0x0;
  iVar3 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&pdStack_30,&local_38);
  if ((iVar3 < 0) || ((*(ushort *)(param_2 + 0x100) & *(ushort *)(local_38 + 0x1c)) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(ushort *)(param_2 + 0x102) & *(ushort *)(local_38 + 0x1c)) == 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}



/* dtNavMeshQuery::getPortalPoints(unsigned int, unsigned int, float*, float*, unsigned char&,
   unsigned char&) const */

undefined4 __thiscall
dtNavMeshQuery::getPortalPoints
          (dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3,float *param_4,
          uchar *param_5,uchar *param_6)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  dtNavMeshQuery *this_00;
  dtPoly *local_88;
  dtMeshTile *pdStack_80;
  dtPoly *local_78;
  dtMeshTile *pdStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = (dtPoly *)0x0;
  pdStack_70 = (dtMeshTile *)0x0;
  uVar3 = 0x80000008;
  iVar2 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&pdStack_70,&local_78);
  if (-1 < iVar2) {
    *param_5 = (byte)local_78[0x1f] >> 6;
    local_88 = (dtPoly *)0x0;
    pdStack_80 = (dtMeshTile *)0x0;
    this_00 = (dtNavMeshQuery *)
              dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_2,&pdStack_80,&local_88);
    if (-1 < (int)this_00) {
      *param_6 = (byte)local_88[0x1f] >> 6;
      uVar3 = getPortalPoints(this_00,param_1,local_78,pdStack_70,param_2,local_88,pdStack_80,
                              param_3,param_4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


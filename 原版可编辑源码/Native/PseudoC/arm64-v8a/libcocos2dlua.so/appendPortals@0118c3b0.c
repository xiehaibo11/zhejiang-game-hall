
/* dtNavMeshQuery::appendPortals(int, int, float const*, unsigned int const*, float*, unsigned
   char*, unsigned int*, int*, int, int) const */

int __thiscall
dtNavMeshQuery::appendPortals
          (dtNavMeshQuery *this,int param_1,int param_2,float *param_3,uint *param_4,float *param_5,
          uchar *param_6,uint *param_7,int *param_8,int param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  dtNavMeshQuery *pdVar7;
  long lVar8;
  uint *puVar9;
  float local_c0;
  float fStack_bc;
  dtPoly *local_b8;
  dtMeshTile *pdStack_b0;
  dtPoly *local_a8;
  dtMeshTile *pdStack_a0;
  undefined8 local_98;
  float local_90;
  float local_88 [2];
  float local_80;
  float local_78 [2];
  float local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar6 = 0x20000000;
  if (param_1 < param_2) {
    iVar1 = *param_8;
    lVar8 = (long)param_2 - (long)param_1;
    puVar5 = param_4 + param_1;
    do {
      puVar9 = puVar5 + 1;
      uVar3 = *puVar5;
      local_a8 = (dtPoly *)0x0;
      pdStack_a0 = (dtMeshTile *)0x0;
      iVar6 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar3,&pdStack_a0,&local_a8);
      if (iVar6 < 0) {
LAB_0118c560:
        iVar6 = -0x7ffffff8;
        goto LAB_0118c570;
      }
      uVar2 = *puVar9;
      local_b8 = (dtPoly *)0x0;
      pdStack_b0 = (dtMeshTile *)0x0;
      pdVar7 = (dtNavMeshQuery *)
               dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar2,&pdStack_b0,&local_b8);
      if ((int)pdVar7 < 0) goto LAB_0118c560;
      iVar6 = getPortalPoints(pdVar7,uVar3,local_a8,pdStack_a0,uVar2,local_b8,pdStack_b0,local_78,
                              local_88);
      if (iVar6 < 0) break;
      if ((((param_10 & 1U) == 0) || ((((byte)local_b8[0x1f] ^ (byte)local_a8[0x1f]) & 0x3f) != 0))
         && (pdVar7 = (dtNavMeshQuery *)
                      dtIntersectSegSeg2D(param_5 + (iVar1 * 3 + -3),param_3,local_78,local_88,
                                          &fStack_bc,&local_c0), ((ulong)pdVar7 & 1) != 0)) {
        local_98 = CONCAT44(local_78[1] + (local_88[1] - local_78[1]) * local_c0,
                            local_78[0] + (local_88[0] - local_78[0]) * local_c0);
        local_90 = local_70 + local_c0 * (local_80 - local_70);
        iVar6 = appendVertex(pdVar7,(float *)&local_98,'\0',*puVar9,param_5,param_6,param_7,param_8,
                             param_9);
        if (iVar6 != 0x20000000) goto LAB_0118c570;
      }
      lVar8 = lVar8 + -1;
      puVar5 = puVar9;
    } while (lVar8 != 0);
    iVar6 = 0x20000000;
  }
LAB_0118c570:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


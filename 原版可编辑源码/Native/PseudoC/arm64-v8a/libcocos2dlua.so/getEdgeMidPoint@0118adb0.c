
/* dtNavMeshQuery::getEdgeMidPoint(unsigned int, dtPoly const*, dtMeshTile const*, unsigned int,
   dtPoly const*, dtMeshTile const*, float*) const */

void __thiscall
dtNavMeshQuery::getEdgeMidPoint
          (dtNavMeshQuery *this,uint param_1,dtPoly *param_2,dtMeshTile *param_3,uint param_4,
          dtPoly *param_5,dtMeshTile *param_6,float *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float local_48 [2];
  float local_40;
  float local_38 [2];
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = getPortalPoints(this,param_1,param_2,param_3,param_4,param_5,param_6,local_38,local_48);
  if (iVar2 < 0) {
    uVar3 = 0x80000008;
  }
  else {
    uVar3 = 0x40000000;
    *(ulong *)param_7 =
         CONCAT44((local_38[1] + local_48[1]) * 0.5,(local_38[0] + local_48[0]) * 0.5);
    param_7[2] = (local_30 + local_40) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


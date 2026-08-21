
/* dtPathCorridor::movePosition(float const*, dtNavMeshQuery*, dtQueryFilter const*) */

void __thiscall
dtPathCorridor::movePosition
          (dtPathCorridor *this,float *param_1,dtNavMeshQuery *param_2,dtQueryFilter *param_3)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  float local_8c;
  int local_88;
  uint auStack_84 [16];
  float local_44;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = 0;
  uVar3 = dtNavMeshQuery::moveAlongSurface
                    (param_2,**(uint **)(this + 0x18),(float *)this,param_1,param_3,&local_44,
                     auStack_84,&local_88,0x10);
  bVar1 = (uVar3 >> 0x1e & 1) != 0;
  if (bVar1) {
    uVar4 = dtMergeCorridorStartMoved
                      (*(uint **)(this + 0x18),*(int *)(this + 0x20),*(int *)(this + 0x24),
                       auStack_84,local_88);
    local_8c = *(float *)(this + 4);
    *(undefined4 *)(this + 0x20) = uVar4;
    dtNavMeshQuery::getPolyHeight(param_2,**(uint **)(this + 0x18),&local_44,&local_8c);
    local_40 = local_8c;
    *(float *)this = local_44;
    *(float *)(this + 4) = local_8c;
    *(undefined4 *)(this + 8) = local_3c;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}



/* dtPathCorridor::trimInvalidPath(unsigned int, float const*, dtNavMeshQuery*, dtQueryFilter
   const*) */

undefined8 __thiscall
dtPathCorridor::trimInvalidPath
          (dtPathCorridor *this,uint param_1,float *param_2,dtNavMeshQuery *param_3,
          dtQueryFilter *param_4)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x20) < 1) {
    lVar5 = 0;
    if (*(int *)(this + 0x20) == 0) goto LAB_01194330;
  }
  else {
    lVar5 = 0;
    do {
      uVar2 = dtNavMeshQuery::isValidPolyRef
                        (param_3,*(uint *)(*(long *)(this + 0x18) + lVar5 * 4),param_4);
      if ((uVar2 & 1) == 0) {
        if ((int)lVar5 == *(int *)(this + 0x20)) goto LAB_01194330;
        goto LAB_011942b4;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(this + 0x20));
    if ((int)lVar5 == *(int *)(this + 0x20)) goto LAB_01194330;
  }
LAB_011942b4:
  iVar4 = (int)lVar5;
  if (iVar4 == 0) {
    iVar4 = 1;
    *(float *)this = *param_2;
    *(float *)(this + 4) = param_2[1];
    puVar3 = *(uint **)(this + 0x18);
    *(float *)(this + 8) = param_2[2];
    *puVar3 = param_1;
  }
  else {
    puVar3 = *(uint **)(this + 0x18);
  }
  *(int *)(this + 0x20) = iVar4;
  local_68 = *(undefined8 *)(this + 0xc);
  local_60 = *(undefined4 *)(this + 0x14);
  dtNavMeshQuery::closestPointOnPolyBoundary
            (param_3,puVar3[iVar4 + -1],(float *)&local_68,(float *)(this + 0xc));
LAB_01194330:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


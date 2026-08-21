
/* dtPathCorridor::isValid(int, dtNavMeshQuery*, dtQueryFilter const*) */

undefined8 __thiscall
dtPathCorridor::isValid
          (dtPathCorridor *this,int param_1,dtNavMeshQuery *param_2,dtQueryFilter *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x20);
  if (param_1 <= *(int *)(this + 0x20)) {
    iVar1 = param_1;
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      uVar2 = dtNavMeshQuery::isValidPolyRef
                        (param_2,*(uint *)(*(long *)(this + 0x18) + lVar3 * 4),param_3);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return 1;
}


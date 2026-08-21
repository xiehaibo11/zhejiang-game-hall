
/* dtLocalBoundary::isValid(dtNavMeshQuery*, dtQueryFilter const*) */

undefined8 __thiscall
dtLocalBoundary::isValid(dtLocalBoundary *this,dtNavMeshQuery *param_1,dtQueryFilter *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(this + 0x130) == 0) {
LAB_01191ef8:
    uVar2 = 0;
  }
  else {
    if (0 < *(int *)(this + 0x130)) {
      lVar3 = 0;
      do {
        uVar1 = dtNavMeshQuery::isValidPolyRef(param_1,*(uint *)(this + lVar3 * 4 + 0xf0),param_2);
        if ((uVar1 & 1) == 0) goto LAB_01191ef8;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this + 0x130));
    }
    uVar2 = 1;
  }
  return uVar2;
}


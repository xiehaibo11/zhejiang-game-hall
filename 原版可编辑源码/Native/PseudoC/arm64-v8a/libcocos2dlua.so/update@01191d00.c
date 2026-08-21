
/* dtLocalBoundary::update(unsigned int, float const*, float, dtNavMeshQuery*, dtQueryFilter const*)
    */

void __thiscall
dtLocalBoundary::update
          (dtLocalBoundary *this,uint param_1,float *param_2,float param_3,dtNavMeshQuery *param_4,
          dtQueryFilter *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fStack_238;
  int local_234;
  float afStack_230 [108];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    *(undefined4 *)(this + 0xec) = 0;
    *(undefined4 *)(this + 8) = 0x7f7fffff;
    *(undefined8 *)this = 0x7f7fffff7f7fffff;
    *(undefined4 *)(this + 0x130) = 0;
  }
  else {
    *(float *)this = *param_2;
    *(float *)(this + 4) = param_2[1];
    *(float *)(this + 8) = param_2[2];
    dtNavMeshQuery::findLocalNeighbourhood
              (param_4,param_1,param_2,param_3,param_5,(uint *)(this + 0xf0),(uint *)0x0,
               (int *)(this + 0x130),0x10);
    *(undefined4 *)(this + 0xec) = 0;
    local_234 = 0;
    if (0 < *(int *)(this + 0x130)) {
      lVar3 = 0;
      do {
        dtNavMeshQuery::getPolyWallSegments
                  (param_4,*(uint *)(this + lVar3 * 4 + 0xf0),param_5,afStack_230,(uint *)0x0,
                   &local_234,0x12);
        if (0 < local_234) {
          uVar4 = 0;
          lVar2 = 0;
          do {
            fVar5 = (float)dtDistancePtSegSqr2D
                                     (param_2,afStack_230 + (uVar4 & 0xfffffffe),
                                      afStack_230 + (uVar4 & 0xfffffffe) + 3,&fStack_238);
            if (fVar5 <= param_3 * param_3) {
              addSegment(this,fVar5,afStack_230 + (uVar4 & 0xfffffffe));
            }
            lVar2 = lVar2 + 1;
            uVar4 = uVar4 + 6;
          } while (lVar2 < local_234);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this + 0x130));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


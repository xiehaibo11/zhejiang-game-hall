
/* dtCrowd::checkPathValidity(dtCrowdAgent**, int, float) */

void __thiscall
dtCrowd::checkPathValidity(dtCrowd *this,dtCrowdAgent **param_1,int param_2,float param_3)

{
  dtPathCorridor *this_00;
  undefined4 uVar1;
  dtCrowdAgent dVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  dtCrowdAgent *pdVar12;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (0 < param_2) {
    uVar10 = (ulong)(uint)param_2;
    do {
      pdVar12 = *param_1;
      if (pdVar12[1] == (dtCrowdAgent)0x1) {
        this_00 = (dtPathCorridor *)(pdVar12 + 8);
        *(float *)(pdVar12 + 0x26c) = *(float *)(pdVar12 + 0x26c) + param_3;
        lVar11 = *(long *)(this + 8);
        if (*(int *)(pdVar12 + 0x28) == 0) {
          local_9c = 0;
        }
        else {
          local_9c = **(uint **)(pdVar12 + 0x20);
        }
        local_88 = *(undefined8 *)(pdVar12 + 0x1a0);
        local_80 = *(undefined4 *)(pdVar12 + 0x1a8);
        uVar5 = dtNavMeshQuery::isValidPolyRef
                          (*(dtNavMeshQuery **)(this + 0x13c8),local_9c,
                           (dtQueryFilter *)(this + (ulong)(byte)pdVar12[0x1fe] * 0x104 + 0x380));
        if ((uVar5 & 1) == 0) {
          local_9c = 0;
          local_98 = local_88;
          local_90 = local_80;
          dtNavMeshQuery::findNearestPoly
                    (*(dtNavMeshQuery **)(this + 0x13c8),(float *)(pdVar12 + 0x1a0),
                     (float *)(this + 0x374),
                     (dtQueryFilter *)(this + (ulong)(byte)pdVar12[0x1fe] * 0x104 + 0x380),&local_9c
                     ,(float *)&local_98);
          local_88 = local_98;
          local_80 = local_90;
          if (local_9c == 0) {
            dtPathCorridor::reset(this_00,0,(float *)&local_88);
            pdVar12[2] = (dtCrowdAgent)0x0;
            dtLocalBoundary::reset((dtLocalBoundary *)(pdVar12 + 0x30));
            pdVar12[1] = (dtCrowdAgent)0x0;
            goto LAB_0119075c;
          }
          dtPathCorridor::fixPathStart(this_00,local_9c,(float *)&local_88);
          dtLocalBoundary::reset((dtLocalBoundary *)(pdVar12 + 0x30));
          uVar9 = 1;
          *(undefined8 *)(pdVar12 + 0x1a0) = local_88;
          *(undefined4 *)(pdVar12 + 0x1a8) = local_80;
          dVar2 = pdVar12[0x250];
        }
        else {
          uVar9 = 0;
          dVar2 = pdVar12[0x250];
        }
        if (dVar2 != (dtCrowdAgent)0x0) {
          if (dVar2 != (dtCrowdAgent)0x1) {
            if (dVar2 == (dtCrowdAgent)0x6) goto LAB_0119075c;
            uVar5 = dtNavMeshQuery::isValidPolyRef
                              (*(dtNavMeshQuery **)(this + 0x13c8),*(uint *)(pdVar12 + 0x254),
                               (dtQueryFilter *)(this + (ulong)(byte)pdVar12[0x1fe] * 0x104 + 0x380)
                              );
            if ((uVar5 & 1) == 0) {
              local_98 = *(undefined8 *)(pdVar12 + 600);
              local_90 = *(undefined4 *)(pdVar12 + 0x260);
              *(undefined4 *)(pdVar12 + 0x254) = 0;
              dtNavMeshQuery::findNearestPoly
                        (*(dtNavMeshQuery **)(this + 0x13c8),(float *)(pdVar12 + 600),
                         (float *)(this + 0x374),
                         (dtQueryFilter *)(this + (ulong)(byte)pdVar12[0x1fe] * 0x104 + 0x380),
                         (uint *)(pdVar12 + 0x254),(float *)&local_98);
              uVar9 = 1;
              *(undefined8 *)(pdVar12 + 600) = local_98;
              *(undefined4 *)(pdVar12 + 0x260) = local_90;
            }
            if (*(uint *)(pdVar12 + 0x254) == 0) {
              dtPathCorridor::reset(this_00,local_9c,(float *)&local_88);
              pdVar12[2] = (dtCrowdAgent)0x0;
              pdVar12[0x250] = (dtCrowdAgent)0x0;
            }
          }
          uVar4 = dtPathCorridor::isValid
                            (this_00,10,*(dtNavMeshQuery **)(this + 0x13c8),
                             (dtQueryFilter *)(this + (ulong)(byte)pdVar12[0x1fe] * 0x104 + 0x380));
          if (((pdVar12[0x250] != (dtCrowdAgent)0x2) || (*(float *)(pdVar12 + 0x26c) <= 1.0)) ||
             (iVar6 = *(int *)(pdVar12 + 0x28), 9 < iVar6)) {
            if ((pdVar12[0x250] != (dtCrowdAgent)0x0) && ((((uVar9 | uVar4 ^ 1) ^ 1) & 1) == 0)) {
              iVar6 = *(int *)(pdVar12 + 0x254);
              goto LAB_01190984;
            }
          }
          else {
            iVar7 = 0;
            if (iVar6 != 0) {
              iVar7 = *(int *)(*(long *)(pdVar12 + 0x20) + (long)(iVar6 + -1) * 4);
            }
            iVar6 = *(int *)(pdVar12 + 0x254);
            if ((uVar9 != 0 || ((uVar4 ^ 1) & 1) != 0) || iVar7 != iVar6) {
LAB_01190984:
              iVar7 = (int)((long)pdVar12 - lVar11 >> 4) * -0x69069069;
              if ((-1 < iVar7) && (iVar7 < *(int *)this)) {
                lVar11 = *(long *)(this + 8) + (long)iVar7 * 0x270;
                *(int *)(lVar11 + 0x254) = iVar6;
                *(undefined4 *)(lVar11 + 600) = *(undefined4 *)(pdVar12 + 600);
                *(undefined4 *)(lVar11 + 0x25c) = *(undefined4 *)(pdVar12 + 0x25c);
                uVar1 = *(undefined4 *)(pdVar12 + 0x260);
                uVar8 = 3;
                if (iVar6 == 0) {
                  uVar8 = 1;
                }
                *(undefined4 *)(lVar11 + 0x264) = 0;
                *(undefined1 *)(lVar11 + 0x268) = 1;
                *(undefined4 *)(lVar11 + 0x260) = uVar1;
                *(undefined1 *)(lVar11 + 0x250) = uVar8;
              }
            }
          }
        }
      }
LAB_0119075c:
      uVar10 = uVar10 - 1;
      param_1 = param_1 + 1;
    } while (uVar10 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


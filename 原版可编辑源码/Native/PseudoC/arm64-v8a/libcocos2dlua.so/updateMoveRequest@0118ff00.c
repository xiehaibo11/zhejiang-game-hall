
/* dtCrowd::updateMoveRequest(float) */

void dtCrowd::updateMoveRequest(float param_1)

{
  float *pfVar1;
  char *pcVar2;
  dtPathQueue *this;
  undefined1 *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int *in_x0;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint *__src;
  int iVar16;
  long lVar17;
  long *plVar18;
  void *__src_00;
  char *pcVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  uint local_144;
  undefined8 local_140;
  undefined4 local_138;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [2];
  long local_b0 [8];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (0 < *in_x0) {
    lVar21 = 0;
    uVar8 = 0;
    do {
      lVar13 = *(long *)(in_x0 + 2);
      pcVar19 = (char *)(lVar13 + lVar21 * 0x270);
      if ((*pcVar19 != '\0') && (*(char *)(lVar13 + lVar21 * 0x270 + 1) != '\0')) {
        lVar20 = lVar13 + lVar21 * 0x270;
        cVar5 = *(char *)(lVar20 + 0x250);
        if ((cVar5 != '\0') && (cVar5 != '\x06')) {
          if (cVar5 == '\x03') {
            lVar17 = lVar13 + lVar21 * 0x270;
            puVar15 = *(uint **)(lVar17 + 0x20);
            iVar7 = *(int *)(lVar17 + 0x28);
            local_144 = 0;
            pfVar1 = (float *)(lVar17 + 600);
            dtNavMeshQuery::initSlicedFindPath
                      (*(dtNavMeshQuery **)(in_x0 + 0x4f2),*puVar15,*(uint *)(lVar17 + 0x254),
                       (float *)(lVar17 + 0x1a0),pfVar1,
                       (dtQueryFilter *)(in_x0 + (ulong)*(byte *)(lVar17 + 0x1fe) * 0x41 + 0xe0),0);
            dtNavMeshQuery::updateSlicedFindPath
                      (*(dtNavMeshQuery **)(in_x0 + 0x4f2),0x14,(int *)0x0);
            if (*(char *)(lVar17 + 0x268) == '\0') {
              iVar7 = dtNavMeshQuery::finalizeSlicedFindPath
                                (*(dtNavMeshQuery **)(in_x0 + 0x4f2),(uint *)&local_140,
                                 (int *)&local_144,0x20);
              if (-1 < iVar7) goto LAB_0119005c;
LAB_011900b4:
              lVar11 = lVar13 + lVar21 * 0x270;
              local_c0 = *(float *)(lVar17 + 0x1a0);
              uStack_bc = *(undefined4 *)(lVar11 + 0x1a4);
              local_b8[0] = *(undefined4 *)(lVar11 + 0x1a8);
              local_144 = 1;
              local_140 = CONCAT44(local_140._4_4_,*puVar15);
            }
            else {
              iVar7 = dtNavMeshQuery::finalizeSlicedFindPathPartial
                                (*(dtNavMeshQuery **)(in_x0 + 0x4f2),puVar15,iVar7,
                                 (uint *)&local_140,(int *)&local_144,0x20);
              if (iVar7 < 0) goto LAB_011900b4;
LAB_0119005c:
              if ((int)local_144 < 1) goto LAB_011900b4;
              uVar12 = *(uint *)((long)&local_140 + (long)(int)(local_144 - 1) * 4);
              if (uVar12 == *(uint *)(lVar17 + 0x254)) {
                local_c0 = *pfVar1;
                lVar11 = lVar13 + lVar21 * 0x270;
                uStack_bc = *(undefined4 *)(lVar11 + 0x25c);
                local_b8[0] = *(undefined4 *)(lVar11 + 0x260);
              }
              else {
                iVar7 = dtNavMeshQuery::closestPointOnPoly
                                  (*(dtNavMeshQuery **)(in_x0 + 0x4f2),uVar12,pfVar1,&local_c0,
                                   (bool *)0x0);
                if ((iVar7 < 0) || (local_144 == 0)) goto LAB_011900b4;
              }
            }
            pcVar2 = (char *)(lVar20 + 0x250);
            dtPathCorridor::setCorridor
                      ((dtPathCorridor *)(lVar17 + 8),&local_c0,(uint *)&local_140,local_144);
            lVar20 = lVar13 + lVar21 * 0x270;
            dtLocalBoundary::reset((dtLocalBoundary *)(lVar20 + 0x30));
            *(undefined1 *)(lVar20 + 2) = 0;
            if ((&local_144)[(int)local_144] == *(uint *)(lVar17 + 0x254)) {
              *pcVar2 = '\x02';
              *(undefined4 *)(lVar13 + lVar21 * 0x270 + 0x26c) = 0;
            }
            else {
              *pcVar2 = '\x04';
            }
            cVar5 = *pcVar2;
          }
          if (cVar5 == '\x04') {
            if (uVar8 == 0) {
              uVar12 = 0;
            }
            else {
              fVar22 = *(float *)(lVar13 + lVar21 * 0x270 + 0x26c);
              if (fVar22 <= *(float *)(*(long *)(local_b8 + (long)(int)uVar8 * 2) + 0x26c)) {
                uVar12 = uVar8;
                if (7 < (int)uVar8) goto LAB_0118ff6c;
              }
              else {
                if ((int)uVar8 < 1) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  do {
                    if (*(float *)(local_b0[uVar14] + 0x26c) <= fVar22) break;
                    uVar14 = uVar14 + 1;
                  } while (uVar8 != uVar14);
                }
                uVar12 = (uint)uVar14;
                uVar4 = uVar8 - uVar12;
                if ((int)(7 - uVar12) <= (int)(uVar8 - uVar12)) {
                  uVar4 = 7 - uVar12;
                }
                if (0 < (int)uVar4) {
                  memmove(local_b0 + (uVar12 + 1),local_b0 + (uVar14 & 0xffffffff),
                          -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
                }
              }
            }
            if (6 < (int)uVar8) {
              uVar8 = 7;
            }
            uVar8 = uVar8 + 1;
            local_b0[(int)uVar12] = (long)pcVar19;
          }
        }
      }
LAB_0118ff6c:
      lVar21 = lVar21 + 1;
    } while (lVar21 < *in_x0);
    if (0 < (int)uVar8) {
      uVar14 = (ulong)uVar8;
      plVar18 = local_b0;
      do {
        lVar21 = *plVar18;
        if (*(int *)(lVar21 + 0x28) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(*(long *)(lVar21 + 0x20) + (long)(*(int *)(lVar21 + 0x28) + -1) * 4);
        }
        iVar7 = dtPathQueue::request
                          ((dtPathQueue *)(in_x0 + 8),uVar8,*(uint *)(lVar21 + 0x254),
                           (float *)(lVar21 + 0x14),(float *)(lVar21 + 600),
                           (dtQueryFilter *)(in_x0 + (ulong)*(byte *)(lVar21 + 0x1fe) * 0x41 + 0xe0)
                          );
        *(int *)(lVar21 + 0x264) = iVar7;
        if (iVar7 != 0) {
          *(undefined1 *)(lVar21 + 0x250) = 5;
        }
        uVar14 = uVar14 - 1;
        plVar18 = plVar18 + 1;
      } while (uVar14 != 0);
    }
  }
  this = (dtPathQueue *)(in_x0 + 8);
  dtPathQueue::update(this,100);
  if (0 < *in_x0) {
    lVar21 = 0;
    do {
      lVar13 = *(long *)(in_x0 + 2);
      if ((*(char *)(lVar13 + lVar21 * 0x270) != '\0') &&
         (lVar20 = lVar13 + lVar21 * 0x270, *(char *)(lVar20 + 0x250) == '\x05')) {
        lVar17 = lVar13 + lVar21 * 0x270;
        puVar3 = (undefined1 *)(lVar20 + 0x250);
        puVar15 = (uint *)(lVar17 + 0x264);
        uVar8 = dtPathQueue::getRequestStatus(this,*(uint *)(lVar17 + 0x264));
        if ((int)uVar8 < 0) {
          *puVar15 = 0;
          lVar13 = lVar13 + lVar21 * 0x270;
          uVar9 = 3;
          if (*(int *)(lVar13 + 0x254) == 0) {
            uVar9 = 1;
          }
          *puVar3 = uVar9;
        }
        else {
          if ((uVar8 >> 0x1e & 1) == 0) goto LAB_011902e4;
          lVar20 = lVar13 + lVar21 * 0x270;
          __src_00 = *(void **)(lVar20 + 0x20);
          iVar7 = *(int *)(lVar20 + 0x28);
          local_140 = *(undefined8 *)(lVar20 + 600);
          local_138 = *(undefined4 *)(lVar20 + 0x260);
          __src = *(uint **)(in_x0 + 0xda);
          local_144 = 0;
          uVar8 = dtPathQueue::getPathResult(this,*puVar15,__src,(int *)&local_144,in_x0[0xdc]);
          *(byte *)(lVar20 + 2) = (byte)(uVar8 >> 6) & 1;
          uVar9 = 1;
          if ((-1 < (int)uVar8) && (local_144 != 0)) {
            iVar16 = iVar7 + -1;
            if (*(uint *)((long)__src_00 + (long)iVar16 * 4) == *__src) {
              uVar8 = local_144;
              if (1 < iVar7) {
                if (in_x0[0xdc] < (int)(local_144 + iVar16)) {
                  local_144 = in_x0[0xdc] - iVar16;
                }
                memmove(__src + (long)iVar7 + -1,__src,
                        -(ulong)(local_144 >> 0x1f) & 0xfffffffc00000000 | (ulong)local_144 << 2);
                memcpy(__src,__src_00,(long)iVar16 << 2);
                uVar8 = local_144 + iVar16;
                local_144 = uVar8;
                if (0 < (int)uVar8) {
                  iVar7 = 0;
                  while (iVar16 = iVar7, iVar7 = iVar16 + 1, iVar7 < (int)uVar8) {
                    if (0 < iVar7) {
                      lVar17 = (long)iVar7 + 1;
                      iVar10 = (int)lVar17;
                      uVar12 = uVar8 - iVar10;
                      if (uVar12 != 0 && iVar10 <= (int)uVar8) {
                        if (__src[(long)iVar7 + -1] == __src[lVar17]) {
                          memmove(__src + (long)iVar7 + -1,__src + lVar17,
                                  -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2
                                 );
                          uVar8 = local_144 - 2;
                          iVar7 = iVar16 + -1;
                          local_144 = uVar8;
                        }
                      }
                    }
                  }
                }
              }
              if (__src[(int)(uVar8 - 1)] != *(uint *)(lVar13 + lVar21 * 0x270 + 0x254)) {
                uVar8 = dtNavMeshQuery::closestPointOnPoly
                                  (*(dtNavMeshQuery **)(in_x0 + 0x4f2),__src[(int)(uVar8 - 1)],
                                   (float *)&local_140,&local_c0,(bool *)0x0);
                if ((uVar8 >> 0x1e & 1) == 0) goto LAB_011904a0;
                local_140 = CONCAT44(uStack_bc,local_c0);
                local_138 = local_b8[0];
                uVar8 = local_144;
              }
              dtPathCorridor::setCorridor
                        ((dtPathCorridor *)(lVar20 + 8),(float *)&local_140,__src,uVar8);
              dtLocalBoundary::reset((dtLocalBoundary *)(lVar13 + lVar21 * 0x270 + 0x30));
              uVar9 = 2;
            }
            else {
LAB_011904a0:
              uVar9 = 1;
            }
          }
          *puVar3 = uVar9;
          lVar13 = lVar13 + lVar21 * 0x270;
        }
        *(undefined4 *)(lVar13 + 0x26c) = 0;
      }
LAB_011902e4:
      lVar21 = lVar21 + 1;
    } while (lVar21 < *in_x0);
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


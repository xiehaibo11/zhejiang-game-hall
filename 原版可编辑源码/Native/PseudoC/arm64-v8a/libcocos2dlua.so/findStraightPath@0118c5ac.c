
/* dtNavMeshQuery::findStraightPath(float const*, float const*, unsigned int const*, int, float*,
   unsigned char*, unsigned int*, int*, int, int) const */

uint __thiscall
dtNavMeshQuery::findStraightPath
          (dtNavMeshQuery *this,float *param_1,float *param_2,uint *param_3,int param_4,
          float *param_5,uchar *param_6,uint *param_7,int *param_8,int param_9,int param_10)

{
  uint uVar1;
  uchar uVar2;
  long lVar3;
  uchar uVar4;
  uchar uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  dtNavMeshQuery *pdVar14;
  int iVar15;
  long lVar16;
  float extraout_s0;
  int local_104;
  uint local_fc;
  uint local_f8;
  int local_f0;
  int iStack_ec;
  uchar local_dc [4];
  uchar local_d8 [4];
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar13 = 0x80000008;
  *param_8 = 0;
  if (((param_9 == 0) || (*param_3 == 0)) ||
     (iVar12 = closestPointOnPolyBoundary(this,*param_3,param_1,&local_7c), iVar12 < 0))
  goto LAB_0118ccdc;
  pdVar14 = (dtNavMeshQuery *)
            closestPointOnPolyBoundary(this,param_3[param_4 + -1],param_2,&local_88);
  if ((int)pdVar14 < 0) {
    pdVar14 = (dtNavMeshQuery *)0x80000008;
  }
  else {
    pdVar14 = (dtNavMeshQuery *)
              appendVertex(pdVar14,&local_7c,'\x01',*param_3,param_5,param_6,param_7,param_8,param_9
                          );
    if ((int)pdVar14 == 0x20000000) {
      if (1 < param_4) {
        local_90 = fStack_74;
        local_a0 = fStack_74;
        local_b0 = fStack_74;
        uVar1 = param_10 & 3;
        local_104 = 0;
        uVar4 = '\0';
        local_f0 = 0;
        iStack_ec = 0;
        local_98 = local_7c;
        fStack_94 = local_78;
        local_a8 = local_7c;
        fStack_a4 = local_78;
        local_b8 = local_7c;
        fStack_b4 = local_78;
        local_fc = *param_3;
        iVar12 = 0;
        uVar5 = '\0';
        local_f8 = local_fc;
        do {
          lVar16 = (long)iVar12;
          iVar15 = (int)(lVar16 + 1);
          if (iVar15 < param_4) {
            pdVar14 = (dtNavMeshQuery *)
                      getPortalPoints(this,param_3[lVar16],param_3[lVar16 + 1],&local_c4,&local_d0,
                                      local_d8,local_dc);
            if ((int)pdVar14 < 0) {
              pdVar14 = (dtNavMeshQuery *)
                        closestPointOnPolyBoundary(this,param_3[lVar16],param_2,&local_88);
              if (-1 < (int)pdVar14) {
                if (uVar1 != 0) {
                  pdVar14 = (dtNavMeshQuery *)
                            appendPortals(this,local_104,iVar12,&local_88,param_3,param_5,param_6,
                                          param_7,param_8,param_9,param_10);
                }
                appendVertex(pdVar14,&local_88,'\0',param_3[lVar16],param_5,param_6,param_7,param_8,
                             param_9);
                uVar13 = 0x40000040;
                if (param_9 <= *param_8) {
                  uVar13 = 0x40000050;
                }
              }
              goto LAB_0118cccc;
            }
            if ((iVar12 != 0) ||
               (pdVar14 = (dtNavMeshQuery *)
                          dtDistancePtSegSqr2D(&local_98,&local_c4,&local_d0,&fStack_d4),
               1.0000001e-06 <= extraout_s0)) goto LAB_0118c77c;
            iVar12 = 0;
            fVar6 = local_b8;
            fVar7 = fStack_b4;
            fVar8 = local_b0;
            fVar9 = local_a8;
            fVar10 = fStack_a4;
            fVar11 = local_a0;
          }
          else {
            local_dc[0] = '\0';
            local_d8[0] = '\0';
            local_c4 = local_88;
            local_c0 = fStack_84;
            local_bc = local_80;
            local_d0 = local_88;
            local_cc = fStack_84;
            local_c8 = local_80;
LAB_0118c77c:
            if ((local_b0 - local_90) * (local_d0 - local_98) -
                (local_b8 - local_98) * (local_c8 - local_90) <= 0.0) {
              if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
                 (pdVar14 = (dtNavMeshQuery *)
                            __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr),
                 (int)pdVar14 != 0)) {
                dtVequal(float_const*,float_const*)::thr = 3.7252903e-09;
                pdVar14 = (dtNavMeshQuery *)
                          __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
              }
              if ((dtVequal(float_const*,float_const*)::thr <=
                   (local_b8 - local_98) * (local_b8 - local_98) +
                   (fStack_b4 - fStack_94) * (fStack_b4 - fStack_94) +
                   (local_b0 - local_90) * (local_b0 - local_90)) &&
                 ((local_a0 - local_90) * (local_d0 - local_98) -
                  (local_a8 - local_98) * (local_c8 - local_90) <= 0.0)) {
                if ((uVar1 == 0) ||
                   (pdVar14 = (dtNavMeshQuery *)
                              appendPortals(this,local_104,local_f0,&local_a8,param_3,param_5,
                                            param_6,param_7,param_8,param_9,param_10),
                   (int)pdVar14 == 0x20000000)) {
                  local_98 = local_a8;
                  fStack_94 = fStack_a4;
                  local_90 = local_a0;
                  uVar2 = '\x02';
                  if (local_fc != 0) {
                    uVar2 = (uVar4 == '\x01') << 2;
                  }
                  pdVar14 = (dtNavMeshQuery *)
                            appendVertex(pdVar14,&local_98,uVar2,local_fc,param_5,param_6,param_7,
                                         param_8,param_9);
                  if ((int)pdVar14 == 0x20000000) {
                    iStack_ec = local_f0;
                    iVar12 = local_f0;
                    local_104 = iStack_ec;
                    fVar6 = local_98;
                    fVar7 = fStack_94;
                    fVar8 = local_90;
                    fVar9 = local_98;
                    fVar10 = fStack_94;
                    fVar11 = local_90;
                    goto LAB_0118c6e8;
                  }
                }
                goto LAB_0118ccd8;
              }
              local_b0 = local_c8;
              local_b8 = local_d0;
              fStack_b4 = local_cc;
              iStack_ec = iVar12;
              uVar5 = local_dc[0];
              if (iVar15 < param_4) {
                local_f8 = param_3[iVar15];
              }
              else {
                local_f8 = 0;
              }
            }
            fVar6 = local_b8;
            fVar7 = fStack_b4;
            fVar8 = local_b0;
            fVar9 = local_a8;
            fVar10 = fStack_a4;
            fVar11 = local_a0;
            if (0.0 <= (local_a0 - local_90) * (local_c4 - local_98) -
                       (local_a8 - local_98) * (local_bc - local_90)) {
              if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
                 (pdVar14 = (dtNavMeshQuery *)
                            __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr),
                 (int)pdVar14 != 0)) {
                dtVequal(float_const*,float_const*)::thr = 3.7252903e-09;
                pdVar14 = (dtNavMeshQuery *)
                          __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
              }
              if (((local_a8 - local_98) * (local_a8 - local_98) +
                   (fStack_a4 - fStack_94) * (fStack_a4 - fStack_94) +
                   (local_a0 - local_90) * (local_a0 - local_90) <
                   dtVequal(float_const*,float_const*)::thr) ||
                 ((local_b0 - local_90) * (local_c4 - local_98) -
                  (local_b8 - local_98) * (local_bc - local_90) < 0.0)) {
                fVar6 = local_b8;
                fVar7 = fStack_b4;
                fVar8 = local_b0;
                fVar9 = local_c4;
                fVar10 = local_c0;
                fVar11 = local_bc;
                local_f0 = iVar12;
                uVar4 = local_dc[0];
                if (iVar15 < param_4) {
                  local_fc = param_3[iVar15];
                }
                else {
                  local_fc = 0;
                }
              }
              else {
                if ((uVar1 != 0) &&
                   (pdVar14 = (dtNavMeshQuery *)
                              appendPortals(this,local_104,iStack_ec,&local_b8,param_3,param_5,
                                            param_6,param_7,param_8,param_9,param_10),
                   (int)pdVar14 != 0x20000000)) goto LAB_0118ccd8;
                local_98 = local_b8;
                fStack_94 = fStack_b4;
                local_90 = local_b0;
                uVar2 = '\x02';
                if (local_f8 != 0) {
                  uVar2 = (uVar5 == '\x01') << 2;
                }
                pdVar14 = (dtNavMeshQuery *)
                          appendVertex(pdVar14,&local_98,uVar2,local_f8,param_5,param_6,param_7,
                                       param_8,param_9);
                iVar12 = iStack_ec;
                local_104 = iStack_ec;
                fVar6 = local_98;
                fVar7 = fStack_94;
                fVar8 = local_90;
                fVar9 = local_98;
                fVar10 = fStack_94;
                fVar11 = local_90;
                local_f0 = iStack_ec;
                if ((int)pdVar14 != 0x20000000) goto LAB_0118ccd8;
              }
            }
          }
LAB_0118c6e8:
          local_a0 = fVar11;
          fStack_a4 = fVar10;
          local_a8 = fVar9;
          local_b0 = fVar8;
          fStack_b4 = fVar7;
          local_b8 = fVar6;
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_4);
        if (uVar1 != 0) {
          pdVar14 = (dtNavMeshQuery *)
                    appendPortals(this,local_104,param_4 + -1,&local_88,param_3,param_5,param_6,
                                  param_7,param_8,param_9,param_10);
          uVar13 = (uint)pdVar14;
          if ((uint)pdVar14 != 0x20000000) {
LAB_0118cccc:
            pdVar14 = (dtNavMeshQuery *)(ulong)uVar13;
            goto LAB_0118ccd8;
          }
        }
      }
      appendVertex(pdVar14,&local_88,'\x02',0,param_5,param_6,param_7,param_8,param_9);
      uVar13 = 0x40000000;
      if (param_9 <= *param_8) {
        uVar13 = 0x40000010;
      }
      pdVar14 = (dtNavMeshQuery *)(ulong)uVar13;
    }
  }
LAB_0118ccd8:
  uVar13 = (uint)pdVar14;
LAB_0118ccdc:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00a0fcbc(long *param_1,int param_2,undefined1 *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  uint local_c4;
  socklen_t local_9c;
  int local_98 [12];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar19 = (long)param_2;
  lVar20 = *param_1;
  *param_3 = 0;
  if (*(char *)((long)param_1 + lVar19 + 0x3c5) != '\0') {
    uVar10 = 0;
    *param_3 = 1;
    goto LAB_00a0fd14;
  }
  auVar21 = FUN_00a18e40();
  uVar14 = auVar21._8_8_;
  uVar13 = auVar21._0_8_;
  lVar16 = *(long *)(lVar20 + 0x358);
  lVar18 = *(long *)(lVar20 + 0x360);
  bVar4 = 0 < lVar16 | 2;
  if (lVar18 < 1) {
    bVar4 = 0 < lVar16;
  }
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      if (lVar18 <= lVar16) {
        lVar16 = lVar18;
      }
    }
    else {
      lVar16 = lVar18;
      if (bVar4 != 2) {
        lVar16 = 300000;
      }
    }
  }
  lVar18 = FUN_00a18ea0(uVar13,uVar14,*(undefined8 *)(lVar20 + 0x9d8),
                        *(undefined8 *)(lVar20 + 0x9e0));
  uVar10 = lVar16 - lVar18;
  if (uVar10 == 0) {
    uVar10 = 0xffffffffffffffff;
  }
  if ((long)uVar10 < 0) {
    FUN_00a23020(lVar20,"Connection time-out");
    uVar10 = 0x1c;
    goto LAB_00a0fd14;
  }
  iVar9 = 0;
  piVar2 = (int *)((long)param_1 + 0x26c);
  local_c4 = 0;
  lVar16 = 0;
  do {
    iVar8 = *(int *)((long)param_1 + lVar16 * 4 + 0x268);
    if (iVar8 == -1) goto LAB_00a10204;
    uVar5 = (uint)lVar16 ^ 1;
    piVar3 = (int *)((long)param_1 + lVar16 * 4 + 0x268);
    piVar11 = (int *)FUN_00a159e8(0xffffffff,0xffffffff,iVar8,0);
    uVar7 = (uint)piVar11;
    if (uVar7 == 2) {
LAB_00a0fed4:
      local_9c = 4;
      local_98[0] = 0;
      iVar8 = getsockopt(*piVar3,1,4,local_98,&local_9c);
      iVar9 = local_98[0];
      if (iVar8 != 0) {
        piVar11 = (int *)__errno();
        iVar9 = *piVar11;
      }
      local_98[0] = iVar9;
      if ((iVar9 != 0x6a) && (iVar9 != 0)) {
        piVar11 = (int *)FUN_00a22d58(lVar20,"Connection failed\n");
        goto LAB_00a0ff94;
      }
      *(int *)((long)param_1 + lVar19 * 4 + 0x260) = *piVar3;
      param_1[0xc] = param_1[lVar16 + 0xd];
      *piVar3 = -1;
      iVar9 = *(int *)((long)param_1 + (long)(int)uVar5 * 4 + 0x268);
      if (iVar9 != -1) {
        if (param_1[7] == 0) {
LAB_00a10300:
          FUN_00a14704(param_1,iVar9);
          close(iVar9);
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10188 with catch @ 00a102f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10350 with catch @ 00a102f4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a10508 with catch @ 00a102f4
                        */
          if ((*(int *)((long)param_1 + 0x264) == iVar9) &&
             (*(char *)((long)param_1 + 0x271) != '\0')) {
            *(undefined1 *)((long)param_1 + 0x271) = 0;
            goto LAB_00a10300;
          }
          FUN_00a14704(param_1,iVar9);
          (*(code *)param_1[7])(param_1[8],iVar9);
        }
        *(undefined4 *)((long)param_1 + (long)(int)uVar5 * 4 + 0x268) = 0xffffffff;
      }
      uVar10 = FUN_00a2999c(param_1,param_2);
                    /* try { // try from 00a10348 to 00b1034f has its CatchHandler @ 00a1063c */
      if ((int)uVar10 == 0) {
                    /* try { // try from 00a10350 to 00b104ff has its CatchHandler @ 00a102f4 */
        *(undefined1 *)((long)param_1 + lVar19 + 0x3c5) = 1;
        *param_3 = 1;
        if (param_2 == 0) {
          FUN_00a1b51c(lVar20,4);
        }
        FUN_00a0f9ac(param_1,*(undefined4 *)((long)param_1 + lVar19 * 4 + 0x260));
        FUN_00a29ab0(param_1);
        uVar10 = 0;
      }
      goto LAB_00a0fd14;
    }
    if (uVar7 == 0) {
      piVar11 = (int *)FUN_00a18ea0(uVar13,uVar14,param_1[0x7c],param_1[0x7d]);
      if ((long)piVar11 < param_1[0x7f]) {
        iVar9 = 0;
      }
      else {
        piVar11 = (int *)FUN_00a22d58(lVar20,"After %ldms connect time, move on!\n");
        iVar9 = 0x6e;
      }
      if (((lVar16 == 0) && (param_1[0xe] == 0)) &&
         (piVar11 = (int *)FUN_00a18ea0(uVar13,uVar14,param_1[0x7c],param_1[0x7d]),
         199 < (long)piVar11)) {
        iVar8 = *piVar2;
        *piVar2 = -1;
        if (param_2 == 0) {
          lVar18 = param_1[0xe];
          if (lVar18 == 0) {
            lVar18 = param_1[0xd];
            if (lVar18 == 0) goto joined_r0x00a10184;
            iVar15 = 10;
            if (*(int *)(lVar18 + 4) != 2) {
              iVar15 = 2;
            }
            lVar18 = *(long *)(lVar18 + 0x28);
          }
          else {
            iVar15 = *(int *)(lVar18 + 4);
            lVar18 = *(long *)(lVar18 + 0x28);
          }
          for (; lVar18 != 0; lVar18 = *(long *)(lVar18 + 0x28)) {
            if (param_1[0xd] != 0) {
              while (*(int *)(lVar18 + 4) != iVar15) {
                lVar18 = *(long *)(lVar18 + 0x28);
                if (lVar18 == 0) goto joined_r0x00a10184;
              }
            }
            piVar11 = (int *)FUN_00a10718(param_1,lVar18,piVar2);
            if ((int)piVar11 != 7) {
              param_1[0xe] = lVar18;
              break;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10190 with catch @ 00a1013c
                        */
          }
        }
joined_r0x00a10184:
        if (iVar8 != -1) {
          if (param_1[7] != 0) {
            if ((*(int *)((long)param_1 + 0x264) != iVar8) ||
               (*(char *)((long)param_1 + 0x271) == '\0')) {
                    /* try { // try from 00a100ec to 00b100f7 has its CatchHandler @ 00a10134 */
              FUN_00a14704(param_1,iVar8);
                    /* try { // try from 00a100f8 to 00b1013b has its CatchHandler @ 00a0ffd4 */
              piVar11 = (int *)(*(code *)param_1[7])(param_1[8],iVar8);
              goto joined_r0x00a0ff90;
            }
            *(undefined1 *)((long)param_1 + 0x271) = 0;
          }
          FUN_00a14704(param_1,iVar8);
          uVar7 = close(iVar8);
          piVar11 = (int *)(ulong)uVar7;
        }
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x3d6) != '\0') goto LAB_00a0fed4;
      if ((uVar7 >> 2 & 1) != 0) {
        local_9c = 4;
        local_98[0] = 0;
        iVar9 = getsockopt(*piVar3,1,4,local_98,&local_9c);
        if (iVar9 == 0) {
          piVar11 = (int *)0x0;
          iVar9 = local_98[0];
        }
        else {
          piVar11 = (int *)__errno();
          iVar9 = *piVar11;
          local_98[0] = iVar9;
        }
      }
    }
joined_r0x00a0ff90:
    if (iVar9 != 0) {
LAB_00a0ff94:
      *(int *)(lVar20 + 0x8b64) = iVar9;
      piVar11 = (int *)__errno(piVar11);
      *piVar11 = iVar9;
      plVar17 = param_1 + lVar16 + 0xd;
      if (*plVar17 != 0) {
        FUN_00a1a0b4(*plVar17,local_98,0x2e);
        lVar18 = param_1[0x33];
        uVar12 = FUN_00a155d4(param_1,iVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a10044 with catch @ 00a0ffd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a10074 with catch @ 00a0ffd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a100a4 with catch @ 00a0ffd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a100cc with catch @ 00a0ffd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a100f8 with catch @ 00a0ffd4
                        */
        FUN_00a22d58(lVar20,"connect to %s port %ld failed: %s\n",local_98,lVar18,uVar12);
        param_1[0x7f] = uVar10 >> (*(long *)(*plVar17 + 0x28) != 0);
        iVar8 = *piVar3;
        *piVar3 = -1;
        if (param_2 == 0) {
          lVar18 = *plVar17;
          if (lVar18 == 0) {
                    /* try { // try from 00a1009c to 00b100a3 has its CatchHandler @ 00a10134 */
            lVar18 = param_1[0xd];
            if (lVar18 != 0) {
                    /* try { // try from 00a100a4 to 00b100c3 has its CatchHandler @ 00a0ffd4 */
              iVar15 = 10;
              if (*(int *)(lVar18 + 4) != 2) {
                iVar15 = 2;
              }
              lVar18 = *(long *)(lVar18 + 0x28);
              goto joined_r0x00a100bc;
            }
          }
          else {
                    /* try { // try from 00a10068 to 00b10073 has its CatchHandler @ 00a10138 */
            iVar15 = *(int *)(lVar18 + 4);
            lVar18 = *(long *)(lVar18 + 0x28);
joined_r0x00a100bc:
            for (; lVar18 != 0; lVar18 = *(long *)(lVar18 + 0x28)) {
              if (param_1[(long)(int)uVar5 + 0xd] != 0) {
                while (*(int *)(lVar18 + 4) != iVar15) {
                  lVar18 = *(long *)(lVar18 + 0x28);
                  if (lVar18 == 0) goto LAB_00a101b4;
                }
              }
              uVar7 = FUN_00a10718(param_1,lVar18,piVar3);
              if (uVar7 != 7) {
                *plVar17 = lVar18;
                goto joined_r0x00a101e4;
              }
                    /* try { // try from 00a10190 to 00b102f3 has its CatchHandler @ 00a1013c */
            }
          }
LAB_00a101b4:
          uVar7 = 7;
        }
        else {
          uVar7 = 7;
        }
joined_r0x00a101e4:
        if (iVar8 != -1) {
          if (param_1[7] != 0) {
            if ((*(int *)((long)param_1 + 0x264) != iVar8) ||
               (*(char *)((long)param_1 + 0x271) == '\0')) {
              FUN_00a14704(param_1,iVar8);
              (*(code *)param_1[7])(param_1[8],iVar8);
              goto joined_r0x00a10058;
            }
                    /* try { // try from 00a1003c to 00b10043 has its CatchHandler @ 00a10138 */
            *(undefined1 *)((long)param_1 + 0x271) = 0;
          }
                    /* try { // try from 00a10044 to 00b10067 has its CatchHandler @ 00a0ffd4 */
          FUN_00a14704(param_1,iVar8);
          close(iVar8);
        }
joined_r0x00a10058:
        if ((uVar7 != 7) || (*(int *)((long)param_1 + (long)(int)uVar5 * 4 + 0x268) == -1)) {
          local_c4 = uVar7;
        }
      }
    }
LAB_00a10204:
    bVar1 = lVar16 < 1;
    lVar16 = lVar16 + 1;
  } while (bVar1);
  if (local_c4 == 0) {
    uVar10 = 0;
    goto LAB_00a0fd14;
  }
  if (param_1[0xe] == 0) {
    iVar8 = *piVar2;
    *piVar2 = -1;
    if ((param_2 == 0) && (lVar19 = param_1[0xd], lVar19 != 0)) {
      iVar15 = 10;
      if (*(int *)(lVar19 + 4) != 2) {
        iVar15 = 2;
      }
      for (lVar19 = *(long *)(lVar19 + 0x28); lVar19 != 0; lVar19 = *(long *)(lVar19 + 0x28)) {
        if (param_1[0xd] != 0) {
          while (*(int *)(lVar19 + 4) != iVar15) {
            lVar19 = *(long *)(lVar19 + 0x28);
            if (lVar19 == 0) goto LAB_00a10234;
          }
        }
        local_c4 = FUN_00a10718(param_1,lVar19,piVar2);
        if (local_c4 != 7) {
          param_1[0xe] = lVar19;
          goto LAB_00a10238;
        }
      }
    }
LAB_00a10234:
    local_c4 = 7;
LAB_00a10238:
    if (iVar8 != -1) {
      if (param_1[7] != 0) {
        if ((*(int *)((long)param_1 + 0x264) != iVar8) || (*(char *)((long)param_1 + 0x271) == '\0')
           ) {
          FUN_00a14704(param_1,iVar8);
          (*(code *)param_1[7])(param_1[8],iVar8);
          goto LAB_00a103d4;
        }
        *(undefined1 *)((long)param_1 + 0x271) = 0;
      }
      FUN_00a14704(param_1,iVar8);
      close(iVar8);
    }
LAB_00a103d4:
    if (local_c4 == 0) {
      uVar10 = 0;
      goto LAB_00a0fd14;
    }
  }
  if (*(char *)((long)param_1 + 0x3bf) == '\0') {
    if (*(char *)((long)param_1 + 0x3be) == '\0') {
      if (*(char *)((long)param_1 + 0x3bb) == '\0') {
        plVar17 = param_1 + 0x18;
      }
      else {
        plVar17 = param_1 + 0x1d;
      }
    }
    else {
      plVar17 = param_1 + 0x2d;
    }
  }
  else {
    plVar17 = param_1 + 0x25;
  }
  lVar19 = *plVar17;
  lVar16 = param_1[0x33];
  uVar13 = FUN_00a155d4(param_1,iVar9);
  FUN_00a23020(lVar20,"Failed to connect to %s port %ld: %s",lVar19,lVar16,uVar13);
  uVar10 = (ulong)local_c4;
LAB_00a0fd14:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


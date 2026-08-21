
/* v8::internal::compiler::LinearScanAllocator::ChooseOneOfTwoPredecessorStates(v8::internal::compiler::InstructionBlock*,
   v8::internal::compiler::LifetimePosition) */

undefined4 __thiscall
v8::internal::compiler::LinearScanAllocator::ChooseOneOfTwoPredecessorStates
          (LinearScanAllocator *this,long param_1,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long **pplVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long **local_2a0;
  long **local_298;
  long **local_290;
  long *aplStack_288 [32];
  long *local_188;
  long *local_180;
  long *local_178;
  long alStack_170 [32];
  long local_70 [2];
  
  lVar4 = tpidr_el0;
  local_70[0] = *(long *)(lVar4 + 0x28);
  lVar17 = *(long *)(*(long *)this + 0x1b0);
  iVar2 = (*(int **)(param_1 + 0x20))[1];
  local_178 = local_70;
  plVar16 = (long *)(lVar17 + (long)**(int **)(param_1 + 0x20) * 0x20);
  plVar19 = (long *)*plVar16;
  plVar15 = (long *)plVar16[1];
  plVar18 = alStack_170;
  local_188 = alStack_170;
  local_180 = alStack_170;
  if (plVar19 != plVar15) {
LAB_016601ec:
    lVar8 = *plVar19;
    lVar7 = *(long *)(lVar8 + 0x20);
    for (lVar6 = *(long *)(lVar7 + 0x90); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x28)) {
      if (param_3 < *(int *)(*(long *)(lVar6 + 8) + 4)) {
        *(long *)(lVar7 + 0x90) = lVar6;
        puVar10 = (undefined8 *)(lVar6 + 0x10);
        if ((((int *)*puVar10 == (int *)0x0) || (param_3 < *(int *)*puVar10)) ||
           (*(int *)(*(long *)(lVar6 + 8) + 4) <= param_3)) goto LAB_016601e0;
        puVar9 = (undefined8 *)(lVar6 + 0x30);
        puVar13 = puVar10;
        if (((int *)*puVar9 != (int *)0x0) && (puVar13 = puVar9, param_3 < *(int *)*puVar9)) {
          *puVar9 = 0;
          puVar13 = puVar10;
        }
        puVar11 = (uint *)*puVar13;
        if (puVar11 == (uint *)0x0) goto LAB_016601e0;
        goto LAB_01660270;
      }
    }
    *(undefined8 *)(lVar7 + 0x90) = 0;
    goto LAB_016601e0;
  }
LAB_0166034c:
  plVar15 = (long *)(lVar17 + (long)iVar2 * 0x20);
  local_290 = &local_188;
  plVar19 = (long *)*plVar15;
  plVar14 = (long *)plVar15[1];
  pplVar5 = aplStack_288;
  local_2a0 = aplStack_288;
  local_298 = aplStack_288;
joined_r0x01660378:
  if (plVar19 == plVar14) {
    if ((plVar18 == local_188) && (pplVar5 == local_2a0)) {
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Looking at only uses\n");
      }
      plVar19 = (long *)*plVar16;
      plVar16 = (long *)plVar16[1];
joined_r0x0166053c:
      if (plVar19 != plVar16) {
LAB_01660554:
        lVar6 = *plVar19;
        lVar8 = *(long *)(lVar6 + 0x20);
        lVar17 = *(long *)(lVar8 + 0x90);
        while( true ) {
          if (lVar17 == 0) {
            *(undefined8 *)(lVar8 + 0x90) = 0;
            plVar19 = plVar19 + 1;
            goto joined_r0x0166053c;
          }
          if (param_3 < *(int *)(*(long *)(lVar17 + 8) + 4)) break;
          lVar17 = *(long *)(lVar17 + 0x28);
        }
        *(long *)(lVar8 + 0x90) = lVar17;
        puVar10 = (undefined8 *)(lVar17 + 0x10);
        if ((((int *)*puVar10 != (int *)0x0) && (*(int *)*puVar10 <= param_3)) &&
           (param_3 < *(int *)(*(long *)(lVar17 + 8) + 4))) {
          puVar9 = (undefined8 *)(lVar17 + 0x30);
          puVar13 = puVar10;
          if (((int *)*puVar9 != (int *)0x0) && (puVar13 = puVar9, param_3 < *(int *)*puVar9)) {
            *puVar9 = 0;
            puVar13 = puVar10;
          }
          for (puVar11 = (uint *)*puVar13; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)
              ) {
            uVar12 = *puVar11;
            if ((int)uVar12 <= param_3) {
              if ((int *)*puVar9 == (int *)0x0) {
                if (uVar12 < 0x80000000) goto LAB_016605f8;
              }
              else if (*(int *)*puVar9 < (int)uVar12) {
LAB_016605f8:
                *puVar9 = puVar11;
                uVar12 = *puVar11;
              }
            }
            if (param_3 < (int)uVar12) break;
            if (param_3 < (int)puVar11[1]) {
              if (lVar17 != 0) {
                lVar8 = *(long *)(lVar17 + 0x38);
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) <= param_3)) goto LAB_01660650;
                lVar8 = *(long *)(lVar17 + 0x18);
                goto joined_r0x0166064c;
              }
              break;
            }
          }
        }
        goto joined_r0x01660670;
      }
LAB_016606b8:
      plVar19 = (long *)*plVar15;
      plVar16 = (long *)plVar15[1];
joined_r0x016606c4:
      if (plVar19 != plVar16) {
LAB_016606dc:
        lVar6 = *plVar19;
        lVar8 = *(long *)(lVar6 + 0x20);
        lVar17 = *(long *)(lVar8 + 0x90);
        while( true ) {
          if (lVar17 == 0) {
            *(undefined8 *)(lVar8 + 0x90) = 0;
            plVar19 = plVar19 + 1;
            goto joined_r0x016606c4;
          }
          if (param_3 < *(int *)(*(long *)(lVar17 + 8) + 4)) break;
          lVar17 = *(long *)(lVar17 + 0x28);
        }
        *(long *)(lVar8 + 0x90) = lVar17;
        puVar10 = (undefined8 *)(lVar17 + 0x10);
        if ((((int *)*puVar10 != (int *)0x0) && (*(int *)*puVar10 <= param_3)) &&
           (param_3 < *(int *)(*(long *)(lVar17 + 8) + 4))) {
          puVar9 = (undefined8 *)(lVar17 + 0x30);
          puVar13 = puVar10;
          if (((int *)*puVar9 != (int *)0x0) && (puVar13 = puVar9, param_3 < *(int *)*puVar9)) {
            *puVar9 = 0;
            puVar13 = puVar10;
          }
          for (puVar11 = (uint *)*puVar13; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)
              ) {
            uVar12 = *puVar11;
            if ((int)uVar12 <= param_3) {
              if ((int *)*puVar9 == (int *)0x0) {
                if (uVar12 < 0x80000000) goto LAB_01660780;
              }
              else if (*(int *)*puVar9 < (int)uVar12) {
LAB_01660780:
                *puVar9 = puVar11;
                uVar12 = *puVar11;
              }
            }
            if (param_3 < (int)uVar12) break;
            if (param_3 < (int)puVar11[1]) {
              if (lVar17 != 0) {
                lVar8 = *(long *)(lVar17 + 0x38);
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) <= param_3)) goto LAB_016607d8;
                lVar8 = *(long *)(lVar17 + 0x18);
                goto joined_r0x016607d4;
              }
              break;
            }
          }
        }
        goto joined_r0x016607f8;
      }
    }
LAB_01660840:
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Vote went %zu vs %zu\n",(long)local_180 - (long)local_188 >> 3,
             (long)local_298 - (long)local_2a0 >> 3);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x20);
    if ((ulong)((long)local_180 - (long)local_188) <= (ulong)((long)local_298 - (long)local_2a0)) {
      puVar1 = *(undefined4 **)(param_1 + 0x20) + 1;
    }
    uVar3 = *puVar1;
    if (local_2a0 != aplStack_288) {
      free(local_2a0);
    }
    if (local_188 != alStack_170) {
      free(local_188);
    }
    if (*(long *)(lVar4 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar3;
  }
  lVar6 = *plVar19;
  lVar8 = *(long *)(lVar6 + 0x20);
  for (lVar17 = *(long *)(lVar8 + 0x90); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x28)) {
    if (param_3 < *(int *)(*(long *)(lVar17 + 8) + 4)) {
      *(long *)(lVar8 + 0x90) = lVar17;
      puVar10 = (undefined8 *)(lVar17 + 0x10);
      if ((((int *)*puVar10 == (int *)0x0) || (param_3 < *(int *)*puVar10)) ||
         (*(int *)(*(long *)(lVar17 + 8) + 4) <= param_3)) goto LAB_01660384;
      puVar9 = (undefined8 *)(lVar17 + 0x30);
      puVar13 = puVar10;
      if (((int *)*puVar9 != (int *)0x0) && (puVar13 = puVar9, param_3 < *(int *)*puVar9)) {
        *puVar9 = 0;
        puVar13 = puVar10;
      }
      puVar11 = (uint *)*puVar13;
      if (puVar11 == (uint *)0x0) goto LAB_01660384;
      goto LAB_01660414;
    }
  }
  *(undefined8 *)(lVar8 + 0x90) = 0;
  goto LAB_01660384;
  while (puVar11 = *(uint **)(puVar11 + 2), puVar11 != (uint *)0x0) {
LAB_01660270:
    uVar12 = *puVar11;
    if ((int)uVar12 <= param_3) {
      if ((int *)*puVar9 == (int *)0x0) {
        if (uVar12 < 0x80000000) goto LAB_01660290;
      }
      else if (*(int *)*puVar9 < (int)uVar12) {
LAB_01660290:
        *puVar9 = puVar11;
        uVar12 = *puVar11;
      }
    }
    if (param_3 < (int)uVar12) break;
    if (param_3 < (int)puVar11[1]) {
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x38);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) <= param_3)) goto LAB_016602e8;
        lVar7 = *(long *)(lVar6 + 0x18);
        goto joined_r0x016602e4;
      }
      break;
    }
  }
  goto LAB_016601e0;
joined_r0x016602e4:
  if (lVar7 == 0) goto LAB_016602fc;
LAB_016602e8:
  if (param_3 <= *(int *)(lVar7 + 0x18)) {
    *(long *)(lVar6 + 0x38) = lVar7;
    goto LAB_01660308;
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  goto joined_r0x016602e4;
LAB_016602fc:
  *(undefined8 *)(lVar6 + 0x38) = 0;
  goto LAB_016601e0;
  while (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0) {
LAB_01660308:
    if ((*(byte *)(lVar7 + 0x1c) >> 5 & 1) != 0) {
      lVar6 = *(long *)(lVar8 + 0x20);
      if (plVar18 == local_178) {
        plVar18 = (long *)base::SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>::Grow
                                    ((SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul> *
                                     )&local_188);
      }
      local_180 = plVar18 + 1;
      *plVar18 = lVar6;
      plVar18 = local_180;
      break;
    }
  }
LAB_016601e0:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar15) goto LAB_0166034c;
  goto LAB_016601ec;
joined_r0x0166064c:
  if (lVar8 == 0) goto LAB_01660664;
LAB_01660650:
  if (param_3 <= *(int *)(lVar8 + 0x18)) {
    *(long *)(lVar17 + 0x38) = lVar8;
    lVar17 = *(long *)(lVar6 + 0x20);
    if (local_180 == local_178) {
      local_180 = (long *)base::SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>::Grow
                                    ((SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul> *
                                     )&local_188);
    }
    *local_180 = lVar17;
    local_180 = local_180 + 1;
    goto joined_r0x01660670;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  goto joined_r0x0166064c;
LAB_01660664:
  *(undefined8 *)(lVar17 + 0x38) = 0;
joined_r0x01660670:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar16) goto LAB_016606b8;
  goto LAB_01660554;
joined_r0x016607d4:
  if (lVar8 == 0) goto LAB_016607ec;
LAB_016607d8:
  if (param_3 <= *(int *)(lVar8 + 0x18)) {
    *(long *)(lVar17 + 0x38) = lVar8;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (local_298 == local_290) {
      local_298 = (long **)base::SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>::Grow
                                     ((SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>
                                       *)&local_2a0);
    }
    *local_298 = plVar18;
    local_298 = local_298 + 1;
    goto joined_r0x016607f8;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  goto joined_r0x016607d4;
LAB_016607ec:
  *(undefined8 *)(lVar17 + 0x38) = 0;
joined_r0x016607f8:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar16) goto LAB_01660840;
  goto LAB_016606dc;
  while (puVar11 = *(uint **)(puVar11 + 2), puVar11 != (uint *)0x0) {
LAB_01660414:
    uVar12 = *puVar11;
    if ((int)uVar12 <= param_3) {
      if ((int *)*puVar9 == (int *)0x0) {
        if (uVar12 < 0x80000000) goto LAB_01660434;
      }
      else if (*(int *)*puVar9 < (int)uVar12) {
LAB_01660434:
        *puVar9 = puVar11;
        uVar12 = *puVar11;
      }
    }
    if (param_3 < (int)uVar12) break;
    if (param_3 < (int)puVar11[1]) {
      if (lVar17 != 0) {
        lVar8 = *(long *)(lVar17 + 0x38);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) <= param_3)) goto LAB_0166048c;
        lVar8 = *(long *)(lVar17 + 0x18);
        goto joined_r0x01660488;
      }
      break;
    }
  }
  goto LAB_01660384;
joined_r0x01660488:
  if (lVar8 == 0) goto LAB_016604a0;
LAB_0166048c:
  if (param_3 <= *(int *)(lVar8 + 0x18)) {
    *(long *)(lVar17 + 0x38) = lVar8;
    goto LAB_016604ac;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  goto joined_r0x01660488;
LAB_016604a0:
  *(undefined8 *)(lVar17 + 0x38) = 0;
  goto LAB_01660384;
  while (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0) {
LAB_016604ac:
    if ((*(byte *)(lVar8 + 0x1c) >> 5 & 1) != 0) {
      plVar18 = *(long **)(lVar6 + 0x20);
      if (pplVar5 == local_290) {
        pplVar5 = (long **)base::SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>::Grow
                                     ((SmallVector<v8::internal::compiler::TopLevelLiveRange*,32ul>
                                       *)&local_2a0);
      }
      local_298 = pplVar5 + 1;
      *pplVar5 = plVar18;
      pplVar5 = local_298;
      break;
    }
  }
LAB_01660384:
  plVar19 = plVar19 + 1;
  plVar18 = local_180;
  goto joined_r0x01660378;
}


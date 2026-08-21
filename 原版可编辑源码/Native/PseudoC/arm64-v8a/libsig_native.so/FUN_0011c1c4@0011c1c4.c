
void FUN_0011c1c4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  void *pvVar21;
  size_t __n;
  undefined1 auVar22 [16];
  undefined8 *local_c8;
  long *local_c0;
  long *local_b8;
  long *plStack_b0;
  long alStack_a8 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar12 = (char *)*param_1;
  if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != 'I')) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    pcVar12 = pcVar12 + 1;
    *param_1 = (long)pcVar12;
    if ((param_2 & 1) != 0) {
      param_1[0x49] = param_1[0x48];
    }
    plVar20 = param_1 + 2;
    lVar19 = *plVar20;
    lVar18 = param_1[3];
    plVar1 = param_1 + 0x4b;
    plVar2 = param_1 + 0x49;
    if (pcVar12 == (char *)param_1[1]) goto LAB_0011c284;
LAB_0011c264:
    if (*pcVar12 != 'E') {
LAB_0011c284:
      if ((param_2 & 1) == 0) {
        local_c0 = (long *)FUN_0011b704(param_1);
        puVar11 = (undefined8 *)0x0;
        if (local_c0 != (long *)0x0) {
          FUN_0011b8dc(plVar20,&local_c0);
          goto LAB_0011c278;
        }
        goto LAB_0011c638;
      }
      plVar13 = (long *)param_1[0x48];
      plStack_b0 = &local_68;
      if (plVar13 == plVar1) {
        local_c0 = alStack_a8;
        if (*plVar2 - (long)plVar13 == 0) {
          lVar16 = 0;
        }
        else {
          local_b8 = alStack_a8;
          __memmove_chk(alStack_a8,plVar1,*plVar2 - (long)plVar13,0x40);
          plVar13 = (long *)param_1[0x48];
          lVar16 = param_1[0x49] - (long)plVar13;
        }
        local_b8 = (long *)((long)local_c0 + lVar16);
        *plVar2 = (long)plVar13;
      }
      else {
        plStack_b0 = (long *)param_1[0x4a];
        local_b8 = (long *)*plVar2;
        param_1[0x48] = (long)plVar1;
        param_1[0x49] = (long)plVar1;
        param_1[0x4a] = (long)(param_1 + 0x53);
        local_c0 = plVar13;
      }
      puVar11 = (undefined8 *)FUN_0011b704(param_1);
      plVar13 = (long *)param_1[0x48];
      local_c8 = puVar11;
      if (local_c0 == alStack_a8) {
        plVar17 = alStack_a8;
        if (plVar13 != plVar1) {
          free(plVar13);
          param_1[0x48] = (long)plVar1;
          param_1[0x49] = (long)plVar1;
          param_1[0x4a] = (long)(param_1 + 0x53);
          plVar17 = local_c0;
          plVar13 = plVar1;
        }
        if ((long)local_b8 - (long)local_c0 != 0) {
          memmove(plVar13,plVar17,(long)local_b8 - (long)local_c0);
        }
        param_1[0x49] = param_1[0x48] + ((long)local_b8 - (long)local_c0);
        local_b8 = local_c0;
joined_r0x0011c4e0:
        if (puVar11 != (undefined8 *)0x0) goto LAB_0011c368;
LAB_0011c51c:
        bVar6 = true;
        local_c0 = local_b8;
        goto joined_r0x0011c524;
      }
      param_1[0x48] = (long)local_c0;
      if (plVar13 == plVar1) {
        param_1[0x4a] = (long)plStack_b0;
        *plVar2 = (long)local_b8;
        local_b8 = alStack_a8;
        plStack_b0 = &local_68;
        goto joined_r0x0011c4e0;
      }
      plVar17 = (long *)param_1[0x4a];
      param_1[0x4a] = (long)plStack_b0;
      *plVar2 = (long)local_b8;
      local_b8 = plVar13;
      plStack_b0 = plVar17;
      if (puVar11 == (undefined8 *)0x0) goto LAB_0011c51c;
LAB_0011c368:
      local_c0 = local_b8;
      FUN_0011b8dc(plVar20,&local_c8);
      if (*(char *)(puVar11 + 1) != '\x1c') goto LAB_0011c460;
      pvVar21 = (void *)param_1[0x25c];
      plVar13 = (long *)puVar11[2];
      lVar16 = puVar11[3];
      lVar14 = *(long *)((long)pvVar21 + 8);
      puVar10 = pvVar21;
      if (0xfef < lVar14 + 0x20U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_0011c668;
        lVar14 = 0;
        *puVar10 = pvVar21;
        puVar10[1] = 0;
        param_1[0x25c] = (long)puVar10;
      }
      *(long *)((long)puVar10 + 8) = lVar14 + 0x20;
      puVar11 = (undefined8 *)((long)puVar10 + lVar14 + 0x10);
      *puVar11 = &PTR_FUN_001382f8;
      *(undefined4 *)((long)puVar10 + lVar14 + 0x18) = 0x202021b;
      lVar15 = lVar16 << 3;
      *(long **)((long)puVar10 + lVar14 + 0x20) = plVar13;
      *(long *)((long)puVar10 + lVar14 + 0x28) = lVar16;
      plVar17 = plVar13;
      lVar3 = lVar15;
      lVar8 = lVar16;
      while (plVar7 = plVar13, lVar4 = lVar15, lVar9 = lVar16, lVar8 != 0) {
        if (*(char *)(*plVar17 + 10) != '\x01') goto joined_r0x0011c40c;
        lVar3 = lVar3 + -8;
        plVar17 = plVar17 + 1;
        lVar8 = lVar3;
      }
      *(undefined1 *)((long)puVar10 + lVar14 + 0x1a) = 1;
joined_r0x0011c40c:
      do {
        if (lVar9 == 0) goto LAB_0011c430;
        if (*(char *)(*plVar7 + 0xb) != '\x01') goto joined_r0x0011c438;
        lVar4 = lVar4 + -8;
        plVar7 = plVar7 + 1;
        lVar9 = lVar4;
      } while( true );
    }
    *param_1 = (long)(pcVar12 + 1);
    lVar18 = (lVar18 - lVar19 >> 3) * 8;
    auVar22 = FUN_00122f38(param_1,param_1[2] + lVar18,param_1[3]);
    pvVar21 = (void *)param_1[0x25c];
    param_1[3] = param_1[2] + lVar18;
    lVar18 = *(long *)((long)pvVar21 + 8);
    puVar10 = pvVar21;
    if (0xfef < lVar18 + 0x20U) {
      puVar10 = malloc(0x1000);
      if (puVar10 == (void *)0x0) {
LAB_0011c668:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar18 = 0;
      *puVar10 = pvVar21;
      puVar10[1] = 0;
      param_1[0x25c] = (long)puVar10;
    }
    *(long *)((long)puVar10 + 8) = lVar18 + 0x20;
    puVar11 = (undefined8 *)((long)puVar10 + lVar18 + 0x10);
    *puVar11 = &PTR_FUN_00138368;
    *(undefined4 *)((long)puVar10 + lVar18 + 0x18) = 0x101011e;
    *(undefined1 (*) [16])((long)puVar10 + lVar18 + 0x20) = auVar22;
  }
LAB_0011c638:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar11);
  }
  return;
LAB_0011c430:
  *(undefined1 *)((long)puVar10 + lVar14 + 0x1b) = 1;
joined_r0x0011c438:
  do {
    if (lVar16 == 0) break;
    if (*(char *)(*plVar13 + 9) != '\x01') goto LAB_0011c460;
    lVar15 = lVar15 + -8;
    plVar13 = plVar13 + 1;
    lVar16 = lVar15;
  } while( true );
  *(undefined1 *)((long)puVar10 + lVar14 + 0x19) = 1;
LAB_0011c460:
  puVar10 = (undefined8 *)param_1[0x49];
  if (puVar10 == (undefined8 *)param_1[0x4a]) {
    plVar13 = (long *)param_1[0x48];
    __n = (long)puVar10 - (long)plVar13;
    if (plVar1 == plVar13) {
      pvVar21 = malloc(__n * 2);
      if (pvVar21 == (void *)0x0) goto LAB_0011c668;
      if (__n != 0) {
        memmove(pvVar21,plVar13,__n);
      }
      param_1[0x48] = (long)pvVar21;
    }
    else {
      pvVar21 = realloc(plVar13,__n * 2);
      param_1[0x48] = (long)pvVar21;
      if (pvVar21 == (void *)0x0) goto LAB_0011c668;
    }
    puVar10 = (undefined8 *)((long)pvVar21 + ((long)__n >> 3) * 8);
    param_1[0x49] = (long)puVar10;
    param_1[0x4a] = (long)((long)pvVar21 + ((long)__n >> 2) * 8);
  }
  *plVar2 = (long)(puVar10 + 1);
  *puVar10 = puVar11;
  bVar6 = false;
joined_r0x0011c524:
  if (local_c0 != alStack_a8) {
    free(local_c0);
  }
  if (bVar6) {
    puVar11 = (undefined8 *)0x0;
    goto LAB_0011c638;
  }
LAB_0011c278:
  pcVar12 = (char *)*param_1;
  if (pcVar12 != (char *)param_1[1]) goto LAB_0011c264;
  goto LAB_0011c284;
}


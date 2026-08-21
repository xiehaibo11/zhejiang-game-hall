
void FUN_0183cea8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong __n;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  void *pvVar14;
  size_t sVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long alStack_a8 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar7 = (char *)*param_1;
  if ((pcVar7 == (char *)param_1[1]) || (*pcVar7 != 'I')) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    pcVar7 = pcVar7 + 1;
    *param_1 = (long)pcVar7;
    if ((param_2 & 1) != 0) {
      param_1[0x49] = param_1[0x48];
    }
    plVar16 = param_1 + 0x49;
    lVar13 = param_1[2];
    lVar1 = param_1[3];
    plVar11 = param_1 + 0x4b;
    if (pcVar7 == (char *)param_1[1]) goto LAB_0183cf74;
    while (*pcVar7 != 'E') {
LAB_0183cf74:
      do {
        if ((param_2 & 1) == 0) {
          lVar10 = FUN_0183c2cc(param_1);
          puVar6 = (undefined8 *)0x0;
          if (lVar10 == 0) goto LAB_0183d420;
          plVar4 = (long *)param_1[3];
          if (plVar4 == (long *)param_1[4]) {
            plVar12 = (long *)param_1[2];
            sVar15 = (long)plVar4 - (long)plVar12;
            if (param_1 + 5 == plVar12) {
              pvVar14 = malloc(sVar15 * 2);
              if (pvVar14 == (void *)0x0) goto LAB_0183d450;
              if (sVar15 != 0) {
                memmove(pvVar14,plVar12,sVar15);
              }
              param_1[2] = (long)pvVar14;
            }
            else {
              pvVar14 = realloc(plVar12,sVar15 * 2);
              param_1[2] = (long)pvVar14;
              if (pvVar14 == (void *)0x0) goto LAB_0183d450;
            }
            plVar4 = (long *)((long)pvVar14 + ((long)sVar15 >> 3) * 8);
            param_1[3] = (long)plVar4;
            param_1[4] = (long)((long)pvVar14 + ((long)sVar15 >> 2) * 8);
          }
          param_1[3] = (long)(plVar4 + 1);
          *plVar4 = lVar10;
        }
        else {
          local_c0 = (long *)param_1[0x48];
          if (local_c0 == plVar11) {
            __n = *plVar16 - (long)local_c0;
            local_b8 = alStack_a8;
            if (__n != 0) {
              memcpy(alStack_a8,plVar11,__n);
              local_b8 = (long *)((long)alStack_a8 + (__n & 0xfffffffffffffff8));
            }
            *plVar16 = (long)local_c0;
            local_c0 = alStack_a8;
            local_b0 = &local_68;
          }
          else {
            local_b8 = (long *)param_1[0x49];
            local_b0 = (long *)param_1[0x4a];
            param_1[0x48] = (long)plVar11;
            param_1[0x49] = (long)plVar11;
            param_1[0x4a] = (long)(param_1 + 0x53);
          }
          puVar6 = (undefined8 *)FUN_0183c2cc(param_1);
          plVar4 = (long *)param_1[0x48];
          if (local_c0 == alStack_a8) {
            plVar12 = alStack_a8;
            if (plVar4 != plVar11) {
              free(plVar4);
              param_1[0x48] = (long)plVar11;
              param_1[0x49] = (long)plVar11;
              param_1[0x4a] = (long)(param_1 + 0x53);
              plVar4 = plVar11;
              plVar12 = local_c0;
            }
            if ((long)local_b8 - (long)local_c0 == 0) {
              lVar10 = 0;
              plVar4 = plVar11;
            }
            else {
              memmove(plVar4,plVar12,(long)local_b8 - (long)local_c0);
              lVar10 = (long)local_b8 - (long)local_c0;
              plVar4 = (long *)param_1[0x48];
            }
            *plVar16 = (long)plVar4 + lVar10;
            local_b8 = local_c0;
joined_r0x0183d104:
            if (puVar6 == (undefined8 *)0x0) goto LAB_0183d310;
LAB_0183d108:
            puVar5 = (undefined8 *)param_1[3];
            if (puVar5 == (undefined8 *)param_1[4]) {
              plVar4 = (long *)param_1[2];
              sVar15 = (long)puVar5 - (long)plVar4;
              if (param_1 + 5 == plVar4) {
                pvVar14 = malloc(sVar15 * 2);
                if (pvVar14 == (void *)0x0) goto LAB_0183d450;
                if (sVar15 != 0) {
                  memmove(pvVar14,plVar4,sVar15);
                }
                param_1[2] = (long)pvVar14;
              }
              else {
                pvVar14 = realloc(plVar4,sVar15 * 2);
                param_1[2] = (long)pvVar14;
                if (pvVar14 == (void *)0x0) goto LAB_0183d450;
              }
              puVar5 = (undefined8 *)((long)pvVar14 + ((long)sVar15 >> 3) * 8);
              param_1[3] = (long)puVar5;
              param_1[4] = (long)((long)pvVar14 + ((long)sVar15 >> 2) * 8);
            }
            param_1[3] = (long)(puVar5 + 1);
            *puVar5 = puVar6;
            if (*(char *)(puVar6 + 1) == '\x1c') {
              pvVar14 = (void *)param_1[0x25c];
              plVar4 = (long *)puVar6[2];
              lVar10 = puVar6[3];
              plVar12 = (long *)((long)pvVar14 + 8);
              lVar8 = *plVar12;
              puVar5 = pvVar14;
              if (0xfef < lVar8 + 0x20U) {
                puVar5 = malloc(0x1000);
                if (puVar5 == (void *)0x0) goto LAB_0183d450;
                lVar8 = 0;
                *puVar5 = pvVar14;
                plVar12 = puVar5 + 1;
                *plVar12 = 0;
                param_1[0x25c] = (long)puVar5;
              }
              *plVar12 = lVar8 + 0x20;
              puVar6 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
              *puVar6 = &PTR_FUN_01ce0e00;
              *(undefined4 *)((long)puVar5 + lVar8 + 0x18) = 0x202021b;
              *(long **)((long)puVar5 + lVar8 + 0x20) = plVar4;
              *(long *)((long)puVar5 + lVar8 + 0x28) = lVar10;
              if (lVar10 != 0) {
                lVar9 = lVar10 << 3;
                plVar12 = plVar4;
                do {
                  if (*(char *)(*plVar12 + 10) != '\x01') goto LAB_0183d278;
                  lVar9 = lVar9 + -8;
                  plVar12 = plVar12 + 1;
                } while (lVar9 != 0);
              }
              *(undefined1 *)((long)puVar5 + lVar8 + 0x1a) = 1;
LAB_0183d278:
              if (lVar10 != 0) {
                lVar9 = lVar10 << 3;
                plVar12 = plVar4;
                do {
                  if (*(char *)(*plVar12 + 0xb) != '\x01') goto LAB_0183d2a4;
                  lVar9 = lVar9 + -8;
                  plVar12 = plVar12 + 1;
                } while (lVar9 != 0);
              }
              *(undefined1 *)((long)puVar5 + lVar8 + 0x1b) = 1;
LAB_0183d2a4:
              if (lVar10 != 0) {
                lVar10 = lVar10 << 3;
                do {
                  if (*(char *)(*plVar4 + 9) != '\x01') {
                    if (puVar6 != (undefined8 *)0x0) goto LAB_0183d2d4;
                    goto LAB_0183d310;
                  }
                  lVar10 = lVar10 + -8;
                  plVar4 = plVar4 + 1;
                } while (lVar10 != 0);
              }
              *(undefined1 *)((long)puVar5 + lVar8 + 0x19) = 1;
            }
LAB_0183d2d4:
            puVar5 = (undefined8 *)param_1[0x49];
            if (puVar5 == (undefined8 *)param_1[0x4a]) {
              plVar4 = (long *)param_1[0x48];
              sVar15 = (long)puVar5 - (long)plVar4;
              if (plVar11 == plVar4) {
                pvVar14 = malloc(sVar15 * 2);
                if (pvVar14 == (void *)0x0) goto LAB_0183d450;
                if (sVar15 != 0) {
                  memmove(pvVar14,plVar4,sVar15);
                }
                param_1[0x48] = (long)pvVar14;
              }
              else {
                pvVar14 = realloc(plVar4,sVar15 * 2);
                param_1[0x48] = (long)pvVar14;
                if (pvVar14 == (void *)0x0) goto LAB_0183d450;
              }
              puVar5 = (undefined8 *)((long)pvVar14 + ((long)sVar15 >> 3) * 8);
              param_1[0x49] = (long)puVar5;
              param_1[0x4a] = (long)((long)pvVar14 + ((long)sVar15 >> 2) * 8);
            }
            bVar3 = false;
            *plVar16 = (long)(puVar5 + 1);
            *puVar5 = puVar6;
          }
          else {
            param_1[0x48] = (long)local_c0;
            if (plVar4 == plVar11) {
              param_1[0x49] = (long)local_b8;
              param_1[0x4a] = (long)local_b0;
              local_b8 = alStack_a8;
              goto joined_r0x0183d104;
            }
            param_1[0x49] = (long)local_b8;
            param_1[0x4a] = (long)local_b0;
            local_b8 = plVar4;
            if (puVar6 != (undefined8 *)0x0) goto LAB_0183d108;
LAB_0183d310:
            bVar3 = true;
          }
          if (local_b8 != alStack_a8) {
            free(local_b8);
          }
          if (bVar3) {
            puVar6 = (undefined8 *)0x0;
            goto LAB_0183d420;
          }
        }
        pcVar7 = (char *)*param_1;
      } while (pcVar7 == (char *)param_1[1]);
    }
    *param_1 = (long)(pcVar7 + 1);
    lVar13 = (lVar1 - lVar13 >> 3) * 8;
    auVar17 = FUN_01844294(param_1,param_1[2] + lVar13,param_1[3]);
    pvVar14 = (void *)param_1[0x25c];
    param_1[3] = param_1[2] + lVar13;
    plVar11 = (long *)((long)pvVar14 + 8);
    lVar13 = *plVar11;
    puVar5 = pvVar14;
    if (0xfef < lVar13 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) {
LAB_0183d450:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar13 = 0;
      *puVar5 = pvVar14;
      plVar11 = puVar5 + 1;
      *plVar11 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    *plVar11 = lVar13 + 0x20;
    puVar6 = (undefined8 *)((long)puVar5 + lVar13 + 0x10);
    *puVar6 = &PTR_FUN_01ce0e70;
    *(undefined4 *)((long)puVar5 + lVar13 + 0x18) = 0x101011e;
    *(undefined1 (*) [16])((long)puVar5 + lVar13 + 0x20) = auVar17;
  }
LAB_0183d420:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6);
}


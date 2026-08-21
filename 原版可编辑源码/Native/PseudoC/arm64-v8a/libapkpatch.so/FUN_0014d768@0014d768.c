
undefined8 * FUN_0014d768(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t __n;
  void *pvVar13;
  long *plVar14;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x54)) {
    pbVar10 = pbVar1 + 1;
    *param_1 = (long)pbVar10;
    if (pbVar10 != pbVar2) {
      if (*pbVar10 == 0x4c) {
        pbVar10 = pbVar1 + 2;
        *param_1 = (long)pbVar10;
        if ((pbVar2 != pbVar10) && (*pbVar10 - 0x30 < 10)) {
          lVar6 = 0;
          pbVar1 = pbVar1 + 4;
          do {
            pbVar10 = pbVar1;
            pbVar9 = pbVar10 + -1;
            *param_1 = (long)pbVar9;
            lVar7 = (ulong)pbVar10[-2] + lVar6 * 10;
            lVar6 = lVar7 + -0x30;
            if (pbVar9 == pbVar2) break;
            pbVar1 = pbVar10 + 1;
          } while (pbVar10[-1] - 0x30 < 10);
          if ((pbVar9 != pbVar2) && (pbVar10[-1] == 0x5f)) {
            uVar8 = lVar7 - 0x2f;
            *param_1 = (long)pbVar10;
            goto joined_r0x0014d858;
          }
        }
      }
      else {
        uVar8 = 0;
joined_r0x0014d858:
        if (pbVar10 != pbVar2) {
          if (*pbVar10 == 0x5f) {
            uVar12 = 0;
LAB_0014d86c:
            *param_1 = (long)(pbVar10 + 1);
            if ((*(char *)((long)param_1 + 0x309) == '\0') || (uVar8 != 0)) {
              uVar5 = param_1[0x54] - param_1[0x53] >> 3;
              if ((uVar8 < uVar5) &&
                 ((plVar14 = *(long **)(param_1[0x53] + uVar8 * 8), plVar14 != (long *)0x0 &&
                  (uVar12 < (ulong)(plVar14[1] - *plVar14 >> 3))))) {
                puVar11 = *(undefined8 **)(*plVar14 + uVar12 * 8);
              }
              else {
                puVar11 = (undefined8 *)0x0;
                if ((param_1[0x62] == uVar8) && (uVar8 <= uVar5)) {
                  if (uVar8 == uVar5) {
                    local_50 = 0;
                    FUN_0014e13c(param_1 + 0x53,&local_50);
                  }
                  pvVar13 = (void *)param_1[0x266];
                  lVar6 = *(long *)((long)pvVar13 + 8);
                  puVar4 = pvVar13;
                  if (0xfef < lVar6 + 0x20U) {
                    puVar4 = malloc(0x1000);
                    if (puVar4 == (void *)0x0) goto LAB_0014dad0;
                    lVar6 = 0;
                    *puVar4 = pvVar13;
                    puVar4[1] = 0;
                    param_1[0x266] = (long)puVar4;
                  }
                  *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
                  puVar11 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
                  *puVar11 = &PTR_FUN_001671f0;
                  *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010107;
                  *(undefined **)((long)puVar4 + lVar6 + 0x20) = &DAT_00115fb1;
                  *(undefined **)((long)puVar4 + lVar6 + 0x28) = &DAT_00115fb5;
                }
              }
            }
            else {
              pvVar13 = (void *)param_1[0x266];
              lVar6 = *(long *)((long)pvVar13 + 8);
              puVar4 = pvVar13;
              if (0xfef < lVar6 + 0x30U) {
                puVar4 = malloc(0x1000);
                if (puVar4 == (void *)0x0) goto LAB_0014dad0;
                lVar6 = 0;
                *puVar4 = pvVar13;
                puVar4[1] = 0;
                param_1[0x266] = (long)puVar4;
              }
              *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
              puVar11 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
              *puVar11 = &PTR_FUN_001672d0;
              *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x2020224;
              *(ulong *)((long)puVar4 + lVar6 + 0x20) = uVar12;
              *(undefined8 *)((long)puVar4 + lVar6 + 0x28) = 0;
              *(undefined1 *)((long)puVar4 + lVar6 + 0x30) = 0;
              puVar4 = (undefined8 *)param_1[0x5b];
              if (puVar4 == (undefined8 *)param_1[0x5c]) {
                plVar14 = (long *)param_1[0x5a];
                __n = (long)puVar4 - (long)plVar14;
                if (plVar14 == param_1 + 0x5d) {
                  pvVar13 = malloc(__n * 2);
                  if (pvVar13 == (void *)0x0) goto LAB_0014dad0;
                  if (__n != 0) {
                    memmove(pvVar13,plVar14,__n);
                  }
                  param_1[0x5a] = (long)pvVar13;
                }
                else {
                  pvVar13 = realloc(plVar14,__n * 2);
                  param_1[0x5a] = (long)pvVar13;
                  if (pvVar13 == (void *)0x0) {
LAB_0014dad0:
                    /* WARNING: Subroutine does not return */
                    std::terminate();
                  }
                }
                puVar4 = (undefined8 *)((long)pvVar13 + ((long)__n >> 3) * 8);
                param_1[0x5c] = (long)((long)pvVar13 + ((long)__n >> 2) * 8);
              }
              param_1[0x5b] = (long)(puVar4 + 1);
              *puVar4 = puVar11;
            }
            goto LAB_0014d988;
          }
          if (*pbVar10 - 0x30 < 10) {
            lVar6 = 0;
            pbVar1 = pbVar10;
            do {
              pbVar10 = pbVar1 + 1;
              *param_1 = (long)pbVar10;
              lVar7 = (ulong)*pbVar1 + lVar6 * 10;
              lVar6 = lVar7 + -0x30;
              if (pbVar10 == pbVar2) break;
              pbVar1 = pbVar10;
            } while (*pbVar10 - 0x30 < 10);
            if ((pbVar10 != pbVar2) && (*pbVar10 == 0x5f)) {
              uVar12 = lVar7 - 0x2f;
              goto LAB_0014d86c;
            }
          }
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0014d988:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


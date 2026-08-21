
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dynamic_load_create(char *param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  ulong *puVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  void *local_90;
  size_t local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_90 = calloc(1,0x38);
  if (local_90 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    *(undefined4 *)((long)local_90 + 8) = 0xffffffff;
    *(undefined8 *)((long)local_90 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)local_90 + 0x28) = 0;
    *(undefined8 **)((long)local_90 + 0x30) = (undefined8 *)((long)local_90 + 0x28);
    iVar4 = FUN_00112ed8(local_90,param_1);
    pvVar8 = local_90;
    if (iVar4 == 0) {
      iVar4 = open(param_1,0x80000);
      *(int *)((long)pvVar8 + 8) = iVar4;
      if (((-1 < iVar4) && (iVar4 = fstat(iVar4,(stat *)&stack0xffffffffffffff78), iVar4 == 0)) &&
         (local_58 != 0)) {
        *(size_t *)((long)pvVar8 + 0x18) = local_58;
        pvVar5 = mmap((void *)0x0,local_58,1,2,*(int *)((long)pvVar8 + 8),0);
        pvVar3 = local_90;
        *(void **)((long)pvVar8 + 0x10) = pvVar5;
        if (pvVar5 != (void *)0xffffffffffffffff) {
          uVar20 = *(ulong *)((long)local_90 + 0x18);
          lVar10 = *(long *)((long)local_90 + 0x10);
          if ((0x3f < uVar20) && (lVar10 != 0)) {
            iVar4 = (uint)*(ushort *)(lVar10 + 0x38) * (uint)*(ushort *)(lVar10 + 0x36);
            if (iVar4 == 0) {
LAB_001131fc:
              uVar1 = *(ushort *)(lVar10 + 0x3a);
              uVar2 = *(ushort *)(lVar10 + 0x3c);
              uVar12 = (ulong)uVar1;
              uVar21 = (ulong)(int)((uint)uVar2 * (uint)uVar1);
              if (uVar12 < uVar21) {
                lVar14 = *(long *)(lVar10 + 0x28);
                if ((uVar12 + lVar14 + 0x40 <= uVar20) &&
                   (lVar17 = lVar10 + uVar12 + lVar14, lVar17 != 0)) {
                  lVar18 = lVar14 + uVar12 * 2;
                  lVar13 = 0;
                  do {
                    pvVar8 = local_90;
                    if (((*(int *)(lVar17 + 4) == 0xb) || (*(int *)(lVar17 + 4) == 2)) &&
                       (*(uint *)(lVar17 + 0x28) < (uint)uVar2)) {
                      lVar9 = (ulong)((uint)uVar1 * *(uint *)(lVar17 + 0x28)) + lVar14;
                      if ((uVar20 < lVar9 + 0x40U) || (lVar10 = lVar10 + lVar9, lVar10 == 0)) break;
                      if (*(int *)(lVar10 + 4) == 3) {
                        plVar7 = malloc(0x38);
                        if (plVar7 == (long *)0x0) break;
                        lVar15 = *(long *)(lVar10 + 0x18);
                        lVar16 = *(long *)(lVar17 + 0x18);
                        lVar9 = *(long *)(lVar17 + 0x20);
                        lVar19 = *(long *)(lVar10 + 0x20);
                        puVar11 = *(undefined8 **)((long)pvVar3 + 0x30);
                        lVar10 = *(long *)(lVar17 + 0x38);
                        *plVar7 = lVar16;
                        plVar7[1] = lVar9 + lVar16;
                        plVar7[2] = lVar10;
                        plVar7[3] = lVar15;
                        plVar7[4] = lVar19 + lVar15;
                        plVar7[5] = 0;
                        plVar7[6] = (long)puVar11;
                        *puVar11 = plVar7;
                        *(long **)((long)pvVar3 + 0x30) = plVar7 + 5;
                        lVar13 = lVar13 + 1;
                        pvVar8 = local_90;
                      }
                    }
                    local_90 = pvVar8;
                    if (uVar21 <= (ulong)(lVar18 - lVar14)) {
                      if (lVar13 != 0) goto LAB_0011333c;
                      break;
                    }
                    lVar10 = *(long *)((long)pvVar3 + 0x10);
                    if (uVar20 < lVar18 + 0x40U) break;
                    lVar17 = lVar10 + lVar18;
                    lVar18 = lVar18 + uVar12;
                  } while (lVar17 != 0);
                }
              }
            }
            else {
              lVar14 = *(long *)(lVar10 + 0x20);
              if ((lVar14 + 0x38U <= uVar20) &&
                 (puVar6 = (ulong *)(lVar10 + lVar14), puVar6 != (ulong *)0x0)) {
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x36);
                lVar17 = (lVar14 + uVar12) - (long)puVar6;
                uVar21 = uVar12;
                do {
                  if (((*puVar6 & 0x1ffffffff) == 0x100000001) && (puVar6[1] == 0)) {
                    *(ulong *)((long)local_90 + 0x20) = puVar6[2];
                    goto LAB_001131fc;
                  }
                  if ((ulong)(long)iVar4 <= uVar21) goto LAB_001131fc;
                  if (uVar20 < lVar14 + 0x38U + uVar21) break;
                  uVar21 = uVar21 + uVar12;
                  puVar6 = (ulong *)((long)puVar6 + lVar10 + lVar17);
                } while (lVar10 + (lVar14 - uVar12) + uVar21 != 0);
              }
            }
          }
        }
      }
    }
    dynamic_load_destroy(&local_90);
    pvVar8 = (void *)0x0;
  }
LAB_0011333c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar8);
  }
  return;
}



long FUN_00c107a8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  size_t __len;
  undefined8 *puVar18;
  undefined8 *puVar19;
  void *__addr;
  ulong uVar20;
  undefined8 *puVar21;
  long local_8;
  
  if (*(undefined8 **)(param_1 + 0x358) == (undefined8 *)0x0) {
    uVar20 = 0xff;
    local_8 = 0;
  }
  else {
    uVar20 = 0;
    local_8 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x358);
    puVar18 = (undefined8 *)(param_1 + 0x348);
    do {
      __addr = (void *)*puVar16;
      uVar20 = uVar20 + 1;
      __len = puVar16[1];
      uVar15 = 0;
      puVar21 = (undefined8 *)puVar16[2];
      if (((long)__addr + 0x10U & 7) != 0) {
        uVar15 = -((long)__addr + 0x10U) & 7;
      }
      lVar1 = (long)__addr + uVar15;
      uVar15 = *(ulong *)(lVar1 + 8);
      puVar19 = puVar16;
      if ((((uint)uVar15 >> 1 & 1) == 0) &&
         (uVar17 = uVar15 & 0xfffffffffffffffc, (long)__addr + (__len - 0x40) <= lVar1 + uVar17)) {
        if (*(long *)(param_1 + 0x18) == lVar1) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
        }
        else {
          lVar7 = *(long *)(lVar1 + 0x18);
          lVar14 = *(long *)(lVar1 + 0x30);
          if (lVar1 == lVar7) {
            lVar11 = *(long *)(lVar1 + 0x28);
            puVar16 = (undefined8 *)(lVar1 + 0x28);
            if (*(long *)(lVar1 + 0x28) == 0) {
              lVar7 = *(long *)(lVar1 + 0x20);
              lVar11 = lVar7;
              puVar16 = (undefined8 *)(lVar1 + 0x20);
              if (lVar7 == 0) goto LAB_00c10850;
            }
            do {
              do {
                puVar13 = puVar16;
                lVar7 = lVar11;
                lVar11 = *(long *)(lVar7 + 0x28);
                puVar16 = (undefined8 *)(lVar7 + 0x28);
              } while (*(long *)(lVar7 + 0x28) != 0);
              lVar11 = *(long *)(lVar7 + 0x20);
              puVar16 = (undefined8 *)(lVar7 + 0x20);
            } while (*(long *)(lVar7 + 0x20) != 0);
            *puVar13 = 0;
          }
          else {
            lVar11 = *(long *)(lVar1 + 0x10);
            *(long *)(lVar11 + 0x18) = lVar7;
            *(long *)(lVar7 + 0x10) = lVar11;
          }
LAB_00c10850:
          if (lVar14 != 0) {
            lVar12 = *(long *)(lVar1 + 0x38);
            lVar11 = param_1 + lVar12 * 8;
            if (lVar1 == *(long *)(lVar11 + 0x248)) {
              *(long *)(lVar11 + 0x248) = lVar7;
              if (lVar7 != 0) goto LAB_00c1087c;
              *(uint *)(param_1 + 4) =
                   *(uint *)(param_1 + 4) & (1 << (ulong)((uint)lVar12 & 0x1f) ^ 0xffffffffU);
            }
            else {
              if (lVar1 == *(long *)(lVar14 + 0x20)) {
                *(long *)(lVar14 + 0x20) = lVar7;
              }
              else {
                *(long *)(lVar14 + 0x28) = lVar7;
              }
              if (lVar7 != 0) {
LAB_00c1087c:
                lVar11 = *(long *)(lVar1 + 0x20);
                *(long *)(lVar7 + 0x30) = lVar14;
                if (lVar11 != 0) {
                  *(long *)(lVar7 + 0x20) = lVar11;
                  *(long *)(lVar11 + 0x30) = lVar7;
                }
                lVar14 = *(long *)(lVar1 + 0x28);
                if (lVar14 != 0) {
                  *(long *)(lVar7 + 0x28) = lVar14;
                  *(long *)(lVar14 + 0x30) = lVar7;
                }
              }
            }
          }
        }
        puVar8 = (undefined4 *)__errno();
        uVar2 = *puVar8;
        iVar5 = munmap(__addr,__len);
        *puVar8 = uVar2;
        if (iVar5 == 0) {
          puVar18[2] = puVar21;
          local_8 = local_8 + __len;
          puVar19 = puVar18;
        }
        else {
          uVar6 = (uint)(uVar15 >> 8);
          if (uVar6 == 0) {
            uVar6 = 1;
            uVar15 = 0;
LAB_00c109b8:
            uVar3 = *(uint *)(param_1 + 4);
            *(ulong *)(lVar1 + 0x38) = uVar15;
            *(undefined8 *)(lVar1 + 0x28) = 0;
            uVar4 = uVar6 & uVar3;
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          else {
            if (uVar6 < 0x10000) {
              uVar6 = (uint)LZCOUNT(uVar6) ^ 0x1f;
              uVar15 = (uVar17 >> ((ulong)(uVar6 + 7) & 0x3f) & 1) + (ulong)uVar6 * 2;
              uVar6 = 1 << (ulong)((uint)uVar15 & 0x1f);
              goto LAB_00c109b8;
            }
            uVar3 = *(uint *)(param_1 + 4);
            uVar6 = 0x80000000;
            uVar15 = 0x1f;
            *(undefined8 *)(lVar1 + 0x28) = 0;
            *(undefined8 *)(lVar1 + 0x38) = 0x1f;
            uVar4 = uVar3 & 0x80000000;
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          if (uVar4 == 0) {
            *(uint *)(param_1 + 4) = uVar6 | uVar3;
            plVar10 = (long *)(param_1 + (uVar15 + 0x48) * 8 + 8);
            *plVar10 = lVar1;
            *(long *)(lVar1 + 0x18) = lVar1;
            *(long **)(lVar1 + 0x30) = plVar10;
            *(long *)(lVar1 + 0x10) = lVar1;
          }
          else {
            if (uVar15 == 0x1f) {
              uVar9 = 0;
            }
            else {
              uVar9 = 0x39 - (uVar15 >> 1);
            }
            lVar14 = uVar17 << (uVar9 & 0x3f);
            lVar7 = *(long *)(param_1 + uVar15 * 8 + 0x248);
            do {
              lVar12 = lVar7;
              lVar11 = 4 - (lVar14 >> 0x3f);
              lVar14 = lVar14 << 1;
              if ((*(ulong *)(lVar12 + 8) & 0xfffffffffffffffc) == uVar17) {
                lVar7 = *(long *)(lVar12 + 0x10);
                *(long *)(lVar7 + 0x18) = lVar1;
                *(long *)(lVar12 + 0x10) = lVar1;
                *(long *)(lVar1 + 0x10) = lVar7;
                *(long *)(lVar1 + 0x18) = lVar12;
                *(undefined8 *)(lVar1 + 0x30) = 0;
                goto LAB_00c108d0;
              }
              lVar7 = *(long *)(lVar12 + lVar11 * 8);
            } while (lVar7 != 0);
            *(long *)(lVar12 + lVar11 * 8) = lVar1;
            *(long *)(lVar1 + 0x30) = lVar12;
            *(long *)(lVar1 + 0x18) = lVar1;
            *(long *)(lVar1 + 0x10) = lVar1;
          }
        }
      }
LAB_00c108d0:
      puVar16 = puVar21;
      puVar18 = puVar19;
    } while (puVar21 != (undefined8 *)0x0);
    if (uVar20 < 0xff) {
      uVar20 = 0xff;
    }
  }
  *(ulong *)(param_1 + 0x30) = uVar20;
  return local_8;
}


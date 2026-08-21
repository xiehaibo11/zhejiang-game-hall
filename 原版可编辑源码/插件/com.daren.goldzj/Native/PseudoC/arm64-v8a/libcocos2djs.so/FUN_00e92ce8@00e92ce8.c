
void FUN_00e92ce8(long param_1,long param_2,undefined4 *param_3,long param_4,long param_5,
                 undefined8 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_2 < 1) {
LAB_00e9302c:
    uVar6 = 1;
  }
  else if (param_2 == 1) {
    uVar6 = 0;
    *param_3 = 0x80000000;
  }
  else {
    lVar11 = 0;
    lVar18 = 0;
    lVar12 = 0;
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    do {
      bVar3 = *(byte *)(param_1 + lVar11);
      uVar16 = (ulong)bVar3;
      if (uVar16 != 0) {
        uVar2 = *(uint *)((long)&local_100 + uVar16 * 4);
        if ((lVar12 != 0) && (uVar2 == 0)) {
          uVar6 = 0xffffffff;
          break;
        }
        bVar10 = 0 < lVar18;
        uVar14 = (ulong)(uVar2 >> (ulong)(bVar3 - 1 & 0x1f) & 1);
        uVar13 = 0;
        if (0 < (long)(uVar16 - 1)) {
          lVar9 = 0;
          do {
            if (bVar10) {
              if ((param_2 <= (long)uVar13) ||
                 (uVar14 = uVar14 | uVar13 << 1, (long)(param_2 << 1 | 1U) < (long)uVar14))
              goto LAB_00e9302c;
              uVar17 = param_3[uVar14];
            }
            else {
              if (param_2 <= (long)uVar13) goto LAB_00e9302c;
              lVar18 = lVar18 + 1;
              param_3[uVar13 * 2] = (int)lVar18;
              uVar14 = uVar14 | uVar13 << 1;
              *(undefined4 *)((long)param_3 + (uVar13 << 3 | 4)) = 0;
              uVar17 = param_3[uVar14];
            }
            if (uVar17 == 0) {
              uVar17 = (uint)lVar18;
              param_3[uVar14] = uVar17;
            }
            uVar13 = (ulong)uVar17;
            if (param_2 <= (long)uVar13) goto LAB_00e9302c;
            lVar9 = lVar9 + 1;
            bVar10 = (long)uVar13 < lVar18;
            uVar14 = (ulong)(uVar2 >> (ulong)(~(uint)lVar9 + (uint)bVar3 & 0x1f) & 1);
          } while (lVar9 < (long)(uVar16 - 1));
        }
        if (!bVar10) {
          lVar18 = lVar18 + 1;
          *(undefined4 *)((long)param_3 + (uVar13 << 3 | 4)) = 0;
        }
        local_108 = lVar11;
        switch(*(undefined4 *)(param_5 + 0x14)) {
        case 0:
          uVar17 = (uint)lVar11;
          break;
        case 1:
          lVar9 = *(long *)(param_5 + 0x20);
          if (param_7 == 1) {
            if (lVar9 < 1) goto switchD_00e92e84_default;
            uVar8 = 0;
            uVar17 = 0;
            do {
              lVar4 = 0;
              if (param_4 != 0) {
                lVar4 = lVar11 / param_4;
              }
              lVar9 = lVar9 + -1;
              uVar17 = (uint)*(ushort *)
                              (*(long *)(param_5 + 0x40) +
                              (ulong)(uint)((int)lVar11 - (int)lVar4 * (int)param_4) * 2) <<
                       (ulong)(uVar8 & 0x1f) | uVar17;
              uVar8 = uVar8 + *(int *)(param_5 + 0x18);
              lVar11 = lVar4;
            } while (lVar9 != 0);
          }
          else {
            if (lVar9 < 1) goto switchD_00e92e84_default;
            iVar1 = *(int *)(param_5 + 0x18);
            lVar11 = 0;
            uVar17 = 0;
            do {
              lVar9 = oggpack_read(param_6,iVar1);
              iVar1 = *(int *)(param_5 + 0x18);
              iVar15 = (int)lVar11;
              lVar11 = lVar11 + 1;
              uVar17 = uVar17 | (uint)(lVar9 << ((ulong)(uint)(iVar1 * iVar15) & 0x3f));
            } while (lVar11 < *(long *)(param_5 + 0x20));
          }
          break;
        case 2:
          lVar9 = *(long *)(param_5 + 0x20);
          if (lVar9 < 1) goto switchD_00e92e84_default;
          uVar8 = 0;
          uVar17 = 0;
          do {
            lVar4 = 0;
            if (param_4 != 0) {
              lVar4 = lVar11 / param_4;
            }
            lVar9 = lVar9 + -1;
            uVar17 = (int)lVar11 - (int)lVar4 * (int)param_4 << (ulong)(uVar8 & 0x1f) | uVar17;
            uVar8 = uVar8 + *(int *)(param_5 + 0x3c);
            lVar11 = lVar4;
          } while (lVar9 != 0);
          break;
        case 3:
          uVar17 = (uint)lVar12;
          break;
        default:
switchD_00e92e84_default:
          uVar17 = 0;
        }
        param_3[uVar14 | uVar13 << 1] = uVar17 | 0x80000000;
        lVar12 = lVar12 + 1;
        puVar7 = (uint *)((long)&local_100 + uVar16 * 4);
        uVar14 = uVar16;
        uVar17 = uVar2;
        while ((uVar17 & 1) == 0) {
          uVar14 = uVar14 - 1;
          *puVar7 = uVar17 + 1;
          if ((long)uVar14 < 1) goto LAB_00e92fd0;
          puVar7 = puVar7 + -1;
          uVar17 = *puVar7;
        }
        *puVar7 = *(int *)((long)&local_108 + uVar14 * 4 + 4) << 1;
LAB_00e92fd0:
        uVar14 = uVar16 + 1;
        while (lVar11 = local_108, uVar14 < 0x21) {
          uVar17 = *(uint *)((long)&local_100 + uVar16 * 4 + 4);
          if (uVar2 != uVar17 >> 1) break;
          *(int *)((long)&local_100 + uVar16 * 4 + 4) = *(int *)((long)&local_100 + uVar16 * 4) << 1
          ;
          uVar14 = uVar16 + 2;
          uVar16 = uVar16 + 1;
          uVar2 = uVar17;
        }
      }
      lVar11 = lVar11 + 1;
      uVar6 = 0;
    } while (lVar11 < param_2);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


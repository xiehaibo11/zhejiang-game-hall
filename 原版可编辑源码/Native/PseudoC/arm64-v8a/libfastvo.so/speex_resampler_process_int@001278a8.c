
undefined8
speex_resampler_process_int
          (long param_1,ulong param_2,void *param_3,uint *param_4,long param_5,uint *param_6)

{
  void *__s;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x78);
  uVar24 = *param_4;
  uVar25 = *param_6;
  iVar8 = (int)param_2;
  uVar22 = (ulong)(uint)(iVar2 * iVar8);
  uVar14 = iVar1 - 1;
  uVar15 = param_2 & 0xffffffff;
  if (*(int *)(*(long *)(param_1 + 0x50) + (param_2 & 0xffffffff) * 4) != 0) {
    lVar23 = uVar15 * 4;
    local_70 = *(uint *)(*(long *)(param_1 + 0x50) + lVar23);
    uVar11 = lVar12 + uVar22 * 2;
    *(undefined4 *)(param_1 + 0x38) = 1;
    local_6c = uVar25;
    local_6c = (**(code **)(param_1 + 0x70))(param_1,param_2,uVar11,&local_70,param_5,&local_6c);
    lVar9 = *(long *)(param_1 + 0x40);
    if ((int)*(uint *)(lVar9 + lVar23) < (int)local_70) {
      local_70 = *(uint *)(lVar9 + lVar23);
    }
    *(uint *)(lVar9 + lVar23) = *(int *)(lVar9 + lVar23) - local_70;
    uVar13 = (ulong)local_70;
    if (1 < iVar1) {
      uVar10 = (ulong)uVar14;
      if (uVar14 < 0x10) {
LAB_001279b8:
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        if ((!CARRY4(local_70,(uint)(uVar10 - 1))) && (uVar10 - 1 >> 0x20 == 0)) {
          if ((uVar11 < lVar12 + (uVar13 + uVar22 + uVar10) * 2) &&
             (lVar12 + (uVar13 + uVar22) * 2 < lVar12 + (uVar22 + uVar10) * 2)) goto LAB_001279b8;
          uVar16 = uVar10 & 0xfffffff0;
          puVar17 = (undefined8 *)(lVar12 + uVar22 * 2 + 0x10);
          uVar21 = uVar16;
          do {
            puVar20 = (undefined8 *)(uVar11 + uVar13 * 2);
            uVar26 = *puVar20;
            uVar28 = puVar20[3];
            uVar27 = puVar20[2];
            uVar21 = uVar21 - 0x10;
            uVar13 = (ulong)((int)uVar13 + 0x10);
            puVar17[-1] = puVar20[1];
            puVar17[-2] = uVar26;
            puVar17[1] = uVar28;
            *puVar17 = uVar27;
            puVar17 = puVar17 + 4;
          } while (uVar21 != 0);
          if (uVar16 == uVar10) goto LAB_001279e0;
        }
      }
      lVar9 = uVar10 - uVar16;
      uVar19 = local_70 + (int)uVar16;
      puVar18 = (undefined2 *)(lVar12 + (uVar16 + uVar22) * 2);
      do {
        uVar13 = (ulong)uVar19;
        lVar9 = lVar9 + -1;
        uVar19 = uVar19 + 1;
        *puVar18 = *(undefined2 *)(uVar11 + uVar13 * 2);
        puVar18 = puVar18 + 1;
      } while (lVar9 != 0);
    }
LAB_001279e0:
    lVar9 = *(long *)(param_1 + 0x50);
    uVar19 = *(int *)(lVar9 + lVar23) - local_70;
    *(uint *)(lVar9 + lVar23) = uVar19;
    if (uVar19 != 0) {
      uVar13 = (ulong)uVar19;
      uVar10 = 0;
      if (0xf < uVar19) {
        uVar19 = (uint)(uVar13 - 1);
        if (((!CARRY4(uVar14,uVar19)) && (uVar13 - 1 >> 0x20 == 0)) &&
           (!CARRY4((iVar1 + local_70) - 1,uVar19))) {
          lVar23 = uVar22 + ((iVar1 + local_70) - 1);
          if ((lVar12 + (uVar22 + uVar14) * 2 < lVar12 + (lVar23 + uVar13) * 2) &&
             ((ulong)(lVar12 + lVar23 * 2) < lVar12 + (uVar22 + uVar13 + (ulong)uVar14) * 2)) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar13 & 0xfffffff0;
            uVar16 = uVar10;
            uVar19 = uVar14;
            do {
              puVar17 = (undefined8 *)(uVar11 + (ulong)(local_70 + uVar19) * 2);
              uVar26 = *puVar17;
              uVar28 = puVar17[3];
              uVar27 = puVar17[2];
              puVar20 = (undefined8 *)(uVar11 + (ulong)uVar19 * 2);
              uVar16 = uVar16 - 0x10;
              uVar19 = uVar19 + 0x10;
              puVar20[1] = puVar17[1];
              *puVar20 = uVar26;
              puVar20[3] = uVar28;
              puVar20[2] = uVar27;
            } while (uVar16 != 0);
            if (uVar10 == uVar13) goto LAB_00127a2c;
          }
        }
      }
      lVar23 = uVar13 - uVar10;
      uVar19 = (iVar1 + (int)uVar10) - 1;
      do {
        lVar23 = lVar23 + -1;
        *(undefined2 *)(uVar11 + (ulong)uVar19 * 2) =
             *(undefined2 *)(uVar11 + (ulong)(local_70 + uVar19) * 2);
        uVar19 = uVar19 + 1;
      } while (lVar23 != 0);
    }
LAB_00127a2c:
    uVar25 = uVar25 - local_6c;
    if (*(int *)(lVar9 + uVar15 * 4) != 0) goto LAB_00127cbc;
    param_5 = param_5 + (ulong)(*(int *)(param_1 + 0x7c) * local_6c) * 2;
  }
  if ((uVar25 != 0) && (uVar24 != 0)) {
    uVar19 = iVar2 - uVar14;
    __s = (void *)(lVar12 + (uVar22 + (long)(int)uVar14) * 2);
    do {
      local_6c = uVar19;
      if (uVar24 <= uVar19) {
        local_6c = uVar24;
      }
      local_70 = uVar25;
      if (param_3 == (void *)0x0) {
        if (local_6c != 0) {
          memset(__s,0,(ulong)local_6c << 1);
        }
      }
      else if (local_6c != 0) {
        uVar22 = 0;
        uVar11 = (ulong)local_6c;
        if ((0xf < local_6c) && (iVar4 == 1)) {
          if ((__s < (void *)((long)param_3 + uVar11 * 2)) &&
             (param_3 < (void *)((long)__s + uVar11 * 2))) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar11 & 0xfffffff0;
            puVar17 = (undefined8 *)((long)param_3 + 0x10);
            uVar13 = uVar22;
            puVar20 = (undefined8 *)((long)__s + 0x10);
            do {
              puVar6 = puVar17 + -1;
              uVar26 = puVar17[-2];
              uVar28 = puVar17[1];
              uVar27 = *puVar17;
              puVar17 = puVar17 + 4;
              uVar13 = uVar13 - 0x10;
              puVar20[-1] = *puVar6;
              puVar20[-2] = uVar26;
              puVar20[1] = uVar28;
              *puVar20 = uVar27;
              puVar20 = puVar20 + 4;
            } while (uVar13 != 0);
            if (uVar22 == uVar11) goto LAB_00127b48;
          }
        }
        puVar18 = (undefined2 *)((long)param_3 + (long)iVar4 * uVar22 * 2);
        do {
          uVar3 = *puVar18;
          puVar18 = puVar18 + iVar4;
          *(undefined2 *)((long)__s + uVar22 * 2) = uVar3;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar11);
      }
LAB_00127b48:
      iVar1 = *(int *)(param_1 + 0x18);
      lVar9 = *(long *)(param_1 + 0x58);
      uVar11 = (ulong)(uint)(*(int *)(param_1 + 0x1c) * iVar8);
      uVar22 = lVar9 + uVar11 * 2;
      *(undefined4 *)(param_1 + 0x38) = 1;
      local_70 = (**(code **)(param_1 + 0x70))(param_1,iVar8,uVar22,&local_6c,param_5,&local_70);
      lVar12 = *(long *)(param_1 + 0x40);
      uVar14 = *(uint *)(lVar12 + uVar15 * 4);
      if ((int)uVar14 < (int)local_6c) {
        local_6c = uVar14;
      }
      *(uint *)(lVar12 + uVar15 * 4) = *(int *)(lVar12 + uVar15 * 4) - local_6c;
      uVar13 = (ulong)local_6c;
      if (1 < iVar1) {
        uVar14 = iVar1 - 1;
        uVar10 = (ulong)uVar14;
        if (uVar14 < 0x10) {
LAB_00127bd0:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((!CARRY4(local_6c,(uint)(uVar10 - 1))) && (uVar10 - 1 >> 0x20 == 0)) {
            if ((uVar22 < lVar9 + (uVar13 + uVar11 + uVar10) * 2) &&
               (lVar9 + (uVar13 + uVar11) * 2 < lVar9 + (uVar11 + uVar10) * 2)) goto LAB_00127bd0;
            uVar16 = uVar10 & 0xfffffff0;
            puVar17 = (undefined8 *)(lVar9 + uVar11 * 2 + 0x10);
            uVar21 = uVar16;
            do {
              puVar20 = (undefined8 *)(uVar22 + uVar13 * 2);
              uVar26 = *puVar20;
              uVar28 = puVar20[3];
              uVar27 = puVar20[2];
              uVar21 = uVar21 - 0x10;
              uVar13 = (ulong)((int)uVar13 + 0x10);
              puVar17[-1] = puVar20[1];
              puVar17[-2] = uVar26;
              puVar17[1] = uVar28;
              *puVar17 = uVar27;
              puVar17 = puVar17 + 4;
            } while (uVar21 != 0);
            if (uVar16 == uVar10) goto LAB_00127c04;
          }
        }
        lVar12 = uVar10 - uVar16;
        uVar14 = local_6c + (int)uVar16;
        puVar18 = (undefined2 *)(lVar9 + (uVar16 + uVar11) * 2);
        do {
          uVar11 = (ulong)uVar14;
          lVar12 = lVar12 + -1;
          uVar14 = uVar14 + 1;
          *puVar18 = *(undefined2 *)(uVar22 + uVar11 * 2);
          puVar18 = puVar18 + 1;
        } while (lVar12 != 0);
      }
LAB_00127c04:
      uVar24 = uVar24 - local_6c;
      bVar7 = param_3 == (void *)0x0;
      param_3 = (void *)((long)param_3 + (ulong)(local_6c * iVar4) * 2);
      uVar25 = uVar25 - local_70;
      if (bVar7) {
        param_3 = (void *)0x0;
      }
    } while ((uVar25 != 0) &&
            (param_5 = param_5 + (ulong)(*(int *)(param_1 + 0x7c) * local_70) * 2, uVar24 != 0));
  }
LAB_00127cbc:
  *param_4 = *param_4 - uVar24;
  *param_6 = *param_6 - uVar25;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


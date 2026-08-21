
/* WARNING: Removing unreachable block (ram,0x011af5e0) */
/* WARNING: Type propagation algorithm not settling */

void uv_inet_pton(int param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint *puVar23;
  byte *pbVar24;
  undefined2 uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint *local_c0;
  byte *local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((param_2 != (byte *)0x0) && (param_3 != (uint *)0x0)) {
    if (param_1 == 10) {
      pcVar7 = strchr((char *)param_2,0x25);
      if (pcVar7 != (char *)0x0) {
        iVar8 = (int)pcVar7 - (int)param_2;
        if (0x2d < iVar8) goto LAB_011af7f0;
        memcpy(&local_a8,param_2,(long)iVar8);
        param_2 = (byte *)&local_a8;
        *(undefined1 *)((long)&local_a8 + (long)iVar8) = 0;
      }
      local_78 = 0;
      uStack_70 = 0;
      bVar3 = *param_2;
      uVar28 = (uint)bVar3;
      if (bVar3 != 0) {
        if (bVar3 == 0x3a) {
          param_2 = param_2 + 1;
          if (*param_2 != 0x3a) goto LAB_011af7f0;
          uVar28 = 0x3a;
        }
        uVar26 = 0;
        iVar8 = 0;
        local_c0 = (uint *)0x0;
        puVar23 = (uint *)&local_78;
        local_b8 = param_2;
        do {
          uVar25 = (undefined2)uVar26;
          param_2 = param_2 + 1;
          pvVar5 = memchr("0123456789abcdef",uVar28,0x11);
          if (pvVar5 == (void *)0x0) {
            pvVar5 = memchr("0123456789ABCDEF",uVar28,0x11);
            if (pvVar5 != (void *)0x0) {
              iVar9 = 0x14a13f2;
              goto LAB_011af554;
            }
            if (uVar28 == 0x2e) {
              puVar22 = puVar23 + 1;
              if (&local_68 < puVar22) goto LAB_011af7f0;
              local_ac = local_ac & 0xffffff00;
              uVar28 = (uint)*local_b8;
              if (*local_b8 == 0) goto LAB_011af7f0;
              uVar27 = 0;
              bVar2 = false;
              iVar8 = 0;
              puVar21 = &local_ac;
              lVar10 = 1;
              goto LAB_011af61c;
            }
            if (uVar28 != 0x3a) goto LAB_011af7f0;
            local_b8 = param_2;
            if (iVar8 == 0) {
              iVar20 = 1;
              if (local_c0 == (uint *)0x0) {
                iVar20 = 2;
                local_c0 = puVar23;
              }
              goto joined_r0x011af73c;
            }
            puVar22 = (uint *)((long)puVar23 + 2);
            if ((&local_68 < puVar22) || (*param_2 == 0)) goto LAB_011af7f0;
            iVar8 = 0;
            *(char *)((long)puVar23 + 1) = (char)uVar26;
            *(char *)puVar23 = (char)(uVar26 >> 8);
            uVar26 = 0;
          }
          else {
            iVar9 = 0x14a13e1;
LAB_011af554:
            iVar20 = 1;
            iVar1 = iVar8 + 1;
            uVar26 = (int)pvVar5 - iVar9 | uVar26 << 4;
            uVar25 = (undefined2)uVar26;
            bVar2 = iVar8 < 4;
            iVar8 = iVar1;
            if (bVar2) {
              iVar20 = 2;
            }
joined_r0x011af73c:
            puVar22 = puVar23;
            if (iVar20 != 2) goto LAB_011af740;
          }
          uVar25 = (undefined2)uVar26;
          uVar28 = (uint)*param_2;
          puVar23 = puVar22;
        } while (uVar28 != 0);
        goto LAB_011af748;
      }
    }
    else {
      if (param_1 != 2) {
        uVar6 = 0xffffff9f;
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
        goto LAB_011af8dc;
      }
      local_a8 = local_a8 & 0xffffff00;
      uVar28 = (uint)*param_2;
      if (*param_2 != 0) {
        uVar27 = 0;
        bVar2 = false;
        iVar8 = 0;
        puVar21 = &local_a8;
        pbVar24 = param_2 + 1;
        do {
          while (pvVar5 = memchr("0123456789",uVar28,0xb), pvVar5 == (void *)0x0) {
            if (((iVar8 == 4) || (uVar28 != 0x2e)) || (!bVar2)) goto LAB_011af7f0;
            uVar27 = 0;
            bVar2 = false;
            puVar21 = (undefined4 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0;
            bVar3 = *pbVar24;
joined_r0x011af410:
            uVar28 = (uint)bVar3;
            pbVar24 = pbVar24 + 1;
            if (uVar28 == 0) goto LAB_011af464;
          }
          if (((uVar27 & 0xff) == 0 && bVar2) ||
             (uVar27 = (long)pvVar5 + (ulong)((uint)uVar27 & 0xff) * 10 + -0x14a13d6,
             0xff < (uint)uVar27)) goto LAB_011af7f0;
          *(char *)puVar21 = (char)uVar27;
          if (bVar2) {
            bVar3 = *pbVar24;
            goto joined_r0x011af410;
          }
          if (3 < iVar8) goto LAB_011af7f0;
          iVar8 = iVar8 + 1;
          bVar2 = true;
          uVar28 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar28 != 0);
LAB_011af464:
        if (3 < iVar8) {
          uVar6 = 0;
          *param_3 = local_a8;
          if (*(long *)(lVar4 + 0x28) == local_68) {
            return;
          }
          goto LAB_011af8dc;
        }
      }
    }
  }
  goto LAB_011af7f0;
LAB_011af61c:
  do {
    pvVar5 = memchr("0123456789",uVar28,0xb);
    if (pvVar5 == (void *)0x0) {
      if (((iVar8 == 4) || (uVar28 != 0x2e)) || (!bVar2)) goto LAB_011af7f0;
      uVar27 = 0;
      bVar2 = false;
      puVar21 = (undefined4 *)((long)puVar21 + 1);
      *(undefined1 *)puVar21 = 0;
      bVar3 = local_b8[lVar10];
    }
    else {
      if (((uVar27 & 0xff) == 0 && bVar2) ||
         (uVar27 = (long)pvVar5 + (ulong)((uint)uVar27 & 0xff) * 10 + -0x14a13d6,
         0xff < (uint)uVar27)) goto LAB_011af7f0;
      *(char *)puVar21 = (char)uVar27;
      if (bVar2) {
        bVar3 = local_b8[lVar10];
      }
      else {
        if (3 < iVar8) goto LAB_011af7f0;
        iVar8 = iVar8 + 1;
        bVar2 = true;
        bVar3 = local_b8[lVar10];
      }
    }
    uVar28 = (uint)bVar3;
    lVar10 = lVar10 + 1;
  } while (uVar28 != 0);
  if (3 < iVar8) {
    iVar8 = 0;
    *puVar23 = local_ac;
    iVar20 = 3;
LAB_011af740:
    if (iVar20 == 3) {
LAB_011af748:
      puVar23 = puVar22;
      if (iVar8 != 0) {
        puVar23 = (uint *)((long)puVar22 + 2);
        if (&local_68 < puVar23) goto LAB_011af7f0;
        *(char *)puVar22 = (char)((ushort)uVar25 >> 8);
        *(char *)((long)puVar22 + 1) = (char)uVar25;
      }
      if (local_c0 == (uint *)0x0) {
        if (puVar23 == (uint *)&local_68) goto LAB_011af8c0;
      }
      else if (puVar23 != (uint *)&local_68) {
        iVar8 = (int)puVar23 - (int)local_c0;
        if (0 < iVar8) {
          uVar27 = (ulong)(iVar8 + 1);
          uVar14 = uVar27 - 1;
          lVar10 = (long)iVar8;
          if (uVar14 < 0x20) {
            uVar12 = 1;
          }
          else {
            uVar12 = 1;
            if ((((long)&uStack_70 + 7U) - (uVar27 - 2) <= (long)&uStack_70 + 7U) &&
               (puVar16 = (undefined1 *)((long)local_c0 + lVar10 + -1),
               puVar16 + -(uVar27 - 2) <= puVar16)) {
              uVar12 = 1;
              if (((undefined1 *)((long)local_c0 + lVar10) <=
                   (undefined1 *)((long)&local_68 + (1 - uVar27))) ||
                 (&local_68 <= (undefined8 *)((long)local_c0 + ((lVar10 + 1) - uVar27)))) {
                uVar15 = uVar14 & 0xffffffffffffffe0;
                puVar17 = (undefined8 *)((undefined1 *)((long)local_c0 + lVar10) + -0x10);
                puVar18 = &local_78;
                uVar12 = uVar15 | 1;
                uVar19 = uVar15;
                do {
                  uVar30 = puVar17[-2];
                  uVar29 = puVar17[1];
                  uVar6 = *puVar17;
                  uVar19 = uVar19 - 0x20;
                  puVar18[-1] = puVar17[-1];
                  puVar18[-2] = uVar30;
                  puVar18[1] = uVar29;
                  *puVar18 = uVar6;
                  puVar17[-1] = 0;
                  puVar17[-2] = 0;
                  puVar17[1] = 0;
                  *puVar17 = 0;
                  puVar17 = puVar17 + -4;
                  puVar18 = puVar18 + -4;
                } while (uVar19 != 0);
                if (uVar14 == uVar15) goto LAB_011af8c0;
              }
            }
          }
          lVar11 = uVar27 - uVar12;
          puVar16 = (undefined1 *)((long)&local_68 - uVar12);
          puVar13 = (undefined1 *)((long)local_c0 + (lVar10 - uVar12));
          do {
            lVar11 = lVar11 + -1;
            *puVar16 = *puVar13;
            *puVar13 = 0;
            puVar16 = puVar16 + -1;
            puVar13 = puVar13 + -1;
          } while (lVar11 != 0);
        }
LAB_011af8c0:
        uVar6 = 0;
        *(undefined8 *)(param_3 + 2) = uStack_70;
        *(undefined8 *)param_3 = local_78;
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
        goto LAB_011af8dc;
      }
    }
  }
LAB_011af7f0:
  uVar6 = 0xffffffea;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_011af8dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


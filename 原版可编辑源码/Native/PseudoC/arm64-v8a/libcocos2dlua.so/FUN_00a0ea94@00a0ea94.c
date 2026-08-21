
void FUN_00a0ea94(ulong param_1,long *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  int local_78;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar12 = *param_2;
  uVar14 = *param_3;
  uVar15 = *param_4;
  uVar16 = *param_5;
  if (uVar14 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = 0;
    do {
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      uVar5 = (**(code **)(param_1 + 0x18))(param_1,&local_6c,lVar12,uVar14);
                    /* catch() { ... } // from try @ 00a0ea0c with catch @ 00a0eb04 */
                    /* catch() { ... } // from try @ 00a0e9cc with catch @ 00a0eb08 */
      lVar13 = lVar12;
      if ((int)uVar5 < 0) {
        if ((~uVar5 & 1) != 0) {
          if (uVar5 != 0xfffffffe) {
            uVar5 = -uVar5 - 2 >> 1;
            goto LAB_00a0eca8;
          }
          puVar7 = (undefined4 *)__errno();
          uVar9 = 0x16;
          goto LAB_00a0ed44;
        }
        uVar5 = ~uVar5 >> 1;
        uVar11 = (ulong)uVar5;
        if (*(int *)(param_1 + 0x4c) != 0) {
          if (*(uint *)(param_1 + 0x10) < 0x13) {
            uVar1 = 1 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f);
            if ((uVar1 & 0x1871c) == 0) {
              if ((uVar1 & 0x638e0) == 0) goto LAB_00a0ed28;
              uVar5 = uVar5 + 4;
            }
            else {
              uVar5 = uVar5 + 2;
            }
          }
          else {
LAB_00a0ed28:
            uVar5 = uVar5 + 1;
          }
          goto LAB_00a0eca8;
        }
        if (*(code **)(param_1 + 0x50) == (code *)0x0) {
          lVar12 = lVar12 + uVar11;
          uVar14 = uVar14 - uVar11;
LAB_00a0edb8:
          puVar7 = (undefined4 *)__errno();
          uVar9 = 0x54;
          lVar13 = lVar12;
          goto LAB_00a0ed44;
        }
        uVar1 = *(int *)(param_1 + 0x10) - 2;
        if (uVar1 < 0x11) {
          iVar6 = *(int *)(&DAT_013c1470 + (long)(int)uVar1 * 4);
        }
        else {
          iVar6 = 1;
        }
        local_78 = 0;
        lVar13 = lVar12 + uVar11;
        local_90 = param_1;
        local_88 = uVar15;
        local_80 = uVar16;
        (**(code **)(param_1 + 0x50))
                  (lVar13,iVar6,FUN_00a21e64,&local_90,*(undefined8 *)(param_1 + 0x70));
        iVar3 = local_78;
        if (local_78 == 0) {
          local_98 = local_98 + 1;
          uVar5 = iVar6 + uVar5;
          uVar15 = local_88;
          uVar16 = local_80;
          goto LAB_00a0eca8;
        }
        uVar14 = uVar14 - uVar11;
        piVar8 = (int *)__errno();
        *piVar8 = iVar3;
LAB_00a0ed48:
        local_98 = -1;
        lVar12 = lVar13;
        goto LAB_00a0ed60;
      }
      if (uVar16 == 0) {
LAB_00a0ed38:
        *(undefined4 *)(param_1 + 0x28) = uVar9;
        puVar7 = (undefined4 *)__errno();
        uVar9 = 7;
LAB_00a0ed44:
        *puVar7 = uVar9;
        goto LAB_00a0ed48;
      }
                    /* catch() { ... } // from try @ 00a0e9bc with catch @ 00a0eb18 */
      iVar6 = (**(code **)(param_1 + 0x30))(param_1,uVar15,local_6c,uVar16);
      if (iVar6 == -1) {
        if ((local_6c & 0xffffff80) == 0xe0000) goto LAB_00a0eca8;
        local_98 = local_98 + 1;
        if ((*(int *)(param_1 + 0x48) != 0) &&
           (iVar6 = FUN_00a22010(param_1,local_6c,uVar15,uVar16), iVar6 != -1)) goto LAB_00a0eb34;
        if (*(int *)(param_1 + 0x4c) == 0) {
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            iVar6 = (**(code **)(param_1 + 0x30))(param_1,uVar15,0xfffd,uVar16);
            if (iVar6 == -1) {
              *(undefined4 *)(param_1 + 0x28) = uVar9;
              goto LAB_00a0edb8;
            }
            goto LAB_00a0eb34;
          }
          local_80 = local_80 & 0xffffffff00000000;
          local_90 = uVar15;
          local_88 = uVar16;
          (**(code **)(param_1 + 0x58))
                    (local_6c,FUN_00a2282c,&local_90,*(undefined8 *)(param_1 + 0x70));
          iVar6 = (int)local_80;
          if ((int)local_80 != 0) {
            *(undefined4 *)(param_1 + 0x28) = uVar9;
            piVar8 = (int *)__errno();
            *piVar8 = iVar6;
            local_98 = -1;
            goto LAB_00a0ed74;
          }
          pcVar10 = *(code **)(param_1 + 0x78);
          iVar6 = 0;
          uVar15 = local_90;
          uVar16 = local_88;
        }
        else {
          iVar6 = 0;
          pcVar10 = *(code **)(param_1 + 0x78);
        }
      }
      else {
LAB_00a0eb34:
        if (iVar6 < 0) goto LAB_00a0ed38;
        pcVar10 = *(code **)(param_1 + 0x78);
      }
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(local_6c,*(undefined8 *)(param_1 + 0x88));
      }
      uVar11 = (ulong)iVar6;
      if (uVar16 < uVar11) goto LAB_00a0edfc;
      uVar15 = uVar15 + uVar11;
      uVar16 = uVar16 - uVar11;
LAB_00a0eca8:
      uVar11 = (ulong)(int)uVar5;
      bVar4 = uVar14 < uVar11;
      uVar14 = uVar14 - uVar11;
      if (bVar4) {
LAB_00a0edfc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar12 = lVar12 + uVar11;
    } while (uVar14 != 0);
    uVar14 = 0;
  }
LAB_00a0ed60:
  *param_2 = lVar12;
  *param_3 = uVar14;
  *param_4 = uVar15;
  *param_5 = uVar16;
LAB_00a0ed74:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_98);
}


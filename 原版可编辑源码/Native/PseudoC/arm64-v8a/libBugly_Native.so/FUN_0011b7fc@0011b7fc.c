
/* WARNING: Type propagation algorithm not settling */

int FUN_0011b7fc(undefined8 *param_1,long param_2,ulong param_3,ulong *param_4,ulong param_5,
                long param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_90;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar14 = *param_1;
  bVar7 = (param_1[0xd3] & 0x20) != 0;
  ppuVar3 = (undefined **)(param_1 + 1);
  if (bVar7) {
    ppuVar3 = &_Uaarch64_local_addr_space;
  }
  puVar18 = *ppuVar3;
  if (bVar7) {
    uVar14 = 0;
  }
  lVar9 = _Uaarch64_get_accessors(puVar18);
  local_78 = param_1[0xce];
  if (param_3 < local_78) {
    iVar8 = 0;
  }
  else {
    plVar16 = (long *)0x0;
    plVar17 = (long *)0x0;
    puVar1 = (undefined8 *)(lVar9 + 0x18);
    local_90 = 0;
    do {
      uVar19 = *param_4;
      if (param_5 <= uVar19) break;
      *param_4 = uVar19 + 1;
      iVar8 = (*(code *)*puVar1)(puVar18,uVar19 & 0xfffffffffffffff8,&local_70,0,uVar14);
      if (iVar8 < 0) goto LAB_0011c9f8;
      uVar19 = local_70 >> ((uVar19 - (uVar19 & 0xfffffffffffffff8)) * 8 & 0x3f);
      uVar2 = (uint)uVar19;
      if ((uVar19 & 0xc0) != 0) {
        local_90 = uVar19 & 0x3f;
        uVar2 = (uint)uVar19 & 0xffffffc0;
      }
      switch(uVar2 & 0xff) {
      case 1:
        iVar8 = FUN_0011cb4c(puVar18,lVar9,param_4,*(undefined1 *)(param_6 + 0x44),param_1 + 0xce,
                             &local_78,uVar14);
        if (-1 < iVar8) {
          pcVar11 = "CFA_set_loc to 0x%lx\n";
          uVar19 = local_78;
          goto LAB_0011c9a8;
        }
        goto joined_r0x0011c9d4;
      case 2:
        uVar19 = *param_4;
        *param_4 = uVar19 + 1;
        iVar8 = (*(code *)*puVar1)(puVar18,uVar19 & 0xfffffffffffffff8,&local_70,0,uVar14);
        if (-1 < iVar8) {
          local_78 = local_78 +
                     *(long *)(param_6 + 0x20) *
                     (local_70 >> ((uVar19 - (uVar19 & 0xfffffffffffffff8)) * 8 & 0x3f) & 0xff);
          pcVar11 = "CFA_advance_loc1 to 0x%lx\n";
          uVar19 = local_78;
          goto LAB_0011c9a8;
        }
        goto joined_r0x0011c9d4;
      case 3:
        uVar20 = *param_4;
        *param_4 = uVar20 + 1;
        iVar8 = (*(code *)*puVar1)(puVar18,uVar20 & 0xfffffffffffffff8,&local_70,0,uVar14);
        uVar19 = local_70;
        if (iVar8 < 0) goto joined_r0x0011c9d4;
        uVar21 = *param_4;
        *param_4 = uVar21 + 1;
        iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
        if (iVar8 < 0) goto joined_r0x0011c9d4;
        uVar6 = (uint)(uVar19 >> ((uVar20 - (uVar20 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar13 = (uint)(local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar2 = uVar6 & 0xff | uVar13 << 8;
        if (*(int *)(puVar18 + 0x40) != 0) {
          uVar2 = uVar13 & 0xff | uVar6 << 8;
        }
        local_78 = local_78 + *(long *)(param_6 + 0x20) * ((ulong)uVar2 & 0xffff);
        log2Console(3,"Bugly-libunwind","CFA_advance_loc2 to 0x%lx\n");
        break;
      case 4:
        uVar20 = *param_4;
        *param_4 = uVar20 + 1;
        iVar8 = (*(code *)*puVar1)(puVar18,uVar20 & 0xfffffffffffffff8,&local_70,0,uVar14);
        uVar19 = local_70;
        if (-1 < iVar8) {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (-1 < iVar8) {
            uVar22 = *param_4;
            uVar6 = (uint)(uVar19 >> ((uVar20 - (uVar20 & 0xfffffffffffffff8)) * 8 & 0x3f));
            uVar13 = (uint)(local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f));
            iVar8 = *(int *)(puVar18 + 0x40);
            *param_4 = uVar22 + 1;
            uVar2 = uVar6 & 0xff | uVar13 << 8;
            if (iVar8 != 0) {
              uVar2 = uVar13 & 0xff | uVar6 << 8;
            }
            iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
            uVar19 = local_70;
            if (-1 < iVar8) {
              uVar20 = *param_4;
              *param_4 = uVar20 + 1;
              iVar8 = (*(code *)*puVar1)(puVar18,uVar20 & 0xfffffffffffffff8,&local_70,0,uVar14);
              if (-1 < iVar8) {
                uVar19 = uVar19 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
                uVar20 = local_70 >> ((uVar20 - (uVar20 & 0xfffffffffffffff8)) * 8 & 0x3f);
                if (*(int *)(puVar18 + 0x40) == 0) {
                  uVar19 = (ulong)uVar2 & 0xffff | (uVar19 & 0xff | (uVar20 & 0xff) << 8) << 0x10;
                }
                else {
                  uVar19 = ((ulong)uVar2 & 0xffff) << 0x10 | (uVar19 & 0xff) << 8 | uVar20 & 0xff;
                }
                pcVar11 = "CFA_advance_loc4 to 0x%lx\n";
                local_78 = local_78 + *(long *)(param_6 + 0x20) * uVar19;
                uVar19 = local_78;
                goto LAB_0011c9a8;
              }
            }
          }
        }
        goto joined_r0x0011c9d4;
      case 5:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (0x60 < uVar20) goto LAB_0011ca90;
        uVar21 = 0;
        uVar19 = 0;
        do {
          uVar22 = *param_4;
          *param_4 = uVar22 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
          uVar19 = uVar19 + 7;
        } while ((char)uVar22 < '\0');
        lVar12 = *(long *)(param_6 + 0x28);
        lVar15 = param_2 + uVar20 * 0x10;
        pcVar11 = "CFA_offset_extended r%lu at cf+0x%lx\n";
        *(undefined4 *)(lVar15 + 0x668) = 2;
        *(ulong *)(lVar15 + 0x670) = lVar12 * uVar21;
LAB_0011c958:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar20);
        break;
      case 6:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (0x60 < uVar20) {
          pcVar11 = "Invalid register number %u in DW_CFA_restore_extended\n";
          local_90 = uVar20 & 0xffffffff;
          goto LAB_0011ca5c;
        }
        lVar15 = param_2 + uVar20 * 0x10;
        pcVar11 = "CFA_restore_extended r%lu\n";
        *(undefined8 *)(lVar15 + 0x670) = *(undefined8 *)(lVar15 + 0x20);
        *(undefined8 *)(lVar15 + 0x668) = *(undefined8 *)(lVar15 + 0x18);
LAB_0011c3ec:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar20);
        break;
      case 7:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          lVar15 = param_2 + uVar20 * 0x10;
          pcVar11 = "CFA_undefined r%lu\n";
          *(undefined4 *)(lVar15 + 0x668) = 0;
          *(undefined8 *)(lVar15 + 0x670) = 0;
          goto LAB_0011c3ec;
        }
        goto LAB_0011ca90;
      case 8:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          lVar15 = param_2 + uVar20 * 0x10;
          *(undefined4 *)(lVar15 + 0x668) = 1;
          *(undefined8 *)(lVar15 + 0x670) = 0;
          pcVar11 = "CFA_same_value r%lu\n";
          goto LAB_0011c3ec;
        }
        goto LAB_0011ca90;
      case 9:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (0x60 < uVar20) goto LAB_0011ca90;
        uVar21 = 0;
        uVar19 = 0;
        do {
          uVar22 = *param_4;
          *param_4 = uVar22 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
          uVar19 = uVar19 + 7;
        } while ((char)uVar22 < '\0');
        lVar15 = param_2 + uVar20 * 0x10;
        pcVar11 = "CFA_register r%lu to r%lu\n";
        *(undefined4 *)(lVar15 + 0x668) = 3;
        *(ulong *)(lVar15 + 0x670) = uVar21;
LAB_0011c714:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar20,uVar21);
        break;
      case 10:
        plVar10 = (long *)FUN_0011e7d4(&DAT_00177400);
        if (plVar10 == (long *)0x0) {
          log2Console(3,"Bugly-libunwind","Out of memory in DW_CFA_remember_state\n");
          iVar8 = -2;
          goto joined_r0x0011c9d4;
        }
        memcpy(plVar10 + 1,(void *)(param_2 + 0x668),0x630);
        *plVar10 = (long)plVar16;
        log2Console(3,"Bugly-libunwind","CFA_remember_state\n");
        plVar16 = plVar10;
        plVar17 = plVar10;
        break;
      case 0xb:
        if (plVar16 == (long *)0x0) {
          log2Console(3,"Bugly-libunwind","register-state stack underflow\n");
          iVar8 = -8;
          goto LAB_0011c9f8;
        }
        memcpy((void *)(param_2 + 0x668),plVar16 + 1,0x630);
        plVar17 = (long *)*plVar16;
        FUN_0011e848(&DAT_00177400,plVar16);
        log2Console(3,"Bugly-libunwind","CFA_restore_state\n");
        plVar16 = plVar17;
        break;
      case 0xc:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          uVar21 = 0;
          uVar19 = 0;
          do {
            uVar22 = *param_4;
            *param_4 = uVar22 + 1;
            iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
            if (iVar8 < 0) goto joined_r0x0011c9d4;
            uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
            uVar19 = uVar19 + 7;
          } while ((char)uVar22 < '\0');
          *(ulong *)(param_2 + 0xc80) = uVar20;
          *(undefined4 *)(param_2 + 0xc88) = 0;
          *(undefined4 *)(param_2 + 0xc78) = 3;
          *(ulong *)(param_2 + 0xc90) = uVar21;
          pcVar11 = "CFA_def_cfa r%lu+0x%lx\n";
          goto LAB_0011c714;
        }
        goto LAB_0011ca90;
      case 0xd:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          *(undefined4 *)(param_2 + 0xc78) = 3;
          *(ulong *)(param_2 + 0xc80) = uVar20;
          pcVar11 = "CFA_def_cfa_register r%lu\n";
          goto LAB_0011c3ec;
        }
        goto LAB_0011ca90;
      case 0xe:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        *(undefined4 *)(param_2 + 0xc88) = 0;
        *(ulong *)(param_2 + 0xc90) = uVar20;
        pcVar11 = "CFA_def_cfa_offset 0x%lx\n";
        goto LAB_0011c2a4;
      case 0xf:
        uVar20 = *param_4;
        uVar21 = 0;
        uVar19 = 0;
        *(undefined4 *)(param_2 + 0xc78) = 4;
        *(ulong *)(param_2 + 0xc80) = uVar20;
        do {
          uVar20 = *param_4;
          *param_4 = uVar20 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar20 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar20 = local_70 >> ((uVar20 - (uVar20 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar21 = (uVar20 & 0x7f) << (uVar19 & 0x3f) | uVar21;
          uVar19 = uVar19 + 7;
        } while ((char)uVar20 < '\0');
        log2Console(3,"Bugly-libunwind","CFA_def_cfa_expr @ 0x%lx [%lu bytes]\n",*param_4,uVar21);
        *param_4 = *param_4 + uVar21;
        break;
      case 0x10:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (0x60 < uVar20) goto LAB_0011ca90;
        uVar21 = *param_4;
        uVar22 = 0;
        uVar19 = 0;
        lVar15 = param_2 + uVar20 * 0x10;
        *(undefined4 *)(lVar15 + 0x668) = 4;
        *(ulong *)(lVar15 + 0x670) = uVar21;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar22 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar22;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        log2Console(3,"Bugly-libunwind","CFA_expression r%lu @ 0x%lx [%lu bytes]\n",uVar20,param_4,
                    uVar22);
        *param_4 = *param_4 + uVar22;
        break;
      case 0x11:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          uVar21 = 0;
          uVar19 = 0;
          do {
            uVar22 = *param_4;
            *param_4 = uVar22 + 1;
            iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
            if (iVar8 < 0) goto joined_r0x0011c9d4;
            uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
            uVar19 = uVar19 + 7;
          } while (((uint)uVar22 >> 7 & 1) != 0);
          lVar15 = *(long *)(param_6 + 0x28);
          uVar4 = 0;
          if ((uVar22 & 0x40) != 0 && uVar19 < 0x40) {
            uVar4 = -1L << (uVar19 & 0x3f);
          }
          lVar12 = param_2 + uVar20 * 0x10;
          *(undefined4 *)(lVar12 + 0x668) = 2;
          *(ulong *)(lVar12 + 0x670) = lVar15 * (uVar4 | uVar21);
          pcVar11 = "CFA_offset_extended_sf r%lu at cf+0x%lx\n";
          goto LAB_0011c958;
        }
        goto LAB_0011ca90;
      case 0x12:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (uVar20 < 0x61) {
          uVar21 = 0;
          uVar19 = 0;
          do {
            uVar22 = *param_4;
            *param_4 = uVar22 + 1;
            iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
            if (iVar8 < 0) goto joined_r0x0011c9d4;
            uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
            uVar19 = uVar19 + 7;
          } while (((uint)uVar22 >> 7 & 1) != 0);
          *(undefined4 *)(param_2 + 0xc78) = 3;
          *(ulong *)(param_2 + 0xc80) = uVar20;
          lVar15 = *(long *)(param_6 + 0x28);
          uVar4 = 0;
          if ((uVar22 & 0x40) != 0 && uVar19 < 0x40) {
            uVar4 = -1L << (uVar19 & 0x3f);
          }
          *(undefined4 *)(param_2 + 0xc88) = 0;
          *(ulong *)(param_2 + 0xc90) = lVar15 * (uVar4 | uVar21);
          pcVar11 = "CFA_def_cfa_sf r%lu+0x%lx\n";
          goto LAB_0011c958;
        }
LAB_0011ca90:
        pcVar11 = "Invalid register number %u\n";
        local_90 = uVar20 & 0xffffffff;
LAB_0011caa8:
        log2Console(3,"Bugly-libunwind",pcVar11,local_90);
        iVar8 = -3;
        goto joined_r0x0011c9d4;
      case 0x13:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while (((uint)uVar21 >> 7 & 1) != 0);
        lVar15 = *(long *)(param_6 + 0x28);
        uVar22 = 0;
        if ((uVar21 & 0x40) != 0 && uVar19 < 0x40) {
          uVar22 = -1L << (uVar19 & 0x3f);
        }
        *(undefined4 *)(param_2 + 0xc88) = 0;
        *(ulong *)(param_2 + 0xc90) = lVar15 * (uVar22 | uVar20);
        log2Console(3,"Bugly-libunwind","CFA_def_cfa_offset_sf 0x%lx\n");
        break;
      case 0x1c:
      case 0x2d:
      case 0x3c:
        local_90 = (ulong)(uVar2 & 0xff);
        pcVar11 = "Unexpected CFA opcode 0x%x\n";
LAB_0011ca5c:
        log2Console(3,"Bugly-libunwind",pcVar11,local_90);
        iVar8 = -8;
        goto joined_r0x0011c9d4;
      case 0x1d:
        log2Console(3,"Bugly-libunwind","DW_CFA_MIPS_advance_loc8 on non-MIPS target\n");
        iVar8 = -8;
        goto joined_r0x0011c9d4;
      case 0x2e:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        pcVar11 = "CFA_GNU_args_size %lu\n";
        *(ulong *)(param_2 + 8) = uVar20;
LAB_0011c2a4:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar20);
        break;
      case 0x2f:
        uVar20 = 0;
        uVar19 = 0;
        do {
          uVar21 = *param_4;
          *param_4 = uVar21 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
          uVar19 = uVar19 + 7;
        } while ((char)uVar21 < '\0');
        if (0x60 < uVar20) goto LAB_0011ca90;
        uVar21 = 0;
        uVar19 = 0;
        do {
          uVar22 = *param_4;
          *param_4 = uVar22 + 1;
          iVar8 = (*(code *)*puVar1)(puVar18,uVar22 & 0xfffffffffffffff8,&local_70,0,uVar14);
          if (iVar8 < 0) goto joined_r0x0011c9d4;
          uVar22 = local_70 >> ((uVar22 - (uVar22 & 0xfffffffffffffff8)) * 8 & 0x3f);
          uVar21 = (uVar22 & 0x7f) << (uVar19 & 0x3f) | uVar21;
          uVar19 = uVar19 + 7;
        } while ((char)uVar22 < '\0');
        lVar12 = *(long *)(param_6 + 0x28);
        lVar15 = param_2 + uVar20 * 0x10;
        *(undefined4 *)(lVar15 + 0x668) = 2;
        *(ulong *)(lVar15 + 0x670) = -(uVar21 * lVar12);
        log2Console(3,"Bugly-libunwind","CFA_GNU_negative_offset_extended cfa+0x%lx\n");
        break;
      case 0x40:
        local_78 = local_78 + *(long *)(param_6 + 0x20) * local_90;
        pcVar11 = "CFA_advance_loc to 0x%lx\n";
        uVar19 = local_78;
        goto LAB_0011c9a8;
      case 0x80:
        if (local_90 < 0x61) {
          uVar20 = 0;
          uVar19 = 0;
          do {
            uVar21 = *param_4;
            *param_4 = uVar21 + 1;
            iVar8 = (*(code *)*puVar1)(puVar18,uVar21 & 0xfffffffffffffff8,&local_70,0,uVar14);
            if (iVar8 < 0) goto joined_r0x0011c9d4;
            uVar21 = local_70 >> ((uVar21 - (uVar21 & 0xfffffffffffffff8)) * 8 & 0x3f);
            uVar20 = (uVar21 & 0x7f) << (uVar19 & 0x3f) | uVar20;
            uVar19 = uVar19 + 7;
          } while ((char)uVar21 < '\0');
          lVar12 = *(long *)(param_6 + 0x28);
          lVar15 = param_2 + local_90 * 0x10;
          *(undefined4 *)(lVar15 + 0x668) = 2;
          *(ulong *)(lVar15 + 0x670) = lVar12 * uVar20;
          log2Console(3,"Bugly-libunwind","CFA_offset r%lu at cfa+0x%lx\n");
          break;
        }
        pcVar11 = "Invalid register number %u in DW_cfa_OFFSET\n";
        goto LAB_0011caa8;
      case 0xc0:
        if (0x60 < local_90) {
          pcVar11 = "Invalid register number %u in DW_CFA_restore\n";
          goto LAB_0011ca5c;
        }
        lVar15 = param_2 + local_90 * 0x10;
        pcVar11 = "CFA_restore r%lu\n";
        *(undefined8 *)(lVar15 + 0x670) = *(undefined8 *)(lVar15 + 0x20);
        *(undefined8 *)(lVar15 + 0x668) = *(undefined8 *)(lVar15 + 0x18);
        uVar19 = local_90;
LAB_0011c9a8:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar19);
      }
    } while (local_78 <= param_3);
    iVar8 = 0;
joined_r0x0011c9d4:
    while (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      FUN_0011e848(&DAT_00177400,plVar17);
      plVar17 = plVar16;
    }
  }
LAB_0011c9f8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


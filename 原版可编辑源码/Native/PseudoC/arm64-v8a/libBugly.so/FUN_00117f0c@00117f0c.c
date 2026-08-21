
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00117f0c(undefined8 *param_1,long param_2,ulong param_3,ulong *param_4,ulong param_5,
                 long param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ushort uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong local_50;
  ulong local_38;
  long *local_30;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar19 = *param_1;
  puVar18 = (undefined *)param_1[1];
  if (((uint)param_1[0xd3] >> 5 & 1) != 0) {
    uVar19 = 0;
    puVar18 = _Uaarch64_local_addr_space;
  }
  local_30 = (long *)0x0;
  local_50 = 0;
  lVar5 = _Uaarch64_get_accessors(puVar18);
  local_18 = param_1[0xce];
joined_r0x00117fbc:
  if ((param_3 < local_18) || (uVar11 = *param_4, param_5 <= uVar11)) {
    uVar6 = 0;
joined_r0x001180f4:
    while (local_30 != (long *)0x0) {
      plVar17 = (long *)*local_30;
      FUN_0011b9a8(&DAT_00176350,local_30);
      local_30 = plVar17;
    }
LAB_00118114:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
    return;
  }
  pcVar15 = *(code **)(lVar5 + 0x18);
  *param_4 = uVar11 + 1;
  uVar6 = (*pcVar15)(puVar18,uVar11 & 0xfffffffffffffff8,&local_10,0,uVar19);
  uVar11 = local_10 >>
           ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f);
  if ((int)uVar6 < 0) goto LAB_00118114;
  uVar4 = (uint)uVar11 & 0xff;
  if ((uVar11 & 0xc0) != 0) {
    local_50 = uVar11 & 0x3f;
    uVar4 = (uint)uVar11 & 0xc0;
  }
  switch(uVar4) {
  case 1:
    uVar4 = FUN_00119e5c(puVar18,lVar5,param_4,*(undefined1 *)(param_6 + 0x44),param_1 + 0xce,
                         &local_18,uVar19);
    uVar6 = (ulong)uVar4;
    if ((int)uVar4 < 0) goto joined_r0x001180f4;
    log2Console(3,"Bugly-libunwind","CFA_set_loc to 0x%lx\n",local_18);
    goto joined_r0x00117fbc;
  case 2:
    uVar11 = *param_4;
    pcVar15 = *(code **)(lVar5 + 0x18);
    *param_4 = uVar11 + 1;
    uVar4 = (*pcVar15)(puVar18,uVar11 & 0xfffffffffffffff8,&local_10,0,uVar19);
    uVar6 = (ulong)uVar4;
    if (-1 < (int)uVar4) {
      uVar11 = local_10 >>
               ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f) & 0xff
      ;
      pcVar7 = "CFA_advance_loc1 to 0x%lx\n";
      lVar8 = *(long *)(param_6 + 0x20);
      goto LAB_0011809c;
    }
    goto joined_r0x001180f4;
  case 3:
    uVar16 = *param_4;
    pcVar15 = *(code **)(lVar5 + 0x18);
    *param_4 = uVar16 + 1;
    uVar4 = (*pcVar15)(puVar18,uVar16 & 0xfffffffffffffff8,&local_10,0,uVar19);
    uVar11 = local_10;
    uVar6 = (ulong)uVar4;
    if ((int)uVar4 < 0) goto joined_r0x001180f4;
    uVar12 = *param_4;
    pcVar15 = *(code **)(lVar5 + 0x18);
    *param_4 = uVar12 + 1;
    uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
    uVar6 = (ulong)uVar4;
    uVar1 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar4 < 0) goto joined_r0x001180f4;
    uVar2 = (undefined1)
            (uVar11 >>
            ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (*(int *)(puVar18 + 0x40) == 0) {
      uVar9 = CONCAT11(uVar1,uVar2);
    }
    else {
      uVar9 = CONCAT11(uVar2,uVar1);
    }
    uVar11 = (ulong)uVar9;
    pcVar7 = "CFA_advance_loc2 to 0x%lx\n";
    lVar8 = *(long *)(param_6 + 0x20);
LAB_0011809c:
    local_18 = local_18 + uVar11 * lVar8;
    log2Console(3,"Bugly-libunwind",pcVar7);
switchD_0011803c_caseD_14:
    goto joined_r0x00117fbc;
  case 4:
    uVar6 = *param_4;
    pcVar15 = *(code **)(lVar5 + 0x18);
    *param_4 = uVar6 + 1;
    uVar4 = (*pcVar15)(puVar18,uVar6 & 0xfffffffffffffff8,&local_10,0,uVar19);
    uVar11 = local_10;
    if (-1 < (int)uVar4) {
      uVar16 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar16 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar16 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar1 = (undefined1)
              (local_10 >>
              ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (-1 < (int)uVar4) {
        uVar2 = (undefined1)
                (uVar11 >>
                ((ulong)(uint)(((int)uVar6 - (int)(uVar6 & 0xfffffffffffffff8)) * 8) & 0x3f));
        if (*(int *)(puVar18 + 0x40) == 0) {
          uVar3 = CONCAT11(uVar1,uVar2);
        }
        else {
          uVar3 = CONCAT11(uVar2,uVar1);
        }
        uVar6 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar6 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar6 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar11 = local_10;
        if (-1 < (int)uVar4) {
          uVar16 = *param_4;
          pcVar15 = *(code **)(lVar5 + 0x18);
          *param_4 = uVar16 + 1;
          uVar4 = (*pcVar15)(puVar18,uVar16 & 0xfffffffffffffff8,&local_10,0,uVar19);
          uVar1 = (undefined1)
                  (local_10 >>
                  ((ulong)(uint)(((int)uVar16 - (int)(uVar16 & 0xfffffffffffffff8)) * 8) & 0x3f));
          if (-1 < (int)uVar4) {
            uVar2 = (undefined1)
                    (uVar11 >>
                    ((ulong)(uint)(((int)uVar6 - (int)(uVar6 & 0xfffffffffffffff8)) * 8) & 0x3f));
            if (*(int *)(puVar18 + 0x40) == 0) {
              uVar4 = CONCAT22(CONCAT11(uVar1,uVar2),uVar3);
            }
            else {
              uVar4 = CONCAT22(uVar3,CONCAT11(uVar2,uVar1));
            }
            uVar11 = (ulong)uVar4;
            pcVar7 = "CFA_advance_loc4 to 0x%lx\n";
            lVar8 = *(long *)(param_6 + 0x20);
            goto LAB_0011809c;
          }
        }
      }
    }
    uVar6 = (ulong)uVar4;
    goto joined_r0x001180f4;
  case 5:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while (((uint)uVar13 >> 7 & 1) != 0);
      pcVar7 = "CFA_offset_extended r%lu at cf+0x%lx\n";
      lVar10 = *(long *)(param_6 + 0x28);
      lVar8 = uVar16 * 0x10;
LAB_00118e9c:
      *(ulong *)(param_2 + lVar8 + 0x670) = uVar12 * lVar10;
      *(undefined4 *)(param_2 + lVar8 + 0x668) = 2;
      log2Console(3,"Bugly-libunwind",pcVar7,uVar16);
      goto joined_r0x00117fbc;
    }
    break;
  case 6:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (0x60 < uVar16) {
      uVar6 = 0xfffffff8;
      log2Console(3,"Bugly-libunwind","Invalid register number %u in DW_CFA_restore_extended\n",
                  uVar16 & 0xffffffff);
      goto joined_r0x001180f4;
    }
    lVar8 = param_2 + uVar16 * 0x10;
    *(undefined8 *)(lVar8 + 0x668) = *(undefined8 *)(lVar8 + 0x18);
    *(undefined8 *)(lVar8 + 0x670) = *(undefined8 *)(lVar8 + 0x20);
    log2Console(3,"Bugly-libunwind","CFA_restore_extended r%lu\n",uVar16);
    goto joined_r0x00117fbc;
  case 7:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (0x60 < uVar16) goto LAB_001180cc;
    lVar8 = param_2 + uVar16 * 0x10;
    *(undefined4 *)(lVar8 + 0x668) = 0;
    *(undefined8 *)(lVar8 + 0x670) = 0;
    log2Console(3,"Bugly-libunwind","CFA_undefined r%lu\n",uVar16);
    goto joined_r0x00117fbc;
  case 8:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (0x60 < uVar16) goto LAB_001180cc;
    lVar8 = param_2 + uVar16 * 0x10;
    *(undefined4 *)(lVar8 + 0x668) = 1;
    *(undefined8 *)(lVar8 + 0x670) = 0;
    log2Console(3,"Bugly-libunwind","CFA_same_value r%lu\n",uVar16);
    goto joined_r0x00117fbc;
  case 9:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while (((uint)uVar13 >> 7 & 1) != 0);
      lVar8 = param_2 + uVar16 * 0x10;
      *(undefined4 *)(lVar8 + 0x668) = 3;
      *(ulong *)(lVar8 + 0x670) = uVar12;
      log2Console(3,"Bugly-libunwind","CFA_register r%lu to r%lu\n",uVar16,uVar12);
      goto joined_r0x00117fbc;
    }
    break;
  case 10:
    plVar17 = (long *)FUN_0011b930(&DAT_00176350);
    if (plVar17 == (long *)0x0) {
      uVar6 = 0xfffffffe;
      log2Console(3,"Bugly-libunwind","Out of memory in DW_CFA_remember_state\n");
      goto joined_r0x001180f4;
    }
    memcpy(plVar17 + 1,(void *)(param_2 + 0x668),0x630);
    *plVar17 = (long)local_30;
    log2Console(3,"Bugly-libunwind","CFA_remember_state\n");
    local_30 = plVar17;
    goto joined_r0x00117fbc;
  case 0xb:
    if (local_30 == (long *)0x0) {
      log2Console(3,"Bugly-libunwind","register-state stack underflow\n");
      uVar6 = 0xfffffff8;
      goto LAB_00118114;
    }
    memcpy((void *)(param_2 + 0x668),local_30 + 1,0x630);
    plVar17 = (long *)*local_30;
    FUN_0011b9a8(&DAT_00176350,local_30);
    log2Console(3,"Bugly-libunwind","CFA_restore_state\n");
    local_30 = plVar17;
    goto joined_r0x00117fbc;
  case 0xc:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while (((uint)uVar13 >> 7 & 1) != 0);
      *(ulong *)(param_2 + 0xc80) = uVar16;
      *(undefined4 *)(param_2 + 0xc78) = 3;
      *(undefined4 *)(param_2 + 0xc88) = 0;
      *(ulong *)(param_2 + 0xc90) = uVar12;
      log2Console(3,"Bugly-libunwind","CFA_def_cfa r%lu+0x%lx\n",uVar16,uVar12);
      goto joined_r0x00117fbc;
    }
    break;
  case 0xd:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (0x60 < uVar16) {
LAB_001180cc:
      uVar6 = 0xfffffffd;
      log2Console(3,"Bugly-libunwind","Invalid register number %u\n",uVar16 & 0xffffffff);
      goto joined_r0x001180f4;
    }
    *(undefined4 *)(param_2 + 0xc78) = 3;
    *(ulong *)(param_2 + 0xc80) = uVar16;
    log2Console(3,"Bugly-libunwind","CFA_def_cfa_register r%lu\n",uVar16);
    goto joined_r0x00117fbc;
  case 0xe:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    *(undefined4 *)(param_2 + 0xc88) = 0;
    *(ulong *)(param_2 + 0xc90) = uVar16;
    log2Console(3,"Bugly-libunwind","CFA_def_cfa_offset 0x%lx\n",uVar16);
    goto joined_r0x00117fbc;
  case 0xf:
    uVar11 = 0;
    *(ulong *)(param_2 + 0xc80) = *param_4;
    uVar16 = 0;
    *(undefined4 *)(param_2 + 0xc78) = 4;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    log2Console(3,"Bugly-libunwind","CFA_def_cfa_expr @ 0x%lx [%lu bytes]\n",*param_4,uVar16);
    *param_4 = *param_4 + uVar16;
    goto joined_r0x00117fbc;
  case 0x10:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      lVar8 = param_2 + uVar16 * 0x10;
      uVar6 = *param_4;
      uVar11 = 0;
      local_38 = 0;
      *(undefined4 *)(lVar8 + 0x668) = 4;
      *(ulong *)(lVar8 + 0x670) = uVar6;
      do {
        uVar12 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar12 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar12 = local_10 >>
                 ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        local_38 = local_38 | (uVar12 & 0x7f) << uVar6;
      } while (((uint)uVar12 >> 7 & 1) != 0);
      log2Console(3,"Bugly-libunwind","CFA_expression r%lu @ 0x%lx [%lu bytes]\n",uVar16,param_4,
                  local_38);
      *param_4 = *param_4 + local_38;
      goto joined_r0x00117fbc;
    }
    break;
  case 0x11:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        uVar14 = (uint)uVar13;
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while ((uVar14 >> 7 & 1) != 0);
      if ((uVar11 < 0x40) && (((uVar14 & 0xff) >> 6 & 1) != 0)) {
        uVar12 = -1L << (uVar11 & 0x3f) | uVar12;
      }
      pcVar7 = "CFA_offset_extended_sf r%lu at cf+0x%lx\n";
      lVar10 = *(long *)(param_6 + 0x28);
      lVar8 = uVar16 << 4;
      goto LAB_00118e9c;
    }
    break;
  case 0x12:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        uVar14 = (uint)uVar13;
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while ((uVar14 >> 7 & 1) != 0);
      if ((uVar11 < 0x40) && (((uVar14 & 0xff) >> 6 & 1) != 0)) {
        uVar12 = -1L << (uVar11 & 0x3f) | uVar12;
      }
      lVar8 = *(long *)(param_6 + 0x28);
      *(ulong *)(param_2 + 0xc80) = uVar16;
      *(undefined4 *)(param_2 + 0xc78) = 3;
      *(undefined4 *)(param_2 + 0xc88) = 0;
      *(ulong *)(param_2 + 0xc90) = uVar12 * lVar8;
      log2Console(3,"Bugly-libunwind","CFA_def_cfa_sf r%lu+0x%lx\n",uVar16);
      goto joined_r0x00117fbc;
    }
    break;
  case 0x13:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      uVar14 = (uint)uVar12;
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while ((uVar14 >> 7 & 1) != 0);
    if ((uVar11 < 0x40) && (((uVar14 & 0xff) >> 6 & 1) != 0)) {
      uVar16 = -1L << (uVar11 & 0x3f) | uVar16;
    }
    lVar8 = *(long *)(param_6 + 0x28);
    *(undefined4 *)(param_2 + 0xc88) = 0;
    *(ulong *)(param_2 + 0xc90) = uVar16 * lVar8;
    log2Console(3,"Bugly-libunwind","CFA_def_cfa_offset_sf 0x%lx\n");
    goto joined_r0x00117fbc;
  default:
    goto switchD_0011803c_caseD_14;
  case 0x1c:
  case 0x2d:
  case 0x3c:
    uVar6 = 0xfffffff8;
    log2Console(3,"Bugly-libunwind","Unexpected CFA opcode 0x%x\n");
    goto joined_r0x001180f4;
  case 0x1d:
    uVar6 = 0xfffffff8;
    log2Console(3,"Bugly-libunwind","DW_CFA_MIPS_advance_loc8 on non-MIPS target\n");
    goto joined_r0x001180f4;
  case 0x2e:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    *(ulong *)(param_2 + 8) = uVar16;
    log2Console(3,"Bugly-libunwind","CFA_GNU_args_size %lu\n",uVar16);
    goto joined_r0x00117fbc;
  case 0x2f:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    if (uVar16 < 0x61) {
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar13 = *param_4;
        pcVar15 = *(code **)(lVar5 + 0x18);
        *param_4 = uVar13 + 1;
        uVar4 = (*pcVar15)(puVar18,uVar13 & 0xfffffffffffffff8,&local_10,0,uVar19);
        uVar6 = (ulong)uVar4;
        uVar13 = local_10 >>
                 ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f);
        if ((int)uVar4 < 0) goto joined_r0x001180f4;
        uVar6 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 | (uVar13 & 0x7f) << uVar6;
      } while (((uint)uVar13 >> 7 & 1) != 0);
      lVar8 = param_2 + uVar16 * 0x10;
      lVar10 = *(long *)(param_6 + 0x28);
      *(undefined4 *)(lVar8 + 0x668) = 2;
      *(ulong *)(lVar8 + 0x670) = -(lVar10 * uVar12);
      log2Console(3,"Bugly-libunwind","CFA_GNU_negative_offset_extended cfa+0x%lx\n");
      goto joined_r0x00117fbc;
    }
    break;
  case 0x40:
    local_18 = local_18 + local_50 * *(long *)(param_6 + 0x20);
    log2Console(3,"Bugly-libunwind","CFA_advance_loc to 0x%lx\n");
    goto joined_r0x00117fbc;
  case 0x80:
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = *param_4;
      pcVar15 = *(code **)(lVar5 + 0x18);
      *param_4 = uVar12 + 1;
      uVar4 = (*pcVar15)(puVar18,uVar12 & 0xfffffffffffffff8,&local_10,0,uVar19);
      uVar6 = (ulong)uVar4;
      uVar12 = local_10 >>
               ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar4 < 0) goto joined_r0x001180f4;
      uVar6 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar16 = uVar16 | (uVar12 & 0x7f) << uVar6;
    } while (((uint)uVar12 >> 7 & 1) != 0);
    lVar10 = *(long *)(param_6 + 0x28);
    lVar8 = param_2 + local_50 * 0x10;
    *(undefined4 *)(lVar8 + 0x668) = 2;
    *(ulong *)(lVar8 + 0x670) = uVar16 * lVar10;
    log2Console(3,"Bugly-libunwind","CFA_offset r%lu at cfa+0x%lx\n",local_50);
    goto joined_r0x00117fbc;
  case 0xc0:
    goto switchD_0011803c_caseD_c0;
  }
  uVar6 = 0xfffffffd;
  log2Console(3,"Bugly-libunwind","Invalid register number %u\n",uVar16 & 0xffffffff);
  goto joined_r0x001180f4;
switchD_0011803c_caseD_c0:
  lVar8 = param_2 + local_50 * 0x10;
  *(undefined8 *)(lVar8 + 0x668) = *(undefined8 *)(lVar8 + 0x18);
  *(undefined8 *)(lVar8 + 0x670) = *(undefined8 *)(lVar8 + 0x20);
  log2Console(3,"Bugly-libunwind","CFA_restore r%lu\n");
  goto joined_r0x00117fbc;
}


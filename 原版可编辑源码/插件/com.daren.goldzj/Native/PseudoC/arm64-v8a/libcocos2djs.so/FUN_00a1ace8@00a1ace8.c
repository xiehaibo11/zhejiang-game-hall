
ulong FUN_00a1ace8(long *param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  double extraout_d0;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long local_f8;
  long local_f0;
  undefined1 auStack_e4 [10];
  undefined1 auStack_da [10];
  undefined1 auStack_d0 [10];
  undefined1 auStack_c6 [10];
  undefined1 auStack_bc [10];
  undefined1 auStack_b2 [10];
  char local_a8 [16];
  char local_98 [16];
  char local_88 [16];
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  lVar20 = *param_1;
  iVar21 = *(int *)(lVar20 + 0xac8);
  auVar27 = FUN_00a18e40();
  lVar22 = auVar27._0_8_;
  uVar9 = FUN_00a18ed0(lVar22,auVar27._8_8_,*(undefined8 *)(lVar20 + 0x9c8),
                       *(undefined8 *)(lVar20 + 0x9d0));
  *(double *)(lVar20 + 0x980) = extraout_d0;
  pauVar1 = (undefined1 (*) [16])(lVar20 + 0x958);
  lVar16 = *(long *)*pauVar1;
  dVar25 = extraout_d0;
  if (extraout_d0 <= 0.0) {
    dVar25 = 1.0;
  }
  auVar26 = NEON_scvtf(*pauVar1,8);
  *(long *)(lVar20 + 0x990) = (long)(auVar26._8_8_ / dVar25);
  *(long *)(lVar20 + 0x988) = (long)(auVar26._0_8_ / dVar25);
  if (*(long *)(lVar20 + 0x940) == lVar22) {
    bVar7 = false;
    uVar8 = *(uint *)(lVar20 + 0x978);
  }
  else {
    if (lVar16 <= *(long *)(lVar20 + 0x960)) {
      lVar16 = *(long *)(lVar20 + 0x960);
    }
    lVar2 = lVar20 + 0x940;
    iVar21 = iVar21 % 6;
    *(long *)(lVar20 + 0x940) = lVar22;
    plVar24 = (long *)(lVar2 + (long)iVar21 * 8 + 0xf8);
    *plVar24 = lVar16;
    *(undefined1 (*) [16])(lVar2 + (long)iVar21 * 0x10 + 0x128) = auVar27;
    iVar21 = *(int *)(lVar20 + 0xac8);
    *(int *)(lVar20 + 0xac8) = iVar21 + 1;
    if (iVar21 == 0) {
      lVar16 = *(long *)(lVar20 + 0x990);
      if (*(long *)(lVar20 + 0x990) <= *(long *)(lVar20 + 0x988)) {
        lVar16 = *(long *)(lVar20 + 0x988);
      }
    }
    else {
      lVar16 = (long)((iVar21 + 1) % 6);
      if (iVar21 < 5) {
        lVar16 = 0;
      }
      lVar3 = lVar2 + lVar16 * 0x10;
      uVar9 = FUN_00a18ea0(lVar22,auVar27._8_8_,*(undefined8 *)(lVar3 + 0x128),
                           *(undefined8 *)(lVar3 + 0x130));
      uVar18 = uVar9;
      if (uVar9 == 0) {
        uVar18 = 1;
      }
      lVar22 = *plVar24 - *(long *)(lVar2 + lVar16 * 8 + 0xf8);
      if (lVar22 < 0x418938) {
        lVar16 = 0;
        if (uVar18 != 0) {
          lVar16 = (lVar22 * 1000) / (long)uVar18;
        }
      }
      else {
        lVar16 = (long)((double)lVar22 / ((double)(long)uVar18 / 1000.0));
      }
    }
    bVar7 = true;
    *(long *)(lVar20 + 0x968) = lVar16;
    uVar8 = *(uint *)(lVar20 + 0x978);
  }
  if ((uVar8 >> 4 & 1) == 0) {
    if (*(code **)(lVar20 + 0x2e0) == (code *)0x0) {
      if (*(code **)(lVar20 + 0x2d8) == (code *)0x0) {
        if (!bVar7) goto LAB_00a1af00;
        if ((uVar8 >> 7 & 1) == 0) {
          if (*(long *)(lVar20 + 0x8cd8) != 0) {
            FUN_00a0ec44(*(undefined8 *)(lVar20 + 0x220),
                         "** Resuming transfer from byte position %ld\n");
          }
          FUN_00a0ec44(*(undefined8 *)(lVar20 + 0x220),
                       "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                      );
          uVar8 = *(uint *)(lVar20 + 0x978) | 0x80;
          *(uint *)(lVar20 + 0x978) = uVar8;
        }
        plVar24 = (long *)(lVar20 + 0x960);
        if (((uVar8 >> 5 & 1) == 0) || (lVar16 = *(long *)(lVar20 + 0x990), lVar16 < 1)) {
          uVar9 = 0;
          local_f0 = 0;
        }
        else {
          uVar18 = *(ulong *)(lVar20 + 0x950);
          uVar9 = 0;
          if (lVar16 != 0) {
            uVar9 = (long)uVar18 / lVar16;
          }
          if ((long)uVar18 < 0x2711) {
            if ((long)uVar18 < 1) {
              local_f0 = 0;
              goto LAB_00a1aff0;
            }
            lVar16 = *plVar24 * 100;
          }
          else {
            lVar16 = *plVar24;
            uVar18 = uVar18 / 100;
          }
          local_f0 = 0;
          if (uVar18 != 0) {
            local_f0 = lVar16 / (long)uVar18;
          }
        }
LAB_00a1aff0:
        uVar18 = (ulong)extraout_d0;
        if (((uVar8 >> 6 & 1) == 0) || (lVar16 = *(long *)(lVar20 + 0x988), lVar16 < 1)) {
          uVar17 = 0;
          local_f8 = 0;
        }
        else {
          uVar19 = *(ulong *)(lVar20 + 0x948);
          uVar17 = 0;
          if (lVar16 != 0) {
            uVar17 = (long)uVar19 / lVar16;
          }
          if ((long)uVar19 < 0x2711) {
            if ((long)uVar19 < 1) {
              local_f8 = 0;
              goto LAB_00a1b07c;
            }
            lVar16 = *(long *)*pauVar1 * 100;
          }
          else {
            lVar16 = *(long *)*pauVar1;
            uVar19 = uVar19 / 100;
          }
          local_f8 = 0;
          if (uVar19 != 0) {
            local_f8 = lVar16 / (long)uVar19;
          }
        }
LAB_00a1b07c:
        if ((long)uVar9 <= (long)uVar17) {
          uVar9 = uVar17;
        }
        uVar17 = uVar9 - uVar18;
        if ((long)uVar9 < 1) {
          uVar17 = 0;
        }
        if ((long)uVar17 < 1) {
          builtin_strncpy(local_88,"--:--:--",9);
joined_r0x00a1b124:
          if (0 < (long)uVar9) goto LAB_00a1b194;
LAB_00a1b200:
          builtin_strncpy(local_98,"--:--:--",9);
joined_r0x00a1b218:
          if ((long)uVar18 < 1) goto LAB_00a1b2ec;
LAB_00a1b288:
          if ((long)uVar18 < 360000) {
            FUN_00a0e7c4(local_a8,9,"%2ld:%02ld:%02ld",uVar18 / 0xe10,(uVar18 % 0xe10) / 0x3c,
                         (uVar18 % 0xe10) % 0x3c);
          }
          else if ((long)uVar18 < 86400000) {
            FUN_00a0e7c4(local_a8,9,"%3ldd %02ldh",uVar18 / 0x15180,(uVar18 % 0x15180) / 0xe10);
          }
          else {
            FUN_00a0e7c4(local_a8,9,"%7ldd");
          }
        }
        else {
          if ((long)uVar17 < 360000) {
            FUN_00a0e7c4(local_88,9,"%2ld:%02ld:%02ld",uVar17 / 0xe10,(uVar17 % 0xe10) / 0x3c,
                         (uVar17 % 0xe10) % 0x3c);
            goto joined_r0x00a1b124;
          }
          if ((long)uVar17 < 86400000) {
            FUN_00a0e7c4(local_88,9,"%3ldd %02ldh",uVar17 / 0x15180,(uVar17 % 0x15180) / 0xe10);
            goto joined_r0x00a1b124;
          }
          FUN_00a0e7c4(local_88,9,"%7ldd");
          if ((long)uVar9 < 1) goto LAB_00a1b200;
LAB_00a1b194:
          if ((long)uVar9 < 360000) {
            FUN_00a0e7c4(local_98,9,"%2ld:%02ld:%02ld",uVar9 / 0xe10,(uVar9 % 0xe10) / 0x3c,
                         (uVar9 % 0xe10) % 0x3c);
            goto joined_r0x00a1b218;
          }
          if (86399999 < (long)uVar9) {
            FUN_00a0e7c4(local_98,9,"%7ldd");
            goto joined_r0x00a1b218;
          }
          FUN_00a0e7c4(local_98,9,"%3ldd %02ldh",uVar9 / 0x15180,(uVar9 % 0x15180) / 0xe10);
          if (0 < (long)uVar18) goto LAB_00a1b288;
LAB_00a1b2ec:
          builtin_strncpy(local_a8,"--:--:--",9);
        }
        plVar4 = (long *)(lVar20 + 0x950);
        if ((*(uint *)(lVar20 + 0x978) & 0x20) == 0) {
          plVar4 = plVar24;
        }
        pauVar5 = (undefined1 (*) [16])(lVar20 + 0x948);
        if ((*(uint *)(lVar20 + 0x978) & 0x40) == 0) {
          pauVar5 = pauVar1;
        }
        uVar9 = *(long *)*pauVar5 + *plVar4;
        lVar16 = *(long *)(lVar20 + 0x960) + *(long *)(lVar20 + 0x958);
        if ((long)uVar9 < 0x2711) {
          if ((long)uVar9 < 1) {
            lVar22 = 0;
          }
          else {
            lVar22 = 0;
            if (uVar9 != 0) {
              lVar22 = (lVar16 * 100) / (long)uVar9;
            }
          }
        }
        else {
          lVar22 = 0;
          if (uVar9 / 100 != 0) {
            lVar22 = lVar16 / (long)(uVar9 / 100);
          }
        }
        uVar23 = *(undefined8 *)(lVar20 + 0x220);
        uVar10 = FUN_00a1b7dc(uVar9,auStack_d0);
        uVar11 = FUN_00a1b7dc(*(undefined8 *)(lVar20 + 0x958),auStack_e4);
        uVar12 = FUN_00a1b7dc(*(undefined8 *)(lVar20 + 0x960),auStack_da);
        uVar13 = FUN_00a1b7dc(*(undefined8 *)(lVar20 + 0x988),auStack_c6);
        uVar14 = FUN_00a1b7dc(*(undefined8 *)(lVar20 + 0x990),auStack_bc);
        uVar15 = FUN_00a1b7dc(*(undefined8 *)(lVar20 + 0x968),auStack_b2);
        FUN_00a0ec44(uVar23,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s",lVar22,uVar10,local_f8
                     ,uVar11,local_f0,uVar12,uVar13,uVar14,local_98,local_a8,local_88,uVar15);
        uVar8 = fflush(*(FILE **)(lVar20 + 0x220));
        uVar9 = (ulong)uVar8;
        goto LAB_00a1af00;
      }
      auVar27._0_8_ = (double)*(long *)(lVar20 + 0x950);
      auVar27._8_8_ = 0;
      uVar9 = (**(code **)(lVar20 + 0x2d8))
                        ((double)*(long *)(lVar20 + 0x948),(double)*(long *)(lVar20 + 0x958),auVar27
                         ,(double)*(long *)(lVar20 + 0x960),*(undefined8 *)(lVar20 + 0x348));
      iVar21 = (int)uVar9;
    }
    else {
      uVar9 = (**(code **)(lVar20 + 0x2e0))
                        (*(undefined8 *)(lVar20 + 0x348),*(undefined8 *)(lVar20 + 0x948),
                         *(undefined8 *)(lVar20 + 0x958),*(undefined8 *)(lVar20 + 0x950),
                         *(undefined8 *)(lVar20 + 0x960));
      iVar21 = (int)uVar9;
    }
    uVar18 = uVar9 & 0xffffffff;
    if (iVar21 != 0) {
      uVar9 = FUN_00a23020(lVar20,"Callback aborted");
    }
  }
  else {
LAB_00a1af00:
    uVar18 = 0;
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return uVar18;
}


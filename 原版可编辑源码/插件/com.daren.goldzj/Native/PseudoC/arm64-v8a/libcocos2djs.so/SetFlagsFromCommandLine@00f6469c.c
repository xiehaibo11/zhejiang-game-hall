
/* v8::internal::FlagList::SetFlagsFromCommandLine(int*, char**, bool) */

uint v8::internal::FlagList::SetFlagsFromCommandLine(int *param_1,char **param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  int *piVar9;
  longlong lVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  char *pcVar14;
  undefined *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  undefined8 *puVar22;
  char cVar23;
  byte bVar24;
  uint *puVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  char *pcVar29;
  char *pcVar30;
  ulong uVar31;
  double dVar32;
  uint local_480;
  char *local_478;
  char acStack_470 [1024];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (*param_1 < 2) {
    local_480 = 0;
  }
  else {
    local_480 = 0;
    uVar28 = 1;
    do {
      uVar27 = (uint)uVar28;
      pcVar29 = param_2[(int)uVar27];
      uVar31 = (long)(int)uVar27 + 1;
      if ((pcVar29 != (char *)0x0) && (*pcVar29 == '-')) {
        bVar8 = pcVar29[1] == '-';
        lVar26 = 1;
        if (bVar8) {
          lVar26 = 2;
        }
        pcVar30 = pcVar29 + 2;
        if (!bVar8) {
          pcVar30 = pcVar29 + 1;
        }
        if ((pcVar29[lVar26] == 'n') && (pcVar30[1] == 'o')) {
          pcVar14 = pcVar30 + 2;
          bVar24 = 1;
          if (*pcVar14 == '-' || *pcVar14 == '_') {
            pcVar14 = pcVar30 + 3;
          }
        }
        else {
          bVar24 = 0;
          pcVar14 = pcVar30;
        }
        cVar5 = *pcVar14;
        pcVar30 = pcVar14;
        while (cVar5 != '\0') {
          if (cVar5 == '=') {
            uVar28 = (long)pcVar30 - (long)pcVar14;
            if (0x3ff < uVar28) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","n < static_cast<size_t>(buffer_size)");
            }
            MemCopy(acStack_470,pcVar14,uVar28);
            acStack_470[uVar28] = '\0';
            pcVar30 = pcVar30 + 1;
            pcVar14 = acStack_470;
            goto LAB_00f64810;
          }
          pcVar30 = pcVar30 + 1;
          cVar5 = *pcVar30;
        }
        pcVar30 = (char *)0x0;
LAB_00f64810:
        cVar4 = *pcVar14;
        lVar26 = 0;
        cVar5 = '-';
        if (cVar4 != '_') {
          cVar5 = cVar4;
        }
        do {
          pcVar21 = (&PTR_s_use_strict_01d2f060)[lVar26 * 6];
          cVar1 = '-';
          if (*pcVar21 != '_') {
            cVar1 = *pcVar21;
          }
          pcVar7 = pcVar14;
          cVar23 = cVar4;
          if (cVar5 == cVar1) {
            do {
              pcVar21 = pcVar21 + 1;
              if (cVar23 == '\0') {
                puVar25 = &DAT_01d2f058 + lVar26 * 0xc;
                uVar3 = *puVar25;
                if (uVar3 == 0) {
                  local_478 = "";
                  *(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6] = bVar24 ^ 1;
                }
                else {
                  if ((pcVar30 == (char *)0x0) && (uVar3 != 1)) {
                    if ((*param_1 <= (int)uVar31) ||
                       (pcVar30 = param_2[uVar31], pcVar30 == (char *)0x0)) {
                      if (5 < uVar3 - 2) goto LAB_00f64d70;
                      PrintF((__sFILE *)__cxa_thread_atexit_impl,
                             "Error: missing value for flag %s of type %s\n",pcVar29,
                             (&PTR_s_int_01a68a71_9_01ca6f88)[(int)(uVar3 - 2)]);
                      local_480 = uVar27;
                      goto LAB_00f64bf8;
                    }
                    uVar31 = (ulong)(uVar27 + 2);
                  }
                  local_478 = "";
                  switch(uVar3) {
                  case 1:
                    uVar18 = 0x101;
                    if (bVar24 != 0) {
                      uVar18 = 1;
                    }
                    *(undefined2 *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6] = uVar18;
                    break;
                  case 2:
                    lVar11 = strtol(pcVar30,&local_478,10);
                    *(int *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6] = (int)lVar11;
                    break;
                  case 3:
                    puVar17 = (undefined4 *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6];
                    piVar9 = (int *)__errno();
                    *piVar9 = 0;
                    uVar28 = strtoll(pcVar30,&local_478,10);
                    if ((uVar28 >> 0x20 == 0) && (*piVar9 == 0)) {
                      *puVar17 = (int)uVar28;
                    }
                    else {
                      if (7 < *puVar25) goto LAB_00f64d70;
                      puVar15 = (&PTR_s_bool_0185e0ea_0x3a_01ca6fb8)[(int)*puVar25];
                      uVar12 = 0xffffffff;
LAB_00f649c4:
                      PrintF((__sFILE *)__cxa_thread_atexit_impl,
                             "Error: Value for flag %s of type %s is out of bounds [0-%lu]\n",
                             pcVar29,puVar15,uVar12);
                      local_480 = uVar27;
                    }
                    break;
                  case 4:
                  case 6:
                    plVar16 = (longlong *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6];
                    piVar9 = (int *)__errno();
                    *piVar9 = 0;
                    lVar10 = strtoll(pcVar30,&local_478,10);
                    if ((lVar10 < 0) || (*piVar9 != 0)) {
                      if (7 < *puVar25) goto LAB_00f64d70;
                      puVar15 = (&PTR_s_bool_0185e0ea_0x3a_01ca6fb8)[(int)*puVar25];
                      uVar12 = 0xffffffffffffffff;
                      goto LAB_00f649c4;
                    }
                    *plVar16 = lVar10;
                    break;
                  case 5:
                    dVar32 = strtod(pcVar30,&local_478);
                    *(double *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6] = dVar32;
                    break;
                  case 7:
                    if (pcVar30 == (char *)0x0) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = StrDup(pcVar30);
                    }
                    puVar22 = (undefined8 *)(&PTR_FLAG_use_strict_01d2f068)[lVar26 * 6];
                    if (((&DAT_01d2f080)[lVar26 * 0x30] != '\0') &&
                       (pvVar13 = (void *)*puVar22, pvVar13 != (void *)0x0)) {
                      operator_delete__(pvVar13);
                    }
                    *puVar22 = uVar12;
                    (&DAT_01d2f080)[lVar26 * 0x30] = '\x01';
                  }
                }
                uVar3 = *puVar25;
                uVar28 = (ulong)(int)uVar3;
                if (((pcVar30 != (char *)0x0 && uVar28 < 2) != (bVar24 == 0 || uVar28 < 2)) &&
                   (*local_478 == '\0')) {
                  if (((int)uVar27 < (int)uVar31) && (param_3)) {
                    memset(param_2 + (int)uVar27,0,(ulong)((int)uVar31 + ~uVar27) * 8 + 8);
                  }
                  goto LAB_00f64724;
                }
                if (7 < uVar3) {
LAB_00f64d70:
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                }
                PrintF((__sFILE *)__cxa_thread_atexit_impl,
                       "Error: illegal value for flag %s of type %s\n",pcVar29,
                       (&PTR_s_bool_0185e0ea_0x3a_01ca6fb8)[uVar28]);
                local_480 = uVar27;
                if (uVar3 < 2) {
                  PrintF((__sFILE *)__cxa_thread_atexit_impl,
                         "To set or unset a boolean flag, use --flag or --no-flag.\n");
                }
                goto LAB_00f64bf8;
              }
              cVar23 = pcVar7[1];
              cVar1 = '-';
              if (cVar23 != '_') {
                cVar1 = cVar23;
              }
              cVar2 = '-';
              if (*pcVar21 != '_') {
                cVar2 = *pcVar21;
              }
              pcVar7 = pcVar7 + 1;
            } while (cVar1 == cVar2);
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 != 0x1d7);
        if (!param_3) {
          PrintF((__sFILE *)__cxa_thread_atexit_impl,"Error: unrecognized flag %s\n",pcVar29);
          local_480 = uVar27;
          break;
        }
      }
LAB_00f64724:
      uVar28 = uVar31 & 0xffffffff;
    } while ((int)uVar31 < *param_1);
  }
LAB_00f64bf8:
  if (FLAG_help != '\0') {
    PrintHelp();
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (param_3) {
    iVar19 = *param_1;
    if (iVar19 < 2) {
      iVar20 = 1;
    }
    else {
      lVar26 = 1;
      iVar20 = 1;
      pcVar29 = param_2[1];
      while( true ) {
        if (pcVar29 != (char *)0x0) {
          param_2[iVar20] = pcVar29;
          iVar19 = *param_1;
          iVar20 = iVar20 + 1;
        }
        lVar26 = lVar26 + 1;
        if (iVar19 <= lVar26) break;
        pcVar29 = param_2[lVar26];
      }
    }
    *param_1 = iVar20;
joined_r0x00f64cc8:
    if (local_480 == 0) goto LAB_00f64cf4;
  }
  else {
    if (local_480 == 0) goto LAB_00f64cf4;
    iVar19 = local_480 + 1;
    if (iVar19 < *param_1) {
      PrintF((__sFILE *)__cxa_thread_atexit_impl,"The remaining arguments were ignored:");
      if (iVar19 < *param_1) {
        lVar26 = (long)iVar19;
        do {
          PrintF((__sFILE *)__cxa_thread_atexit_impl," %s",param_2[lVar26]);
          lVar26 = lVar26 + 1;
        } while (lVar26 < *param_1);
      }
      PrintF((__sFILE *)__cxa_thread_atexit_impl,"\n");
      goto joined_r0x00f64cc8;
    }
  }
  PrintF((__sFILE *)__cxa_thread_atexit_impl,"Try --help for options\n");
LAB_00f64cf4:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_480;
}


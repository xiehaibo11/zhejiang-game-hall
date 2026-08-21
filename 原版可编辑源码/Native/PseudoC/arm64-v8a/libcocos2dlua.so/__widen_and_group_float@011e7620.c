
/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*,
   wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  wchar_t wVar6;
  int iVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  byte *pbVar10;
  byte *pbVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint uVar14;
  byte *pbVar15;
  wchar_t *pwVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *local_90;
  code *local_88;
  void *pvStack_80;
  undefined8 ***local_78;
  undefined8 **local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar20 = *(long *)param_7;
  local_90 = &ctype<wchar_t>::id;
  pvStack_80 = (void *)0x0;
  local_88 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_78,FUN_01208130);
  }
  lVar3 = *(long *)(lVar20 + 0x10);
  if (((long)DAT_01794320 - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar3 >> 3)) &&
     (plVar21 = *(long **)(lVar3 + ((long)DAT_01794320 - 1U) * 8), plVar21 != (long *)0x0)) {
    lVar20 = *(long *)param_7;
    pvStack_80 = (void *)0x0;
    local_88 = locale::id::__init;
    local_90 = &numpunct<wchar_t>::id;
    if (numpunct<wchar_t>::id != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      __call_once((ulong *)&numpunct<wchar_t>::id,&local_78,FUN_01208130);
    }
    lVar3 = *(long *)(lVar20 + 0x10);
    if (((long)DAT_01794390 - 1U < (ulong)(*(long *)(lVar20 + 0x18) - lVar3 >> 3)) &&
       (plVar18 = *(long **)(lVar3 + ((long)DAT_01794390 - 1U) * 8), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x28))(&local_90,plVar18);
      *param_6 = param_4;
      if ((*param_1 == '-') || (pbVar22 = (byte *)param_1, *param_1 == '+')) {
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21);
        pwVar9 = *param_6;
        pbVar22 = (byte *)(param_1 + 1);
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
      }
      if ((((long)param_3 - (long)pbVar22 < 2) || (*pbVar22 != 0x30)) ||
         ((pbVar22[1] | 0x20) != 0x78)) {
        pbVar24 = pbVar22;
        pbVar23 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar4 = *pbVar23;
            if (((DAT_017942d8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_017942d8), iVar7 != 0)) {
              DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_017942d8);
            }
            pbVar24 = pbVar23;
          } while ((bVar4 - 0x30 < 10) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      else {
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21,0x30);
        pwVar9 = *param_6;
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
        wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21,pbVar22[1]);
        pwVar9 = *param_6;
        pbVar22 = pbVar22 + 2;
        *param_6 = pwVar9 + 1;
        *pwVar9 = wVar6;
        pbVar24 = pbVar22;
        pbVar23 = pbVar22;
        if (pbVar22 < param_3) {
          do {
            bVar4 = *pbVar23;
            if (((DAT_017942d8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_017942d8), iVar7 != 0)) {
              DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
              __cxa_guard_release(&DAT_017942d8);
            }
            iVar7 = isxdigit((uint)bVar4);
            pbVar24 = pbVar23;
          } while ((iVar7 != 0) &&
                  (pbVar23 = pbVar23 + 1, pbVar24 = (byte *)param_3, (byte *)param_3 != pbVar23));
        }
      }
      pcVar2 = (code *)((ulong)local_90 >> 1 & 0x7f);
      if (((ulong)local_90 & 1) != 0) {
        pcVar2 = local_88;
      }
      if (pcVar2 == (code *)0x0) {
        (**(code **)(*plVar21 + 0x60))(plVar21,pbVar22,pbVar24,*param_6);
        *param_6 = *param_6 + ((long)pbVar24 - (long)pbVar22);
      }
      else {
        if ((pbVar22 != pbVar24) && (pbVar10 = pbVar24 + -1, pbVar23 = pbVar22, pbVar22 < pbVar10))
        {
          do {
            pbVar15 = pbVar23 + 1;
            bVar4 = *pbVar23;
            *pbVar23 = *pbVar10;
            pbVar11 = pbVar10 + -1;
            *pbVar10 = bVar4;
            pbVar10 = pbVar11;
            pbVar23 = pbVar15;
          } while (pbVar15 < pbVar11);
        }
        wVar6 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if (pbVar22 < pbVar24) {
          uVar19 = 0;
          uVar17 = 0;
          pbVar23 = pbVar22;
          do {
            pvVar1 = (void *)((ulong)&local_90 | 1);
            if (((ulong)local_90 & 1) != 0) {
              pvVar1 = pvStack_80;
            }
            uVar14 = (uint)(byte)*(code *)((long)pvVar1 + (long)(ulong)uVar19);
            if ((uVar14 != 0) && (uVar17 == uVar14)) {
              pwVar9 = *param_6;
              uVar17 = 0;
              *param_6 = pwVar9 + 1;
              *pwVar9 = wVar6;
              pcVar2 = (code *)((ulong)local_90 >> 1 & 0x7f);
              if (((ulong)local_90 & 1) != 0) {
                pcVar2 = local_88;
              }
              if ((code *)(ulong)uVar19 < pcVar2 + -1) {
                uVar19 = uVar19 + 1;
              }
            }
            wVar8 = (**(code **)(*plVar21 + 0x58))(plVar21,*pbVar23);
            pwVar12 = *param_6;
            pbVar23 = pbVar23 + 1;
            uVar17 = uVar17 + 1;
            pwVar9 = pwVar12 + 1;
            *param_6 = pwVar9;
            *pwVar12 = wVar8;
          } while (pbVar24 != pbVar23);
        }
        else {
          pwVar9 = *param_6;
        }
        if ((param_4 + ((long)pbVar22 - (long)param_1) != pwVar9) &&
           (param_4 + ((long)pbVar22 - (long)param_1) < pwVar9 + -1)) {
          pwVar12 = pwVar9 + -1;
          pwVar9 = param_4 + ((long)pbVar22 - (long)param_1);
          do {
            pwVar16 = pwVar9 + 1;
            wVar6 = *pwVar9;
            *pwVar9 = *pwVar12;
            pwVar13 = pwVar12 + -1;
            *pwVar12 = wVar6;
            pwVar12 = pwVar13;
            pwVar9 = pwVar16;
          } while (pwVar16 < pwVar13);
        }
      }
      pbVar22 = pbVar24;
      if (pbVar24 < param_3) {
        do {
          if (*pbVar24 == 0x2e) {
            wVar6 = (**(code **)(*plVar18 + 0x18))(plVar18);
            pwVar9 = *param_6;
            *param_6 = pwVar9 + 1;
            *pwVar9 = wVar6;
            pbVar22 = pbVar24 + 1;
            break;
          }
          wVar6 = (**(code **)(*plVar21 + 0x58))(plVar21);
          pwVar9 = *param_6;
          pbVar24 = pbVar24 + 1;
          *param_6 = pwVar9 + 1;
          *pwVar9 = wVar6;
          pbVar22 = (byte *)param_3;
        } while ((byte *)param_3 != pbVar24);
      }
      (**(code **)(*plVar21 + 0x60))(plVar21,pbVar22,param_3);
      pwVar9 = *param_6;
      *param_6 = pwVar9 + ((long)param_3 - (long)pbVar22);
      pwVar9 = pwVar9 + ((long)param_3 - (long)pbVar22);
      if (param_2 != param_3) {
        pwVar9 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar9;
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(pvStack_80);
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cc7c00();
}


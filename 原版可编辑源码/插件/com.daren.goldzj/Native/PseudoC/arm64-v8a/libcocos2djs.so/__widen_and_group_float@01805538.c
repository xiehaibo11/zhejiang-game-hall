
/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*,
   wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  wchar_t wVar8;
  long *plVar9;
  long *plVar10;
  wchar_t *pwVar11;
  byte *pbVar12;
  byte *pbVar13;
  wchar_t *pwVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar9 = (long *)locale::use_facet(param_7,(id *)&ctype<wchar_t>::id);
  plVar10 = (long *)locale::use_facet(param_7,(id *)&numpunct<wchar_t>::id);
  (**(code **)(*plVar10 + 0x28))(local_80);
  *param_6 = param_4;
  if ((*param_1 == '-') || (pbVar19 = (byte *)param_1, *param_1 == '+')) {
    wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9);
    pwVar11 = *param_6;
    pbVar19 = (byte *)(param_1 + 1);
    *param_6 = pwVar11 + 1;
    *pwVar11 = wVar6;
  }
  pbVar20 = pbVar19;
  if ((((long)param_3 - (long)pbVar19 < 2) || (*pbVar19 != 0x30)) || ((pbVar19[1] | 0x20) != 0x78))
  {
    for (; pbVar20 < param_3; pbVar20 = pbVar20 + 1) {
      bVar3 = *pbVar20;
      if (((DAT_01d52dc8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_01d52dc8), iVar7 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      if (9 < bVar3 - 0x30) break;
    }
  }
  else {
    wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,0x30);
    pwVar11 = *param_6;
    *param_6 = pwVar11 + 1;
    *pwVar11 = wVar6;
    wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,pbVar19[1]);
    pwVar11 = *param_6;
    *param_6 = pwVar11 + 1;
    *pwVar11 = wVar6;
    pbVar19 = pbVar19 + 2;
    for (pbVar20 = pbVar19; pbVar20 < param_3; pbVar20 = pbVar20 + 1) {
      bVar3 = *pbVar20;
      if (((DAT_01d52dc8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_01d52dc8), iVar7 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar7 = isxdigit((uint)bVar3);
      if (iVar7 == 0) break;
    }
  }
  uVar2 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    uVar2 = local_78;
  }
  if (uVar2 == 0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,pbVar19,pbVar20,*param_6);
    *param_6 = *param_6 + ((long)pbVar20 - (long)pbVar19);
  }
  else {
    if ((pbVar19 != pbVar20) && (pbVar12 = pbVar20 + -1, pbVar21 = pbVar19, pbVar19 < pbVar12)) {
      do {
        pbVar16 = pbVar21 + 1;
        bVar3 = *pbVar21;
        *pbVar21 = *pbVar12;
        pbVar13 = pbVar12 + -1;
        *pbVar12 = bVar3;
        pbVar12 = pbVar13;
        pbVar21 = pbVar16;
      } while (pbVar16 < pbVar13);
    }
    wVar6 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if (pbVar19 < pbVar20) {
      uVar18 = 0;
      uVar17 = 0;
      pbVar21 = pbVar19;
      do {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        uVar15 = (uint)*(byte *)((long)pvVar1 + (ulong)uVar18);
        if ((uVar15 != 0) && (uVar17 == uVar15)) {
          pwVar11 = *param_6;
          uVar17 = 0;
          *param_6 = pwVar11 + 1;
          *pwVar11 = wVar6;
          uVar2 = (ulong)(local_80[0] >> 1);
          if ((local_80[0] & 1) != 0) {
            uVar2 = local_78;
          }
          if ((ulong)uVar18 < uVar2 - 1) {
            uVar18 = uVar18 + 1;
          }
        }
        wVar8 = (**(code **)(*plVar9 + 0x58))(plVar9,*pbVar21);
        pwVar14 = *param_6;
        pbVar21 = pbVar21 + 1;
        uVar17 = uVar17 + 1;
        pwVar11 = pwVar14 + 1;
        *param_6 = pwVar11;
        *pwVar14 = wVar8;
      } while (pbVar21 < pbVar20);
    }
    else {
      pwVar11 = *param_6;
    }
    if ((param_4 + ((long)pbVar19 - (long)param_1) != pwVar11) &&
       (param_4 + ((long)pbVar19 - (long)param_1) < pwVar11 + -1)) {
      pwVar14 = param_4 + (long)(pbVar19 + (1 - (long)param_1));
      pwVar11 = pwVar11 + -1;
      do {
        wVar6 = pwVar14[-1];
        pwVar14[-1] = *pwVar11;
        *pwVar11 = wVar6;
        bVar5 = pwVar14 < pwVar11 + -1;
        pwVar14 = pwVar14 + 1;
        pwVar11 = pwVar11 + -1;
      } while (bVar5);
    }
  }
  do {
    if (param_3 <= pbVar20) {
LAB_01805990:
      (**(code **)(*plVar9 + 0x60))(plVar9,pbVar20,param_3);
      pwVar11 = *param_6;
      *param_6 = pwVar11 + ((long)param_3 - (long)pbVar20);
      pwVar11 = pwVar11 + ((long)param_3 - (long)pbVar20);
      if (param_2 != param_3) {
        pwVar11 = param_4 + ((long)param_2 - (long)param_1);
      }
      *param_5 = pwVar11;
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*pbVar20 == 0x2e) {
      wVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
      pwVar11 = *param_6;
      pbVar20 = pbVar20 + 1;
      *param_6 = pwVar11 + 1;
      *pwVar11 = wVar6;
      goto LAB_01805990;
    }
    wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9);
    pwVar11 = *param_6;
    pbVar20 = pbVar20 + 1;
    *param_6 = pwVar11 + 1;
    *pwVar11 = wVar6;
  } while( true );
}



/* std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&,
   wchar_t*&, std::__ndk1::locale const&) */

void std::__ndk1::__num_put<wchar_t>::__widen_and_group_int
               (char *param_1,char *param_2,char *param_3,wchar_t *param_4,wchar_t **param_5,
               wchar_t **param_6,locale *param_7)

{
  void *pvVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  long *plVar8;
  long *plVar9;
  wchar_t *pwVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar8 = (long *)locale::use_facet(param_7,(id *)&ctype<wchar_t>::id);
  plVar9 = (long *)locale::use_facet(param_7,(id *)&numpunct<wchar_t>::id);
  (**(code **)(*plVar9 + 0x28))(local_80);
  uVar2 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    uVar2 = local_78;
  }
  if (uVar2 == 0) {
    (**(code **)(*plVar8 + 0x60))(plVar8,param_1,param_3,param_4);
    *param_6 = param_4 + ((long)param_3 - (long)param_1);
  }
  else {
    *param_6 = param_4;
    if ((*param_1 == '-') || (pcVar17 = param_1, *param_1 == '+')) {
      wVar6 = (**(code **)(*plVar8 + 0x58))(plVar8);
      pwVar10 = *param_6;
      pcVar17 = param_1 + 1;
      *param_6 = pwVar10 + 1;
      *pwVar10 = wVar6;
    }
    if (((1 < (long)param_3 - (long)pcVar17) && (*pcVar17 == '0')) &&
       ((byte)(pcVar17[1] | 0x20U) == 0x78)) {
      wVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,0x30);
      pwVar10 = *param_6;
      *param_6 = pwVar10 + 1;
      *pwVar10 = wVar6;
      wVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,pcVar17[1]);
      pwVar10 = *param_6;
      pcVar17 = pcVar17 + 2;
      *param_6 = pwVar10 + 1;
      *pwVar10 = wVar6;
    }
    if ((pcVar17 != param_3) && (pcVar11 = param_3 + -1, pcVar19 = pcVar17, pcVar17 < pcVar11)) {
      do {
        pcVar14 = pcVar19 + 1;
        cVar3 = *pcVar19;
        *pcVar19 = *pcVar11;
        pcVar12 = pcVar11 + -1;
        *pcVar11 = cVar3;
        pcVar11 = pcVar12;
        pcVar19 = pcVar14;
      } while (pcVar14 < pcVar12);
    }
    wVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
    if (pcVar17 < param_3) {
      uVar16 = 0;
      uVar18 = 0;
      pcVar19 = pcVar17;
      do {
        pvVar1 = (void *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          pvVar1 = local_70;
        }
        uVar13 = (uint)*(byte *)((long)pvVar1 + (ulong)uVar16);
        if ((uVar13 != 0) && (uVar18 == uVar13)) {
          pwVar10 = *param_6;
          uVar18 = 0;
          *param_6 = pwVar10 + 1;
          *pwVar10 = wVar6;
          uVar2 = (ulong)(local_80[0] >> 1);
          if ((local_80[0] & 1) != 0) {
            uVar2 = local_78;
          }
          if ((ulong)uVar16 < uVar2 - 1) {
            uVar16 = uVar16 + 1;
          }
        }
        wVar7 = (**(code **)(*plVar8 + 0x58))(plVar8,*pcVar19);
        pwVar15 = *param_6;
        pcVar19 = pcVar19 + 1;
        uVar18 = uVar18 + 1;
        pwVar10 = pwVar15 + 1;
        *param_6 = pwVar10;
        *pwVar15 = wVar7;
      } while (pcVar19 < param_3);
    }
    else {
      pwVar10 = *param_6;
    }
    if ((param_4 + ((long)pcVar17 - (long)param_1) != pwVar10) &&
       (param_4 + ((long)pcVar17 - (long)param_1) < pwVar10 + -1)) {
      pwVar15 = param_4 + (long)(pcVar17 + (1 - (long)param_1));
      pwVar10 = pwVar10 + -1;
      do {
        wVar6 = pwVar15[-1];
        pwVar15[-1] = *pwVar10;
        *pwVar10 = wVar6;
        bVar5 = pwVar15 < pwVar10 + -1;
        pwVar15 = pwVar15 + 1;
        pwVar10 = pwVar10 + -1;
      } while (bVar5);
    }
  }
  pwVar10 = *param_6;
  if (param_2 != param_3) {
    pwVar10 = param_4 + ((long)param_2 - (long)param_1);
  }
  *param_5 = pwVar10;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


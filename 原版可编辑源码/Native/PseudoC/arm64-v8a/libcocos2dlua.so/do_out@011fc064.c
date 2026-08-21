
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_out(mbstate_t&, wchar_t const*, wchar_t
   const*, wchar_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_out
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,wchar_t *param_2,
          wchar_t *param_3,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar_t __wc;
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  __locale_t p_Var4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  mbstate_t local_78;
  char local_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pwVar8 = param_2;
  if (param_2 == param_3) {
    *param_7 = param_5;
    *param_4 = param_2;
  }
  else {
    do {
      pwVar9 = pwVar8;
      if (*pwVar8 == L'\0') break;
      pwVar8 = pwVar8 + 1;
      pwVar9 = param_3;
    } while (param_3 != pwVar8);
    *param_7 = param_5;
    *param_4 = param_2;
    if ((param_5 != param_6) && (param_2 != param_3)) {
      do {
        local_78 = *param_1;
        p_Var4 = uselocale(*(__locale_t *)(this + 0x10));
        sVar5 = wcsnrtombs(param_5,param_4,(long)pwVar9 - (long)param_2 >> 2,
                           (long)param_6 - (long)param_5,param_1);
        if (p_Var4 != (__locale_t)0x0) {
          uselocale(p_Var4);
        }
        if (sVar5 == 0) {
LAB_011fc2bc:
          uVar3 = 1;
          goto LAB_011fc288;
        }
        if (sVar5 == 0xffffffffffffffff) {
          *param_7 = param_5;
          if (param_2 != *param_4) goto LAB_011fc2ec;
          goto LAB_011fc340;
        }
        param_5 = *param_7 + sVar5;
        *param_7 = param_5;
        if (param_5 == param_6) {
          param_2 = *param_4;
          break;
        }
        if (pwVar9 == param_3) {
          param_2 = *param_4;
          pwVar9 = param_3;
        }
        else {
          p_Var4 = uselocale(*(__locale_t *)(this + 0x10));
          sVar5 = wcrtomb(local_6c,L'\0',param_1);
          if (p_Var4 != (__locale_t)0x0) {
            uselocale(p_Var4);
          }
          if (sVar5 == 0xffffffffffffffff) {
            uVar3 = 2;
            goto LAB_011fc288;
          }
          pcVar6 = *param_7;
          if ((ulong)((long)param_6 - (long)pcVar6) < sVar5) goto LAB_011fc2bc;
          if (sVar5 != 0) {
            *param_7 = pcVar6 + 1;
            *pcVar6 = local_6c[0];
            pcVar6 = (char *)((ulong)local_6c | 1);
            while (sVar5 = sVar5 - 1, sVar5 != 0) {
              pcVar7 = *param_7;
              cVar1 = *pcVar6;
              *param_7 = pcVar7 + 1;
              *pcVar7 = cVar1;
              pcVar6 = pcVar6 + 1;
            }
          }
          param_2 = *param_4 + 1;
          *param_4 = param_2;
          for (pwVar8 = param_2;
              (pwVar9 = param_3, pwVar8 != param_3 && (pwVar9 = pwVar8, *pwVar8 != L'\0'));
              pwVar8 = pwVar8 + 1) {
          }
          param_5 = *param_7;
        }
        if ((param_5 == param_6) || (param_2 == param_3)) break;
      } while( true );
    }
  }
  uVar3 = param_2 != param_3;
  goto LAB_011fc288;
  while( true ) {
    param_2 = param_2 + 1;
    param_5 = *param_7 + sVar5;
    *param_7 = param_5;
    if (param_2 == *param_4) break;
LAB_011fc2ec:
    __wc = *param_2;
    p_Var4 = uselocale(*(__locale_t *)(this + 0x10));
    sVar5 = wcrtomb(param_5,__wc,&local_78);
    if (p_Var4 != (__locale_t)0x0) {
      uselocale(p_Var4);
    }
    if (sVar5 == 0xffffffffffffffff) break;
  }
LAB_011fc340:
  *param_4 = param_2;
  uVar3 = 2;
LAB_011fc288:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


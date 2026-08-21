
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_in
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  wchar_t *__pwc;
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  __locale_t p_Var5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  mbstate_t local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar7 = param_2;
  pcVar2 = param_2;
  if (param_2 == param_3) {
    *param_7 = param_5;
    *param_4 = param_2;
  }
  else {
    do {
      pcVar8 = pcVar7;
      if (*pcVar7 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar8 = param_3;
    } while (param_3 != pcVar7);
    *param_7 = param_5;
    *param_4 = param_2;
    if ((param_5 != param_6) && (param_2 != param_3)) {
      while( true ) {
        local_70 = *param_1;
        p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
        sVar6 = mbsnrtowcs(param_5,param_4,(long)pcVar8 - (long)param_2,
                           (long)param_6 - (long)param_5 >> 2,param_1);
        if (p_Var5 != (__locale_t)0x0) {
          uselocale(p_Var5);
        }
        if (sVar6 == 0xffffffffffffffff) {
          *param_7 = param_5;
          if (param_2 == *param_4) goto LAB_011fc668;
          goto LAB_011fc5f4;
        }
        __pwc = *param_7 + sVar6;
        *param_7 = __pwc;
        if (__pwc == param_6) break;
        param_2 = *param_4;
        bVar4 = pcVar8 != param_3;
        pcVar8 = param_3;
        if (bVar4) {
          p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
          sVar6 = mbrtowc(__pwc,param_2,1,param_1);
          if (p_Var5 != (__locale_t)0x0) {
            uselocale(p_Var5);
          }
          if (sVar6 != 0) {
            uVar3 = 2;
            goto LAB_011fc574;
          }
          *param_7 = *param_7 + 1;
          param_2 = *param_4 + 1;
          *param_4 = param_2;
          pcVar7 = param_2;
          pcVar2 = param_3;
          if (param_2 == param_3) goto LAB_011fc570;
          do {
            pcVar8 = pcVar7;
            if (*pcVar7 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar8 = param_3;
          } while (param_3 != pcVar7);
        }
        param_5 = *param_7;
        pcVar2 = param_2;
        if ((param_5 == param_6) || (param_2 == param_3)) goto LAB_011fc570;
      }
      pcVar2 = *param_4;
    }
  }
  goto LAB_011fc570;
LAB_011fc5f4:
  do {
    p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
    sVar6 = mbrtowc(param_5,param_2,(long)pcVar8 - (long)param_2,&local_70);
    if (p_Var5 != (__locale_t)0x0) {
      uselocale(p_Var5);
    }
    if (sVar6 == 0) {
      sVar6 = 1;
    }
    else {
      if (sVar6 == 0xfffffffffffffffe) {
        *param_4 = param_2;
        uVar3 = 1;
        goto LAB_011fc574;
      }
      if (sVar6 == 0xffffffffffffffff) {
        *param_4 = param_2;
        uVar3 = 2;
        goto LAB_011fc574;
      }
    }
    param_2 = param_2 + sVar6;
    param_5 = *param_7 + 1;
    *param_7 = param_5;
  } while (param_2 != *param_4);
LAB_011fc668:
  *param_4 = param_2;
  pcVar2 = param_2;
LAB_011fc570:
  uVar3 = pcVar2 != param_3;
LAB_011fc574:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&)
   const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_unshift
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  char cVar1;
  long lVar2;
  __locale_t __dataset;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_4 = param_2;
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  sVar3 = wcrtomb(local_4c,L'\0',param_1);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (sVar3 + 1 < 2) {
    uVar4 = 2;
  }
  else {
    pcVar5 = *param_4;
    if ((ulong)((long)param_3 - (long)pcVar5) < sVar3 - 1) {
      uVar4 = 1;
    }
    else {
      if (sVar3 != 1) {
        *param_4 = pcVar5 + 1;
        *pcVar5 = local_4c[0];
        if (sVar3 != 2) {
          lVar6 = 2 - sVar3;
          pcVar5 = (char *)((ulong)local_4c | 1);
          do {
            pcVar7 = *param_4;
            cVar1 = *pcVar5;
            lVar6 = lVar6 + 1;
            *param_4 = pcVar7 + 1;
            *pcVar7 = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (lVar6 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


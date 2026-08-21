
/* std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&) */

void __thiscall
std::__ndk1::__num_get<wchar_t>::__stage2_int_prep
          (__num_get<wchar_t> *this,ios_base *param_1,wchar_t *param_2,wchar_t *param_3)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  __shared_count *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  plVar3 = (long *)locale::use_facet((locale *)&local_40,(id *)&ctype<wchar_t>::id);
  (**(code **)(*plVar3 + 0x60))(plVar3,&__num_get_base::__src,&DAT_01a64a58,param_1);
  plVar3 = (long *)locale::use_facet((locale *)&local_40,(id *)&numpunct<wchar_t>::id);
  wVar2 = (**(code **)(*plVar3 + 0x20))();
  *param_2 = wVar2;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  __shared_count::__release_shared(local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


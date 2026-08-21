
/* std::__ndk1::__num_get<wchar_t>::__stage2_float_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&,
   wchar_t&) */

void __thiscall
std::__ndk1::__num_get<wchar_t>::__stage2_float_prep
          (__num_get<wchar_t> *this,ios_base *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  __shared_count *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  plVar3 = (long *)locale::use_facet((locale *)&local_50,(id *)&ctype<wchar_t>::id);
  (**(code **)(*plVar3 + 0x60))(plVar3,&__num_get_base::__src,&DAT_01a64a5e,param_1);
  plVar3 = (long *)locale::use_facet((locale *)&local_50,(id *)&numpunct<wchar_t>::id);
  wVar2 = (**(code **)(*plVar3 + 0x18))();
  *param_2 = wVar2;
  wVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
  *param_3 = wVar2;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  __shared_count::__release_shared(local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


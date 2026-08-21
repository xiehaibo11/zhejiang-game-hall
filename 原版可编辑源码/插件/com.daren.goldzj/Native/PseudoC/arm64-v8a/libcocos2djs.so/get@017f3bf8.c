
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)&ctype<wchar_t>::id);
  wVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,10);
  locale::~locale(alStack_50);
  get(this,param_1,param_2,wVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


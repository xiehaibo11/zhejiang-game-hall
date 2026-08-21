
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  locale alStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_40,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_40,(id *)&ctype<wchar_t>::id);
  wVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,10);
  locale::~locale(alStack_40);
  get(this,param_1,wVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


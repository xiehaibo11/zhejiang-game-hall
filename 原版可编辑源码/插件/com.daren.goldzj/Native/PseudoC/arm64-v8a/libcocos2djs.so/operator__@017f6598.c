
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulong param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  plVar6 = (long *)(*(long *)this + -0x18);
  local_68 = this;
  if (*(int *)(this + *plVar6 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar6 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar6 + 0x88));
      plVar6 = (long *)(*(long *)this + -0x18);
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *plVar6 + 0x30));
    plVar6 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar3 = *(int *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar3 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
      plVar4 = (long *)locale::use_facet(alStack_60,(id *)&ctype<wchar_t>::id);
      iVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar3;
    }
    lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,uVar7,pbVar1,iVar3,param_1);
    if (lVar5 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


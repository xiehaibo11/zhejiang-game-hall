
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
    plVar5 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)&ctype<wchar_t>::id);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011dac54("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


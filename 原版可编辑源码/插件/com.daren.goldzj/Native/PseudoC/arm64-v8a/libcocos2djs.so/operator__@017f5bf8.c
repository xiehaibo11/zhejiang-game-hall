
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(short) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,short param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  plVar8 = (long *)(*(long *)this + -0x18);
  local_68 = this;
  if (*(int *)(this + *plVar8 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar8 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + *plVar8 + 0x88));
      plVar8 = (long *)(*(long *)this + -0x18);
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *plVar8 + 8);
    locale::locale(alStack_60,(locale *)(this + *plVar8 + 0x30));
    plVar8 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar5 = *(int *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar5 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)&ctype<wchar_t>::id);
      iVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar5;
    }
    uVar2 = (ulong)(ushort)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
    lVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar9,pbVar1,iVar5,uVar2);
    if (lVar7 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(bool)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,bool param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
    plVar4 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
    lVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_011dac54("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,uint param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  local_68 = this;
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    local_70[0] = (sentry)0x1;
    ios_base::getloc();
    plVar5 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar2 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar2 == -1) {
      ios_base::getloc();
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      locale::~locale(alStack_60);
      iVar2 = (int)cVar4;
      *(int *)(pbVar1 + 0x90) = iVar2;
    }
    lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar8,pbVar1,iVar2,param_1);
    if (lVar7 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


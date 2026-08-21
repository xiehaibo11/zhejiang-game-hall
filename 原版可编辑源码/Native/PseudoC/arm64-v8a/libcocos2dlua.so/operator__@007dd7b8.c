
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(int)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar9 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar9 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar9 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar9 + -0x18) + 0x88));
      lVar9 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *(long *)(lVar9 + -0x18) + 8);
    ios_base::getloc();
    plVar7 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar10 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      ios_base::getloc();
      plVar8 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
      cVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
      locale::~locale(alStack_60);
      iVar4 = (int)cVar6;
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
    uVar2 = (ulong)(uint)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
    lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar10,pbVar1,iVar4,uVar2);
    if (lVar9 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


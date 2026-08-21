
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(bool)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,bool param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  locale alStack_48 [8];
  
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    ios_base::getloc();
    plVar4 = (long *)locale::use_facet(alStack_48,
                                       (id *)&num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    locale::~locale(alStack_48);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar2 = *(uint *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar2 == 0xffffffff) {
      ios_base::getloc();
      plVar5 = (long *)locale::use_facet(alStack_48,(id *)&ctype<char>::id);
      uVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_48);
      uVar2 = uVar2 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar2;
    }
    lVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar8,pbVar1,uVar2,param_1);
    if (lVar6 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  lVar6 = *(long *)(*(long *)this + -0x18);
  if ((((*(long *)(this + lVar6 + 0x28) != 0) && (*(int *)(this + lVar6 + 0x20) == 0)) &&
      (((byte)this[lVar6 + 9] >> 5 & 1) != 0)) &&
     ((uVar7 = uncaught_exception(), (uVar7 & 1) == 0 &&
      (iVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x30))(),
      iVar3 == -1)))) {
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
  }
  return this;
}


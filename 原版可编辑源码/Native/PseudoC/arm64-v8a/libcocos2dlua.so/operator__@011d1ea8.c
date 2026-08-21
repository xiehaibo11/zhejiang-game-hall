
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(int&)
    */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,int *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_00f96078;
  ios_base::getloc();
  plVar2 = (long *)locale::use_facet(alStack_50,
                                     (id *)&num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                            ::id);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x80000000) {
    iVar3 = -0x80000000;
LAB_00f96048:
    uStack_3c = uStack_3c | 4;
    *param_1 = iVar3;
  }
  else {
    if (0x7fffffff < lStack_48) {
      iVar3 = 0x7fffffff;
      goto LAB_00f96048;
    }
    *param_1 = (int)lStack_48;
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                  uStack_3c);
LAB_00f96078:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(short&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,short *param_1)

{
  long lVar1;
  long *plVar2;
  short sVar3;
  locale alStack_58 [8];
  long lStack_50;
  uint uStack_44;
  sentry asStack_40 [8];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_017efe70;
  uStack_44 = 0;
  locale::locale(alStack_58,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar2 = (long *)locale::use_facet(alStack_58,
                                     (id *)&num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                            ::id);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_44,&lStack_50);
  locale::~locale(alStack_58);
  if (lStack_50 < -0x8000) {
    sVar3 = -0x8000;
LAB_017efe40:
    uStack_44 = uStack_44 | 4;
    *param_1 = sVar3;
  }
  else {
    if (0x7fff < lStack_50) {
      sVar3 = 0x7fff;
      goto LAB_017efe40;
    }
    *param_1 = (short)lStack_50;
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                  uStack_44);
LAB_017efe70:
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


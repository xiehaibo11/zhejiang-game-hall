
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(int&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_011d4d2c;
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,
                                     (id *)&num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                            ::id);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x80000000) {
    iVar5 = -0x80000000;
LAB_011d4ce4:
    uStack_3c = uStack_3c | 4;
    *param_1 = iVar5;
  }
  else {
    if (0x7fffffff < lStack_48) {
      iVar5 = 0x7fffffff;
      goto LAB_011d4ce4;
    }
    *param_1 = (int)lStack_48;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011dac54("ios_base::clear");
  }
LAB_011d4d2c:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


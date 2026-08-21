
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulong *param_1)

{
  long lVar1;
  long *plVar2;
  locale alStack_50 [12];
  uint uStack_44;
  sentry asStack_40 [8];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    uStack_44 = 0;
    locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar2 = (long *)locale::use_facet(alStack_50,
                                       (id *)&num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                              ::id);
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_44,param_1);
    locale::~locale(alStack_50);
    ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                    *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) |
                    uStack_44);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


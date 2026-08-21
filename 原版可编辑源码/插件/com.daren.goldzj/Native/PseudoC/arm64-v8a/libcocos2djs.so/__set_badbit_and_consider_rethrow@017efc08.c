
/* std::__ndk1::ios_base::__set_badbit_and_consider_rethrow() */

ios_base * __thiscall std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(ios_base *this)

{
  long lVar1;
  basic_istream *pbVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  locale alStack_60 [12];
  uint uStack_54;
  sentry asStack_50 [8];
  long lStack_48;
  
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  if (((byte)this[0x24] & 1) == 0) {
    return this;
  }
  auVar4 = __cxa_rethrow();
  pbVar2 = auVar4._0_8_;
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry(asStack_50,pbVar2,false);
  if (asStack_50[0] != (sentry)0x0) {
    uStack_54 = 0;
    locale::locale(alStack_60,(locale *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_60,
                                       (id *)&num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined8 *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18) + 0x28),0,
               pbVar2 + *(long *)(*(long *)pbVar2 + -0x18),&uStack_54,auVar4._8_8_);
    locale::~locale(alStack_60);
    clear((ios_base *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18)),
          *(uint *)((ios_base *)(pbVar2 + *(long *)(*(long *)pbVar2 + -0x18)) + 0x20) | uStack_54);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return (ios_base *)pbVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


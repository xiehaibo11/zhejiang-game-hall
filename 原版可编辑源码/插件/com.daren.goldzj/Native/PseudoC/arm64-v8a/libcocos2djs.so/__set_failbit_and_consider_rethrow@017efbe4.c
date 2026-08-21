
/* std::__ndk1::ios_base::__set_failbit_and_consider_rethrow() */

ios_base * __thiscall std::__ndk1::ios_base::__set_failbit_and_consider_rethrow(ios_base *this)

{
  long lVar1;
  ios_base *piVar2;
  basic_istream *pbVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  locale alStack_70 [12];
  uint uStack_64;
  sentry asStack_60 [8];
  long lStack_58;
  
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
  if (((byte)this[0x24] >> 2 & 1) == 0) {
    return this;
  }
  piVar2 = (ios_base *)__cxa_rethrow();
  *(uint *)(piVar2 + 0x20) = *(uint *)(piVar2 + 0x20) | 1;
  if (((byte)piVar2[0x24] & 1) == 0) {
    return piVar2;
  }
  auVar5 = __cxa_rethrow();
  pbVar3 = auVar5._0_8_;
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry(asStack_60,pbVar3,false);
  if (asStack_60[0] != (sentry)0x0) {
    uStack_64 = 0;
    locale::locale(alStack_70,(locale *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 0x30));
    plVar4 = (long *)locale::use_facet(alStack_70,
                                       (id *)&num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                              ::id);
    (**(code **)(*plVar4 + 0x18))
              (plVar4,*(undefined8 *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18) + 0x28),0,
               pbVar3 + *(long *)(*(long *)pbVar3 + -0x18),&uStack_64,auVar5._8_8_);
    locale::~locale(alStack_70);
    clear((ios_base *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18)),
          *(uint *)((ios_base *)(pbVar3 + *(long *)(*(long *)pbVar3 + -0x18)) + 0x20) | uStack_64);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return (ios_base *)pbVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


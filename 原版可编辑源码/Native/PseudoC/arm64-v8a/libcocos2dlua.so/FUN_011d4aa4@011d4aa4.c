
basic_istream * FUN_011d4aa4(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
    plVar3 = (long *)std::__ndk1::locale::use_facet
                               (alStack_48,
                                (id *)&std::__ndk1::
                                       num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                       ::id);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


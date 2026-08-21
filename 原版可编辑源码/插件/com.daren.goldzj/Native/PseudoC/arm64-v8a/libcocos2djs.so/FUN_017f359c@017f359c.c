
basic_istream * FUN_017f359c(basic_istream *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  locale alStack_50 [12];
  uint local_44;
  sentry local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    local_44 = 0;
    std::__ndk1::locale::locale
              (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
    plVar2 = (long *)std::__ndk1::locale::use_facet
                               (alStack_50,
                                (id *)&std::__ndk1::
                                       num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                       ::id);
    (**(code **)(*plVar2 + 0x50))
              (plVar2,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_44,param_2);
    std::__ndk1::locale::~locale(alStack_50);
    std::__ndk1::ios_base::clear
              ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
               *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
               local_44);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


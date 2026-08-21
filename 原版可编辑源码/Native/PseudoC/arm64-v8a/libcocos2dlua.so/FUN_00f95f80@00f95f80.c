
basic_istream * FUN_00f95f80(basic_istream *param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_00f96078;
  std::__ndk1::ios_base::getloc();
  plVar2 = (long *)std::__ndk1::locale::use_facet
                             (alStack_50,
                              (id *)&std::__ndk1::
                                     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                     ::id);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x80000000) {
    uVar3 = 0x80000000;
LAB_00f96048:
    local_3c = local_3c | 4;
    *param_2 = uVar3;
  }
  else {
    if (0x7fffffff < local_48) {
      uVar3 = 0x7fffffff;
      goto LAB_00f96048;
    }
    *param_2 = (int)local_48;
  }
  std::__ndk1::ios_base::clear
            ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
             *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
             local_3c);
LAB_00f96078:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


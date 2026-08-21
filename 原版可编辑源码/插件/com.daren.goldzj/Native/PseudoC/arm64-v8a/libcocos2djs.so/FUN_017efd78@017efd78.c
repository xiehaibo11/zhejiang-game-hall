
basic_istream * FUN_017efd78(basic_istream *param_1,undefined2 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined2 uVar3;
  locale alStack_58 [8];
  long local_50;
  uint local_44;
  sentry local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_017efe70;
  local_44 = 0;
  std::__ndk1::locale::locale
            (alStack_58,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
  plVar2 = (long *)std::__ndk1::locale::use_facet
                             (alStack_58,
                              (id *)&std::__ndk1::
                                     num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                     ::id);
  (**(code **)(*plVar2 + 0x20))
            (plVar2,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_44,&local_50);
  std::__ndk1::locale::~locale(alStack_58);
  if (local_50 < -0x8000) {
    uVar3 = 0x8000;
LAB_017efe40:
    local_44 = local_44 | 4;
    *param_2 = uVar3;
  }
  else {
    if (0x7fff < local_50) {
      uVar3 = 0x7fff;
      goto LAB_017efe40;
    }
    *param_2 = (short)local_50;
  }
  std::__ndk1::ios_base::clear
            ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
             *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
             local_44);
LAB_017efe70:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



basic_istream * FUN_011d4c18(basic_istream *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_011d4d2c;
  std::__ndk1::locale::locale
            (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
  plVar3 = (long *)std::__ndk1::locale::use_facet
                             (alStack_50,
                              (id *)&std::__ndk1::
                                     num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                     ::id);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x80000000) {
    uVar5 = 0x80000000;
LAB_011d4ce4:
    local_3c = local_3c | 4;
    *param_2 = uVar5;
  }
  else {
    if (0x7fffffff < local_48) {
      uVar5 = 0x7fffffff;
      goto LAB_011d4ce4;
    }
    *param_2 = (int)local_48;
  }
  lVar4 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
          (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
  *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_011dac54("ios_base::clear");
  }
LAB_011d4d2c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


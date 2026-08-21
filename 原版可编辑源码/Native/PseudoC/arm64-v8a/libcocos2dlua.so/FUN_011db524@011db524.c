
void FUN_011db524(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR__basic_streambuf_0172dc68;
  std::__ndk1::locale::locale((locale *)(param_1 + 1));
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__basic_streambuf_0172e308;
  param_1[8] = param_2;
  std::__ndk1::locale::locale(alStack_50,(locale *)(param_1 + 1));
  plVar3 = (long *)std::__ndk1::locale::use_facet
                             (alStack_50,(id *)&std::__ndk1::codecvt<wchar_t,char,mbstate_t>::id);
  std::__ndk1::locale::~locale(alStack_50);
  param_1[9] = plVar3;
  param_1[10] = param_3;
  bVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
  *(byte *)(param_1 + 0xb) = bVar2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FUN_017f935c(long *param_1,locale *param_2)

{
  byte bVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (long *)std::__ndk1::locale::use_facet
                             (param_2,(id *)&std::__ndk1::codecvt<char,char,mbstate_t>::id);
  param_1[9] = (long)plVar2;
  bVar1 = (**(code **)(*plVar2 + 0x38))();
  *(byte *)(param_1 + 0xb) = bVar1 & 1;
  return;
}


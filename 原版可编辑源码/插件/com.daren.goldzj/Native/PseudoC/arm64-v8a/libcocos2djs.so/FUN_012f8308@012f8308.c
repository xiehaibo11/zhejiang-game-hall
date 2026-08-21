
void FUN_012f8308(long *param_1,basic_ostream *param_2,undefined4 param_3)

{
  size_t sVar1;
  char *__s;
  
  __s = (char *)param_1[1];
  sVar1 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,__s,sVar1);
                    /* WARNING: Could not recover jumptable at 0x012f8360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  return;
}


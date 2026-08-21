
/* FileImplement::openFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char const*) */

FILE * __thiscall FileImplement::openFile(FileImplement *this,basic_string *param_1,char *param_2)

{
  char *__filename;
  long lVar1;
  long *plVar2;
  FILE *pFVar3;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x118))(local_50,plVar2,param_1);
  __filename = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    __filename = local_40;
  }
  pFVar3 = fopen(__filename,param_2);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pFVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


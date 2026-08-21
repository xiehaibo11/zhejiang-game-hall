
/* cocos2d::FileUtils::writeDataToFile(cocos2d::Data const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall
cocos2d::FileUtils::writeDataToFile(FileUtils *this,Data *param_1,basic_string *param_2)

{
  char *__filename;
  long lVar1;
  long *plVar2;
  FILE *__s;
  size_t __size;
  void *__ptr;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)getInstance();
  (**(code **)(*plVar2 + 0xe8))(local_50,plVar2,param_2);
  __filename = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    __filename = local_40;
  }
  __s = fopen(__filename,"wb");
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (__s != (FILE *)0x0) {
    __size = Data::getSize(param_1);
    __ptr = (void *)Data::getBytes(param_1);
    fwrite(__ptr,__size,1,__s);
    fclose(__s);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __s != (FILE *)0x0;
}


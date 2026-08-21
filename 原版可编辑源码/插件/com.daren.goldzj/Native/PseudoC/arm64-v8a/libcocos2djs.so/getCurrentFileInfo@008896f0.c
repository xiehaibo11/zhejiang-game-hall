
/* cocos2d::ZipFile::getCurrentFileInfo(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, cocos2d::unz_file_info_s*) */

int __thiscall
cocos2d::ZipFile::getCurrentFileInfo(ZipFile *this,basic_string *param_1,unz_file_info_s *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  char acStack_105c [4108];
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock((mutex *)(this + 0x10));
  iVar4 = unzGetCurrentFileInfo
                    ((void *)**(undefined8 **)(this + 8),param_2,acStack_105c,0x1001,(void *)0x0,0,
                     (char *)0x0,0);
  if (iVar4 == 0) {
    sVar5 = strlen(acStack_105c);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1
           ,acStack_105c,sVar5);
  }
  else if (param_1 != (basic_string *)&DAT_01d36ce8) {
    uVar1 = DAT_01d36cf0;
    pcVar3 = DAT_01d36cf8;
    if (((byte)DAT_01d36ce8 & 1) == 0) {
      uVar1 = (ulong)((byte)DAT_01d36ce8 >> 1);
      pcVar3 = (char *)((long)&DAT_01d36ce8 + 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1
           ,pcVar3,uVar1);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


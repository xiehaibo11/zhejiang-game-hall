
/* cocos2d::ZipFile::getCurrentFileInfo(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, cocos2d::unz_file_info_s*) */

int __thiscall
cocos2d::ZipFile::getCurrentFileInfo(ZipFile *this,basic_string *param_1,unz_file_info_s *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char acStack_103c [4100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = unzGetCurrentFileInfo
                    ((void *)**(undefined8 **)(this + 8),param_2,acStack_103c,0x1001,(void *)0x0,0,
                     (char *)0x0,0);
  if (iVar2 == 0) {
    sVar3 = strlen(acStack_103c);
    pcVar4 = acStack_103c;
  }
  else {
    if (param_1 == (basic_string *)&DAT_01790e60) goto LAB_00fc1fd8;
    pcVar4 = DAT_01790e70;
    sVar3 = DAT_01790e68;
    if ((DAT_01790e60 & 1) == 0) {
      pcVar4 = &DAT_01790e61;
      sVar3 = (ulong)(DAT_01790e60 >> 1);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1,
         pcVar4,sVar3);
LAB_00fc1fd8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


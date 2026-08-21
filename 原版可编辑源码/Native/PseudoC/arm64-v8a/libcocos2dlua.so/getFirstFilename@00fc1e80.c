
/* cocos2d::ZipFile::getFirstFilename() */

void cocos2d::ZipFile::getFirstFilename(void)

{
  long lVar1;
  int iVar2;
  ZipFile *in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  unz_file_info_s auStack_d8 [136];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = unzGoToFirstFile((void *)**(undefined8 **)(in_x0 + 8));
  if (iVar2 == 0) {
    uStack_48 = 0;
    local_40 = 0;
    local_50 = 0;
    getCurrentFileInfo(in_x0,(basic_string *)&local_50,auStack_d8);
    *(undefined8 *)(in_x8 + 0x10) = local_40;
    *(undefined8 *)(in_x8 + 8) = uStack_48;
    *(undefined8 *)in_x8 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)&DAT_01790e60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


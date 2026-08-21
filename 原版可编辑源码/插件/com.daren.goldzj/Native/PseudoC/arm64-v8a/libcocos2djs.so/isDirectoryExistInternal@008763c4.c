
/* cocos2d::FileUtils::isDirectoryExistInternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall cocos2d::FileUtils::isDirectoryExistInternal(FileUtils *this,basic_string *param_1)

{
  long lVar1;
  int iVar2;
  basic_string *__file;
  uint local_98;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __file = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __file = param_1 + 1;
  }
  iVar2 = stat((char *)__file,(stat *)&stack0xffffffffffffff58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0 && (local_98 & 0xf000) == 0x4000);
}


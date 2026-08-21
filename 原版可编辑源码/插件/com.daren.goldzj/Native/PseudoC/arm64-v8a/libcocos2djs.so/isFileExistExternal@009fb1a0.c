
/* universe::FileSystemAndroid::isFileExistExternal(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
universe::FileSystemAndroid::isFileExistExternal(FileSystemAndroid *this,basic_string *param_1)

{
  ulong uVar1;
  char *__filename;
  long lVar2;
  FILE *__stream;
  undefined8 uVar3;
  byte local_40 [16];
  char *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009fb1c8 to 00afb1d3 has its CatchHandler @ 009fb26c */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
                    /* try { // try from 009fb1d4 to 00afb2db has its CatchHandler @ 009fb050 */
    CustomFileManager::getAbsolutePath((basic_string *)this);
    __filename = (char *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      __filename = local_30;
    }
    __stream = fopen(__filename,"r");
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
      uVar3 = 1;
      goto LAB_009fb22c;
    }
  }
  uVar3 = 0;
LAB_009fb22c:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


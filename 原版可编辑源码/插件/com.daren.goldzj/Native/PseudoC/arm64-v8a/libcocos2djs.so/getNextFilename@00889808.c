
/* cocos2d::ZipFile::getNextFilename() */

void cocos2d::ZipFile::getNextFilename(void)

{
  mutex *this;
  long lVar1;
  byte bVar2;
  ulong __n;
  void *__src;
  int iVar3;
  ZipFile *in_x0;
  ulong *in_x8;
  void *__dest;
  ulong uVar4;
  unz_file_info_s auStack_e8 [136];
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (mutex *)(in_x0 + 0x10);
  std::__ndk1::mutex::lock(this);
  iVar3 = unzGoToNextFile((void *)**(undefined8 **)(in_x0 + 8));
  bVar2 = (byte)DAT_01d36ce8;
  if (iVar3 == 0) {
    std::__ndk1::mutex::unlock(this);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    getCurrentFileInfo(in_x0,(basic_string *)&local_60,auStack_e8);
    in_x8[2] = local_50;
    in_x8[1] = uStack_58;
    *in_x8 = local_60;
    goto LAB_00889920;
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __src = DAT_01d36cf8;
  __n = DAT_01d36cf0;
  if ((bVar2 & 1) == 0) {
    uVar4 = CONCAT71(DAT_01d36ce8._1_7_,(byte)DAT_01d36ce8);
    in_x8[2] = (ulong)DAT_01d36cf8;
    in_x8[1] = __n;
    *in_x8 = uVar4;
  }
  else {
    if (0xffffffffffffffef < DAT_01d36cf0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (DAT_01d36cf0 < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)DAT_01d36cf0 << 1);
      if (__n != 0) goto LAB_00889904;
    }
    else {
      uVar4 = DAT_01d36cf0 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      in_x8[1] = __n;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar4 | 1;
LAB_00889904:
      memcpy(__dest,__src,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  std::__ndk1::mutex::unlock(this);
LAB_00889920:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


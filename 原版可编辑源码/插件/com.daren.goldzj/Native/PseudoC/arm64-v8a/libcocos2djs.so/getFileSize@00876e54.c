
/* cocos2d::FileUtils::getFileSize(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

__off_t __thiscall cocos2d::FileUtils::getFileSize(FileUtils *this,basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  void *__src;
  char *pcVar6;
  ulong uVar7;
  stat local_f0;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_f0.__unused[2] = 0;
  local_60 = (char *)0x0;
  local_f0.__unused[1] = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_60 = *(char **)(param_1 + 0x10);
    local_f0.__unused[2] = *(long *)(param_1 + 8);
    local_f0.__unused[1] = *(long *)param_1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar5 < 0x17) {
      pcVar6 = (char *)((ulong)(local_f0.__unused + 1) | 1);
      local_f0.__unused[1] = (long)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00876ef8;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pcVar6 = operator_new(uVar7);
      local_f0.__unused[1] = uVar7 | 1;
      local_f0.__unused[2] = uVar5;
      local_60 = pcVar6;
LAB_00876ef8:
      memcpy(pcVar6,__src,uVar5);
    }
    pcVar6[uVar5] = '\0';
  }
  uVar5 = (**(code **)(*(long *)this + 0x108))(this,param_1);
  if ((uVar5 & 1) == 0) {
    (**(code **)(*(long *)this + 0x40))(&local_f0,this,param_1);
    if ((local_f0.__unused[1] & 1U) != 0) {
      *local_60 = '\0';
      local_f0.__unused[2] = 0;
      if ((local_f0.__unused[1] & 1U) != 0) {
        operator_delete(local_60);
      }
    }
    local_f0.__unused[2] = local_f0.st_ino;
    local_f0.__unused[1] = local_f0.st_dev;
    lVar3 = local_f0.__unused[1];
    local_f0.__unused[1]._0_1_ = (byte)local_f0.st_dev;
    local_60 = (char *)local_f0.st_nlink;
    uVar5 = (ulong)((byte)local_f0.__unused[1] >> 1);
    if ((local_f0.st_dev & 1) != 0) {
      uVar5 = local_f0.st_ino;
    }
    bVar1 = (byte)local_f0.__unused[1];
    local_f0.__unused[1] = lVar3;
    if (uVar5 == 0) {
      local_f0.st_size = 0;
      local_f0.__unused[1] = local_f0.st_dev;
      goto joined_r0x00877014;
    }
  }
  else {
    bVar1 = (byte)local_f0.__unused[1];
  }
  pcVar6 = (char *)((ulong)(local_f0.__unused + 1) | 1);
  if ((bVar1 & 1) != 0) {
    pcVar6 = local_60;
  }
  iVar4 = stat(pcVar6,&local_f0);
  if (iVar4 != 0) {
    local_f0.st_size = -1;
  }
joined_r0x00877014:
  if ((local_f0.__unused[1] & 1U) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f0.st_size;
}


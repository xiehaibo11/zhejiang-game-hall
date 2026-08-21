
/* cocos2d::FileUtils::getContents(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ResizableBuffer*) */

undefined8 __thiscall
cocos2d::FileUtils::getContents(FileUtils *this,basic_string *param_1,ResizableBuffer *param_2)

{
  ulong uVar1;
  char *__filename;
  long lVar2;
  int iVar3;
  long *plVar4;
  FILE *__stream;
  void *__ptr;
  size_t sVar5;
  undefined8 uVar6;
  stat local_e0;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    uVar6 = 1;
    goto LAB_008724f4;
  }
  plVar4 = (long *)getInstance();
  (**(code **)(*plVar4 + 0x40))(local_e0.__unused + 1,plVar4,param_1);
  uVar1 = (ulong)((byte)local_e0.__unused[1] >> 1);
  if (((byte)local_e0.__unused[1] & 1) != 0) {
    uVar1 = local_e0.__unused[2];
  }
  if (uVar1 == 0) {
    uVar6 = 1;
  }
  else {
    (**(code **)(*plVar4 + 0xe8))(&local_e0,plVar4,local_e0.__unused + 1);
    __filename = (char *)((ulong)&local_e0 | 1);
    if (((byte)local_e0.st_dev & 1) != 0) {
      __filename = (char *)local_e0.st_nlink;
    }
    __stream = fopen(__filename,"rb");
    if (((byte)local_e0.st_dev & 1) != 0) {
      operator_delete((void *)local_e0.st_nlink);
    }
    if (__stream == (FILE *)0x0) {
      uVar6 = 2;
    }
    else {
      iVar3 = fileno(__stream);
      iVar3 = fstat(iVar3,&local_e0);
      if (iVar3 == -1) {
        fclose(__stream);
      }
      else {
        (**(code **)(*(long *)param_2 + 0x10))(param_2,local_e0.st_size);
        __ptr = (void *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
        sVar5 = fread(__ptr,1,local_e0.st_size,__stream);
        fclose(__stream);
        if ((ulong)local_e0.st_size <= sVar5) {
          uVar6 = 0;
          goto joined_r0x00872528;
        }
        (**(code **)(*(long *)param_2 + 0x10))(param_2,sVar5);
      }
      uVar6 = 3;
    }
  }
joined_r0x00872528:
  if (((byte)local_e0.__unused[1] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_008724f4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


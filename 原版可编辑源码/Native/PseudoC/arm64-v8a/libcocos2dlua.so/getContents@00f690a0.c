
/* cocos2d::FileUtils::getContents(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ResizableBuffer*) const */

undefined4 __thiscall
cocos2d::FileUtils::getContents(FileUtils *this,basic_string *param_1,ResizableBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  FILE *__stream;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  basic_string *pbVar8;
  undefined4 uVar9;
  char *__filename;
  stat sStack_110;
  char *local_78;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    uVar9 = 1;
    goto LAB_00f69280;
  }
  plVar4 = (long *)getInstance();
  (**(code **)(*plVar4 + 0x50))(local_70,plVar4,param_1);
  uVar1 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar1 = local_68;
  }
  if (uVar1 == 0) {
    uVar9 = 1;
  }
  else {
    (**(code **)(*plVar4 + 0x118))(sStack_110.__unused + 2,plVar4,local_70);
    __filename = (char *)((ulong)(sStack_110.__unused + 2) | 1);
    pcVar5 = __filename;
    if (((byte)sStack_110.__unused[2] & 1) != 0) {
      pcVar5 = local_78;
    }
    iVar3 = stat(pcVar5,&sStack_110);
    if (iVar3 == -1) {
LAB_00f69258:
      uVar9 = 3;
    }
    else if (sStack_110.st_nlink._1_1_ < '\0') {
      if (((byte)sStack_110.__unused[2] & 1) != 0) {
        __filename = local_78;
      }
      __stream = fopen(__filename,"rb");
      if (__stream != (FILE *)0x0) {
        sStack_110.__unused[1] = sStack_110.st_size;
        pcVar5 = malloc(sStack_110.st_size);
        sVar6 = fread(pcVar5,1,sStack_110.st_size,__stream);
        fclose(__stream);
        if ((ulong)sStack_110.st_size <= sVar6) {
          lVar7 = hdq::decrypt(pcVar5,sStack_110.st_size,(ulong *)(sStack_110.__unused + 1));
          if (lVar7 != 0) {
            (**(code **)(*(long *)param_2 + 0x20))(param_2,lVar7,sStack_110.__unused[1]);
            uVar9 = 0;
            goto joined_r0x00f69260;
          }
          pbVar8 = *(basic_string **)(param_1 + 0x10);
          if (((byte)*param_1 & 1) == 0) {
            pbVar8 = param_1 + 1;
          }
          log("FileUtils: decrypt file error. %s",pbVar8);
        }
        free(pcVar5);
        goto LAB_00f69258;
      }
      uVar9 = 2;
    }
    else {
      uVar9 = 7;
    }
joined_r0x00f69260:
    if (((byte)sStack_110.__unused[2] & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00f69280:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::FileUtils::getFileDataFromZip(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, long*) const */

void * __thiscall
cocos2d::FileUtils::getFileDataFromZip
          (FileUtils *this,basic_string *param_1,basic_string *param_2,long *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  size_t sVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  basic_string *pbVar8;
  void *pvVar9;
  unz_file_info_s auStack_1d8 [56];
  size_t local_1a0;
  byte local_150 [16];
  char *local_140;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *param_3 = 0;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    plVar6 = (long *)getInstance();
    (**(code **)(*plVar6 + 0x118))(local_150,plVar6,param_1);
    pcVar2 = (char *)((ulong)local_150 | 1);
    if ((local_150[0] & 1) != 0) {
      pcVar2 = local_140;
    }
    pvVar7 = (void *)unzOpen(pcVar2);
    if ((local_150[0] & 1) != 0) {
      operator_delete(local_140);
    }
    if (pvVar7 != (void *)0x0) {
      pbVar8 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      iVar5 = unzLocateFile(pvVar7,(char *)pbVar8,1);
      if (iVar5 == 0) {
        iVar5 = unzGetCurrentFileInfo
                          (pvVar7,auStack_1d8,(char *)local_150,0x104,(void *)0x0,0,(char *)0x0,0);
        pvVar9 = (void *)0x0;
        if (iVar5 == 0) {
          iVar5 = unzOpenCurrentFile(pvVar7);
          sVar4 = local_1a0;
          if (iVar5 != 0) goto LAB_00f6957c;
          pvVar9 = malloc(local_1a0);
          unzReadCurrentFile(pvVar7,pvVar9,(uint)sVar4);
          *param_3 = local_1a0;
          unzCloseCurrentFile(pvVar7);
        }
      }
      else {
LAB_00f6957c:
        pvVar9 = (void *)0x0;
      }
      unzClose(pvVar7);
      goto LAB_00f695c0;
    }
  }
  pvVar9 = (void *)0x0;
LAB_00f695c0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return pvVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


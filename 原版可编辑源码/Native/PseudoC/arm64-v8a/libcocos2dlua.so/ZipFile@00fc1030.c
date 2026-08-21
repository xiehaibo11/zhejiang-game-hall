
/* cocos2d::ZipFile::ZipFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::ZipFile::ZipFile(ZipFile *this,basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 uVar5;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__ZipFile_017239f0;
  pvVar3 = operator_new(0x30);
  *(undefined8 *)((long)pvVar3 + 0x10) = 0;
  *(undefined8 *)((long)pvVar3 + 8) = 0;
  *(undefined8 *)((long)pvVar3 + 0x20) = 0;
  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
  *(undefined4 *)((long)pvVar3 + 0x28) = 0x3f800000;
  *(void **)(this + 8) = pvVar3;
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x118))(local_60,plVar4,param_1);
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  uVar5 = unzOpen(pcVar1);
  **(undefined8 **)(this + 8) = uVar5;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  setFilter(this,param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


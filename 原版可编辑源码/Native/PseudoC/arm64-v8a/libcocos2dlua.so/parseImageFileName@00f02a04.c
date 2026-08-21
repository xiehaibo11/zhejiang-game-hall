
/* cocos2d::BMFontConfiguration::parseImageFileName(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::BMFontConfiguration::parseImageFileName
          (BMFontConfiguration *this,char *param_1,basic_string *param_2)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  BMFontConfiguration *pBVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_180 [16];
  void *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 auStack_14c [4];
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sscanf(param_1,"page id=%d",auStack_14c);
  pcVar2 = strchr(param_1,0x22);
  sscanf(pcVar2 + 1,"%[^\"]",acStack_148);
  plVar3 = (long *)FileUtils::getInstance();
                    /* try { // try from 00f02a70 to 01002a77 has its CatchHandler @ 00f02d24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_180,acStack_148);
  (**(code **)(*plVar3 + 0x68))(&local_168,plVar3,local_180,param_2);
  pBVar4 = this + 0x68;
  if (((byte)*pBVar4 & 1) == 0) {
    *(undefined2 *)pBVar4 = 0;
  }
  else {
    **(undefined1 **)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    if (((byte)this[0x68] & 1) != 0) {
      operator_delete(*(void **)(this + 0x78));
      *(undefined8 *)(this + 0x68) = 0;
    }
  }
  *(undefined8 *)(this + 0x78) = local_158;
  *(undefined8 *)(this + 0x70) = uStack_160;
  *(undefined8 *)pBVar4 = local_168;
  uStack_160 = 0;
  local_158 = 0;
  local_168 = 0;
  if (((byte)local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::TileMapAtlas::loadTGAfile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::TileMapAtlas::loadTGAfile(TileMapAtlas *this,basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x50))(local_50,plVar3,param_1);
  pcVar1 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
  uVar4 = tgaLoad(pcVar1);
  *(undefined8 *)(this + 0x418) = uVar4;
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


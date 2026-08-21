
void FUN_008ce1a0(long param_1,undefined4 *param_2,basic_string *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,param_3);
  lVar4 = cocos2d::LuaEngine::getInstance();
  plVar5 = *(long **)(lVar4 + 8);
  (**(code **)(*plVar5 + 0x60))(plVar5,uVar2);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if (((byte)local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  (**(code **)(*plVar5 + 0x80))(plVar5,pvVar1);
  (**(code **)(*plVar5 + 200))(plVar5,*(undefined4 *)(param_1 + 8),2);
  plVar5 = (long *)cocos2d::LuaEngine::getInstance();
  (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(param_1 + 8));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


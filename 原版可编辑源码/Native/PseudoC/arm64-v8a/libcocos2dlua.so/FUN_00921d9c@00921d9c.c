
void FUN_00921d9c(long param_1,undefined8 *param_2,undefined4 *param_3,basic_string *param_4)

{
  undefined4 uVar1;
  long lVar2;
  void *__src;
  void *__dest;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_a8;
  undefined4 *puStack_a0;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulong uStack_70;
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 8) == 0) goto LAB_00921ec8;
  uVar1 = *param_3;
  uVar4 = *param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(&local_60,param_4);
  __src = local_50;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  local_88 = uVar4;
  local_80 = uVar1;
  if (((byte)local_60 & 1) == 0) {
    local_78 = CONCAT71(uStack_5f,local_60);
    local_68 = local_50;
    uStack_70 = uStack_58;
  }
  else {
    if (0xffffffffffffffef < uStack_58) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_58 < 0x17) {
      __dest = (void *)((long)&local_78 + 1);
      local_78 = (ulong)(byte)((int)uStack_58 << 1);
      if (uStack_58 != 0) goto LAB_00921e60;
    }
    else {
      uVar5 = uStack_58 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_78 = uVar5 | 1;
                    /* try { // try from 00921e58 to 00a21ea3 has its CatchHandler @ 00921e58
                       catch() { ... } // from try @ 00921e58 with catch @ 00921e58
                       catch() { ... } // from try @ 00921ea8 with catch @ 00921e58 */
      uStack_70 = uStack_58;
      local_68 = __dest;
LAB_00921e60:
      memcpy(__dest,__src,uStack_58);
    }
    *(undefined1 *)((long)__dest + uStack_58) = 0;
  }
  local_90 = &local_88;
  local_98[0] = 0;
  puStack_a0 = local_98;
  local_a8 = **(undefined8 **)(param_1 + 0x10);
  plVar3 = (long *)cocos2d::LuaEngine::getInstance();
                    /* try { // try from 00921ea4 to 00a21ea7 has its CatchHandler @ 00921efc */
  (**(code **)(*plVar3 + 0x128))(plVar3,0x23,&local_a8);
                    /* try { // try from 00921ea8 to 00a21f0f has its CatchHandler @ 00921e58 */
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00921ec8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


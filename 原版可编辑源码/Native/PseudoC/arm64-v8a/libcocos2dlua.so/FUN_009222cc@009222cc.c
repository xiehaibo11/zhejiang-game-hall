
void FUN_009222cc(long param_1,undefined8 *param_2,basic_string *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_a8;
  undefined4 *puStack_a0;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *param_4;
    uVar2 = *param_5;
    uVar5 = *param_2;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60,param_3);
    local_88 = uVar5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,param_3);
                    /* try { // try from 00922334 to 00a22367 has its CatchHandler @ 00922434 */
    local_98[0] = 1;
    puStack_a0 = local_98;
    local_a8 = **(undefined8 **)(param_1 + 0x10);
    local_90 = &local_88;
    local_68 = uVar1;
    uStack_64 = uVar2;
    plVar4 = (long *)cocos2d::LuaEngine::getInstance();
    (**(code **)(*plVar4 + 0x128))(plVar4,0x23,&local_a8);
                    /* try { // try from 00922368 to 00a2237b has its CatchHandler @ 00922400 */
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00922380 to 00a223b3 has its CatchHandler @ 00922404 */
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


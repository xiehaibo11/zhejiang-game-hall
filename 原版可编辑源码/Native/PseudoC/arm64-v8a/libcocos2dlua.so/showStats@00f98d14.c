
/* cocos2d::Director::showStats() */

void cocos2d::Director::showStats(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x0;
  long *plVar6;
  float fVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  char local_68 [32];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(char *)(in_x0 + 0x1c0) != '\0') {
    createStatsLabel();
    *(undefined1 *)(in_x0 + 0x1c0) = 0;
  }
  uVar1 = *(int *)(in_x0 + 0x150) + 1;
  *(uint *)(in_x0 + 0x150) = uVar1;
  fVar7 = *(float *)(in_x0 + 0x100) + *(float *)(in_x0 + 0x124);
  *(float *)(in_x0 + 0x124) = fVar7;
  if ((((*(char *)(in_x0 + 0x120) != '\0') && (*(long *)(in_x0 + 0x130) != 0)) &&
      (*(long *)(in_x0 + 0x138) != 0)) && (*(long *)(in_x0 + 0x140) != 0)) {
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_68[0x18] = '\0';
    local_68[0x19] = '\0';
    local_68[0x1a] = '\0';
    local_68[0x1b] = '\0';
    local_68[0x1c] = '\0';
    local_68[0x1d] = '\0';
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    if (0.5 < fVar7) {
      FUN_00f9afb0((double)((float)uVar1 / fVar7),(double)*(float *)(in_x0 + 0x154),local_68);
      plVar6 = *(long **)(in_x0 + 0x130);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,local_68);
      (**(code **)(*plVar6 + 0x558))(plVar6,local_80);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      *(undefined4 *)(in_x0 + 0x124) = 0;
                    /* try { // try from 00f98e00 to 01098e8b has its CatchHandler @ 00f98e00
                       catch() { ... } // from try @ 00f98e00 with catch @ 00f98e00
                       catch() { ... } // from try @ 00f98ea0 with catch @ 00f98e00 */
      *(undefined4 *)(in_x0 + 0x150) = 0;
    }
    lVar2 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + *(long *)(in_x0 + 0x1b0));
    lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + *(long *)(in_x0 + 0x1b0));
    lVar5 = DAT_0178fc48;
    if (lVar2 != DAT_0178fc48) {
      FUN_00f9afb0(local_68);
      plVar6 = *(long **)(in_x0 + 0x138);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,local_68);
      (**(code **)(*plVar6 + 0x558))(plVar6,local_80);
      lVar5 = lVar2;
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    DAT_0178fc48 = lVar5;
    lVar2 = DAT_0178fc50;
    if (lVar3 != DAT_0178fc50) {
                    /* try { // try from 00f98e8c to 01098e9f has its CatchHandler @ 00f98f90 */
      FUN_00f9afb0(local_68);
      plVar6 = *(long **)(in_x0 + 0x140);
                    /* try { // try from 00f98ea0 to 01098fab has its CatchHandler @ 00f98e00 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,local_68);
      (**(code **)(*plVar6 + 0x558))(plVar6,local_80);
      lVar2 = lVar3;
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    DAT_0178fc50 = lVar2;
    (**(code **)(**(long **)(in_x0 + 0x140) + 0x358))
              (*(long **)(in_x0 + 0x140),*(undefined8 *)(in_x0 + 0x1b0),Mat4::IDENTITY,0);
    (**(code **)(**(long **)(in_x0 + 0x138) + 0x358))
              (*(long **)(in_x0 + 0x138),*(undefined8 *)(in_x0 + 0x1b0),Mat4::IDENTITY,0);
    (**(code **)(**(long **)(in_x0 + 0x130) + 0x358))
              (*(long **)(in_x0 + 0x130),*(undefined8 *)(in_x0 + 0x1b0),Mat4::IDENTITY,0);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


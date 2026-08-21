
/* cocostudio::ArmatureAnimation::frameEvent(cocostudio::Bone*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocostudio::ArmatureAnimation::frameEvent
          (ArmatureAnimation *this,Bone *param_1,basic_string *param_2,int param_3,int param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (((*(long *)(this + 0x170) != 0) &&
      ((*(ulong *)(this + 0x160) & 1) != 0 || *(long *)(this + 0x158) != 0)) ||
     (*(long *)(this + 0x1d0) != 0)) {
    puVar3 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
    }
    *puVar3 = param_1;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (puVar3 + 1) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar3 + 1),(char *)pbVar2,uVar1);
    }
    *(int *)(puVar3 + 4) = param_3;
    *(int *)((long)puVar3 + 0x24) = param_4;
    lVar4 = *(long *)(this + 0xc0);
    lVar5 = *(long *)(this + 0xe0);
    uVar1 = 0;
    if (*(long *)(this + 200) - lVar4 != 0) {
      uVar1 = (*(long *)(this + 200) - lVar4) * 0x40 - 1;
    }
    uVar6 = lVar5 + *(long *)(this + 0xd8);
    if (uVar1 == uVar6) {
      std::__ndk1::deque<cocostudio::FrameEvent*,std::__ndk1::allocator<cocostudio::FrameEvent*>>::
      __add_back_capacity((deque<cocostudio::FrameEvent*,std::__ndk1::allocator<cocostudio::FrameEvent*>>
                           *)(this + 0xb8));
      lVar5 = *(long *)(this + 0xe0);
      lVar4 = *(long *)(this + 0xc0);
      uVar6 = *(long *)(this + 0xd8) + lVar5;
    }
    *(undefined8 **)(*(long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
         puVar3;
    *(long *)(this + 0xe0) = lVar5 + 1;
  }
  return;
}


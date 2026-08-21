
/* cocostudio::ArmatureAnimation::movementEvent(cocostudio::Armature*,
   cocostudio::MovementEventType, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::ArmatureAnimation::movementEvent
          (ArmatureAnimation *this,undefined8 param_1,undefined4 param_3,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (((*(long *)(this + 0x168) != 0) &&
      ((*(ulong *)(this + 0x150) & 1) != 0 || *(long *)(this + 0x148) != 0)) ||
     (*(long *)(this + 0x1a0) != 0)) {
    puVar3 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
    }
    *puVar3 = param_1;
    *(undefined4 *)(puVar3 + 1) = param_3;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (puVar3 + 2) != param_4) {
      uVar1 = *(ulong *)(param_4 + 8);
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_4 + 0x10);
      if (((byte)*param_4 & 1) == 0) {
        pbVar2 = param_4 + 1;
        uVar1 = (ulong)((byte)*param_4 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (puVar3 + 2),(char *)pbVar2,uVar1);
    }
    lVar4 = *(long *)(this + 0xf0);
    lVar5 = *(long *)(this + 0x110);
    uVar1 = 0;
    if (*(long *)(this + 0xf8) - lVar4 != 0) {
      uVar1 = (*(long *)(this + 0xf8) - lVar4) * 0x40 - 1;
    }
    uVar6 = lVar5 + *(long *)(this + 0x108);
    if (uVar1 == uVar6) {
      std::__ndk1::
      deque<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>::
      __add_back_capacity((deque<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>
                           *)(this + 0xe8));
      lVar5 = *(long *)(this + 0x110);
      lVar4 = *(long *)(this + 0xf0);
      uVar6 = *(long *)(this + 0x108) + lVar5;
    }
    *(undefined8 **)(*(long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
         puVar3;
    *(long *)(this + 0x110) = lVar5 + 1;
  }
  return;
}


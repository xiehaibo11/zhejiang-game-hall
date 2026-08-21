
/* cocostudio::ArmatureMovementDispatcher::animationEvent(cocostudio::Armature*,
   cocostudio::MovementEventType, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::ArmatureMovementDispatcher::animationEvent
          (ArmatureMovementDispatcher *this,undefined8 param_1,undefined4 param_3,undefined8 param_4
          )

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  for (plVar3 = *(long **)(*(long *)(this + 0x28) + 0x10); plVar3 != (long *)0x0;
      plVar3 = (long *)*plVar3) {
    pcVar2 = (code *)plVar3[3];
    plVar1 = (long *)(plVar3[2] + (plVar3[4] >> 1));
    if ((plVar3[4] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *plVar1);
    }
    (*pcVar2)(plVar1,param_1,param_3,param_4);
  }
  return;
}


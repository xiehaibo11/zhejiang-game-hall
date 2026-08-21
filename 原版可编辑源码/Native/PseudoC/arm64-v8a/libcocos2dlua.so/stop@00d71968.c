
/* dragonBones::Animation::stop(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall dragonBones::Animation::stop(Animation *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  AnimationState *this_00;
  undefined8 *puVar3;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    puVar2 = *(undefined8 **)(this + 0x40);
    for (puVar3 = *(undefined8 **)(this + 0x38); puVar3 != puVar2; puVar3 = puVar3 + 1) {
      AnimationState::stop((AnimationState *)*puVar3);
    }
  }
  else {
    this_00 = (AnimationState *)getState(this,param_1);
    if (this_00 != (AnimationState *)0x0) {
      AnimationState::stop(this_00);
      return;
    }
  }
  return;
}


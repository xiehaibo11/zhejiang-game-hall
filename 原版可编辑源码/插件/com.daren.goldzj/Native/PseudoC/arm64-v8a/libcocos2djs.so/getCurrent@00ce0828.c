
/* spine::AnimationState::getCurrent(unsigned long) */

undefined8 __thiscall spine::AnimationState::getCurrent(AnimationState *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x58)) {
    return *(undefined8 *)(*(long *)(this + 0x68) + param_1 * 8);
  }
  return 0;
}


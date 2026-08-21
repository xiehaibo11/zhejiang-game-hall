
/* cocos2d::renderer::State::getTexture(unsigned long) const */

undefined8 __thiscall cocos2d::renderer::State::getTexture(State *this,ulong param_1)

{
  if (*(long *)(this + 0x88) != *(long *)(this + 0x90)) {
    return *(undefined8 *)(*(long *)(this + 0x88) + param_1 * 8);
  }
  return 0;
}


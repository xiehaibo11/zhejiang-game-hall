
/* cocos2d::renderer::State::getVertexBuffer(unsigned long) const */

undefined8 __thiscall cocos2d::renderer::State::getVertexBuffer(State *this,ulong param_1)

{
  if (*(long *)(this + 0x50) != *(long *)(this + 0x58)) {
    return *(undefined8 *)(*(long *)(this + 0x50) + param_1 * 8);
  }
  return 0;
}


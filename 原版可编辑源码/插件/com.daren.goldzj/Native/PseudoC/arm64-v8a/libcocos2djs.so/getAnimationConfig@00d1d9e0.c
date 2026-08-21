
/* dragonBones::Animation::getAnimationConfig() const */

undefined8 __thiscall dragonBones::Animation::getAnimationConfig(Animation *this)

{
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  return *(undefined8 *)(this + 0x70);
}


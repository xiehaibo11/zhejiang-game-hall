
/* dragonBones::Animation::getAnimationConfig() const */

undefined8 __thiscall dragonBones::Animation::getAnimationConfig(Animation *this)

{
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
                    /* try { // try from 00d72c24 to 00e72ebf has its CatchHandler @ 00d731c4 */
  return *(undefined8 *)(this + 0x70);
}


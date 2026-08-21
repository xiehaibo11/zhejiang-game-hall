
/* cocos2d::renderer::Effect::switchTechnique(int) */

void __thiscall cocos2d::renderer::Effect::switchTechnique(Effect *this,int param_1)

{
  if ((long)param_1 < *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(*(long *)(this + 0x10) + (long)param_1 * 8);
  }
  return;
}


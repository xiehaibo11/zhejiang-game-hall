
/* cocos2d::renderer::CustomAssembler::getIA(unsigned long) const */

undefined8 __thiscall cocos2d::renderer::CustomAssembler::getIA(CustomAssembler *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x68)) {
    return *(undefined8 *)(*(long *)(this + 0x38) + param_1 * 8);
  }
  return 0;
}



/* cocos2d::renderer::InputAssembler::isMergeable(cocos2d::renderer::InputAssembler const&) const */

bool __thiscall
cocos2d::renderer::InputAssembler::isMergeable(InputAssembler *this,InputAssembler *param_1)

{
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    return false;
  }
  if (*(long *)this != *(long *)param_1) {
    return false;
  }
  return *(int *)(this + 0x18) + *(int *)(this + 0x14) == *(int *)(param_1 + 0x14);
}


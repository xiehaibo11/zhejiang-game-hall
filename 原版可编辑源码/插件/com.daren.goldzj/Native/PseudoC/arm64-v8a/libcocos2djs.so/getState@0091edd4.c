
/* cocos2d::renderer::Pass::getState(unsigned int) const */

int __thiscall cocos2d::renderer::Pass::getState(Pass *this,uint param_1)

{
  while( true ) {
    if (this == (Pass *)0x0) {
      return *(int *)(DEFAULT_STATES + (ulong)param_1 * 4);
    }
    if (*(int *)(this + (ulong)param_1 * 4 + 0x80) != -1) break;
    this = *(Pass **)(this + 0x30);
  }
  return *(int *)(this + (ulong)param_1 * 4 + 0x80);
}


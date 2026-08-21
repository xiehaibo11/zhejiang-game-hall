
/* cocos2d::renderer::InputAssembler::getPrimitiveCount() const */

int __thiscall cocos2d::renderer::InputAssembler::getPrimitiveCount(InputAssembler *this)

{
  int *piVar1;
  
                    /* try { // try from 009c00b8 to 00ac02e3 has its CatchHandler @ 009c0304 */
  if (*(int *)(this + 0x18) != -1) {
    return *(int *)(this + 0x18);
  }
  if (*(long *)(this + 8) == 0) {
    piVar1 = (int *)(*(long *)this + 0x24);
  }
  else {
    piVar1 = (int *)(*(long *)(this + 8) + 0x1c);
  }
  return *piVar1;
}


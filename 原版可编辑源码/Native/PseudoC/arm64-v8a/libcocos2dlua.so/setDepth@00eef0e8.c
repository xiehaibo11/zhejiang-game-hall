
/* cocos2d::Camera::setDepth(signed char) */

void __thiscall cocos2d::Camera::setDepth(Camera *this,Camera param_2)

{
  if (this[0x495] != param_2) {
    this[0x495] = param_2;
    if (*(long *)(this + 0x2f8) != 0) {
      *(undefined1 *)(*(long *)(this + 0x2f8) + 0x318) = 1;
    }
  }
  return;
}


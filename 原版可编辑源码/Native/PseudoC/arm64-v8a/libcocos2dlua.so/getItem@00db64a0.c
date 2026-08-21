
/* cocos2d::ui::ListView::getItem(long) const */

undefined8 __thiscall cocos2d::ui::ListView::getItem(ListView *this,long param_1)

{
  if ((-1 < param_1) && (param_1 < *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x8b8) + param_1 * 8);
  }
  return 0;
}


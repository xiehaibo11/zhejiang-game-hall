
/* cocos2d::ui::ListView::setMagneticType(cocos2d::ui::ListView::MagneticType) */

void __thiscall cocos2d::ui::ListView::setMagneticType(ListView *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x8d4) = param_2;
  this[0x850] = (ListView)0x1;
  startMagneticScroll(this);
  return;
}


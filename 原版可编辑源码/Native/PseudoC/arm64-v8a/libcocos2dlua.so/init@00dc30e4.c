
/* cocos2d::ui::AbstractCheckButton::init() */

bool __thiscall cocos2d::ui::AbstractCheckButton::init(AbstractCheckButton *this)

{
  bool bVar1;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 00dc3078 with catch @ 00dc30ec */
                    /* catch() { ... } // from try @ 00dc2e70 with catch @ 00dc30f0 */
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
                    /* catch() { ... } // from try @ 00dc2ee0 with catch @ 00dc3100 */
    (**(code **)(*(long *)this + 0x680))(this,0);
  }
  return bVar1;
}


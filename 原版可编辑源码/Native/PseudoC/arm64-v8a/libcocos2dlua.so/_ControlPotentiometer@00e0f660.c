
/* cocos2d::extension::ControlPotentiometer::~ControlPotentiometer() */

void __thiscall
cocos2d::extension::ControlPotentiometer::~ControlPotentiometer(ControlPotentiometer *this)

{
                    /* catch() { ... } // from try @ 00e0f6b4 with catch @ 00e0f670 */
  *(undefined ***)this = &PTR__ControlPotentiometer_016ea1d0;
  if (*(Ref **)(this + 0x368) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x368));
  }
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
                    /* try { // try from 00e0f694 to 00f0f697 has its CatchHandler @ 00e0f6e0 */
    Ref::release(*(Ref **)(this + 0x370));
  }
  Control::~Control((Control *)this);
  return;
}


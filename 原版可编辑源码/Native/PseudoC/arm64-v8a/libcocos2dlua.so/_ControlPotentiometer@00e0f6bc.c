
/* cocos2d::extension::ControlPotentiometer::~ControlPotentiometer() */

void __thiscall
cocos2d::extension::ControlPotentiometer::~ControlPotentiometer(ControlPotentiometer *this)

{
                    /* catch() { ... } // from try @ 00e0f6b0 with catch @ 00e0f6d0 */
  *(undefined ***)this = &PTR__ControlPotentiometer_016ea1d0;
                    /* catch() { ... } // from try @ 00e0f694 with catch @ 00e0f6e0 */
  if (*(Ref **)(this + 0x368) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x368));
  }
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  Control::~Control((Control *)this);
                    /* try { // try from 00e0f6fc to 00f0f727 has its CatchHandler @ 00e0f6fc
                       catch() { ... } // from try @ 00e0f6fc with catch @ 00e0f6fc
                       catch() { ... } // from try @ 00e0f72c with catch @ 00e0f6fc */
  operator_delete(this);
  return;
}


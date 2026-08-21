
/* cocos2d::extension::ControlHuePicker::~ControlHuePicker() */

void __thiscall cocos2d::extension::ControlHuePicker::~ControlHuePicker(ControlHuePicker *this)

{
                    /* try { // try from 00e0ed28 to 00f0ed2f has its CatchHandler @ 00e0eea4 */
  *(undefined ***)this = &PTR__ControlHuePicker_016e9aa0;
                    /* try { // try from 00e0ed30 to 00f0eea7 has its CatchHandler @ 00e0ecdc */
  Node::removeAllChildrenWithCleanup((Node *)this,true);
  if (*(Ref **)(this + 0x360) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x360));
  }
  if (*(Ref **)(this + 0x368) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x368));
  }
  Control::~Control((Control *)this);
  return;
}


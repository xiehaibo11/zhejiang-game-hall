
/* cocos2d::extension::ControlSaturationBrightnessPicker::~ControlSaturationBrightnessPicker() */

void __thiscall
cocos2d::extension::ControlSaturationBrightnessPicker::~ControlSaturationBrightnessPicker
          (ControlSaturationBrightnessPicker *this)

{
  *(undefined ***)this = &PTR__ControlSaturationBrightnessPicker_016ea8e0;
  Node::removeAllChildrenWithCleanup((Node *)this,true);
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  Control::~Control((Control *)this);
  operator_delete(this);
  return;
}



/* cocostudio::ComExtensionData::init() */

undefined8 __thiscall cocostudio::ComExtensionData::init(ComExtensionData *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)timeline::ActionTimelineData::create(0);
  *(Ref **)(this + 0x68) = this_00;
  if (this_00 != (Ref *)0x0) {
    cocos2d::Ref::retain(this_00);
  }
  return 1;
}


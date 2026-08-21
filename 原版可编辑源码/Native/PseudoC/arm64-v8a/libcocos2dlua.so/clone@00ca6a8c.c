
/* cocostudio::timeline::SkewFrame::clone() */

Ref * __thiscall cocostudio::timeline::SkewFrame::clone(SkewFrame *this)

{
  Ref *this_00;
  
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  cocos2d::Ref::Ref(this_00);
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined2 *)(this_00 + 0x28) = 1;
  *(undefined8 *)(this_00 + 0x34) = 0;
  *(undefined8 *)(this_00 + 0x2c) = 0;
  *(undefined8 *)(this_00 + 0x44) = 0;
  *(undefined8 *)(this_00 + 0x3c) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined ***)this_00 = &PTR__Frame_016cb960;
  *(undefined8 *)(this_00 + 0x58) = 0;
  cocos2d::Ref::autorelease(this_00);
  *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(this + 0x58);
  (**(code **)(*(long *)this_00 + 0xa8))(this_00,this);
  return this_00;
}



/* cocos2d::Layer::init() */

undefined8 __thiscall cocos2d::Layer::init(Layer *this)

{
  Director *this_00;
  undefined8 uVar1;
  
  this_00 = (Director *)Director::getInstance();
  uVar1 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  return 1;
}


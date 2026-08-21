
/* cocos2d::LayerMultiplex::init() */

undefined8 __thiscall cocos2d::LayerMultiplex::init(LayerMultiplex *this)

{
  Director *this_00;
  undefined8 uVar1;
  
  this_00 = (Director *)Director::getInstance();
  uVar1 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  *(undefined4 *)(this + 800) = 0;
  return 1;
}


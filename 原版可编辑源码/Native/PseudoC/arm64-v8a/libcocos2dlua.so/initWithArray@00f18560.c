
/* cocos2d::LayerMultiplex::initWithArray(cocos2d::Vector<cocos2d::Layer*> const&) */

undefined8 __thiscall cocos2d::LayerMultiplex::initWithArray(LayerMultiplex *this,Vector *param_1)

{
  Layer **ppLVar1;
  Director *this_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  Layer **ppLVar4;
  
  this_00 = (Director *)Director::getInstance();
  uVar2 = Director::getWinSize(this_00);
  (**(code **)(*(long *)this + 0x160))(this,uVar2);
  std::__ndk1::vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>>::reserve
            ((vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>> *)(this + 0x328),
             *(long *)(param_1 + 8) - *(long *)param_1 >> 3);
  ppLVar1 = *(Layer ***)(param_1 + 8);
  for (ppLVar4 = *(Layer ***)param_1; ppLVar4 != ppLVar1; ppLVar4 = ppLVar4 + 1) {
    puVar3 = *(undefined8 **)(this + 0x330);
    if (puVar3 == *(undefined8 **)(this + 0x338)) {
      std::__ndk1::vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>>::
      __push_back_slow_path<cocos2d::Layer*const&>
                ((vector<cocos2d::Layer*,std::__ndk1::allocator<cocos2d::Layer*>> *)(this + 0x328),
                 ppLVar4);
    }
    else {
      *puVar3 = *ppLVar4;
      *(undefined8 **)(this + 0x330) = puVar3 + 1;
    }
    Ref::retain((Ref *)*ppLVar4);
  }
  *(undefined4 *)(this + 800) = 0;
  (**(code **)(*(long *)this + 0x208))(this,**(undefined8 **)(this + 0x328));
  return 1;
}


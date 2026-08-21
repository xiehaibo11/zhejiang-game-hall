
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*>
   > const&, cocos2d::Event*), cocos2d::Layer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*>
   > const&, cocos2d::Event*), cocos2d::Layer*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, void (std::__ndk1::vector<cocos2d::Touch*,
   std::__ndk1::allocator<cocos2d::Touch*> > const&,
   cocos2d::Event*)>::__clone(std::__ndk1::__function::__base<void
   (std::__ndk1::vector<cocos2d::Touch*, std::__ndk1::allocator<cocos2d::Touch*> > const&,
   cocos2d::Event*)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*),cocos2d::Layer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*),cocos2d::Layer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*),cocos2d::Layer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Layer::*)(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*),cocos2d::Layer*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,void(std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>const&,cocos2d::Event*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00f18868 with catch @ 00f18994 */
  *(undefined ***)param_1 = &PTR_FUN_01701e60;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


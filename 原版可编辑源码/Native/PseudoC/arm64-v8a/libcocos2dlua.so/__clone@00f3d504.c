
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::Scene::*)(cocos2d::EventCustom*), cocos2d::Scene*, std::__ndk1::placeholders::__ph<1>
   const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::Scene::*)(cocos2d::EventCustom*), cocos2d::Scene*, std::__ndk1::placeholders::__ph<1>
   const&> >, void (cocos2d::EventCustom*)>::__clone(std::__ndk1::__function::__base<void
   (cocos2d::EventCustom*)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Scene::*)(cocos2d::EventCustom*),cocos2d::Scene*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Scene::*)(cocos2d::EventCustom*),cocos2d::Scene*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Scene::*)(cocos2d::EventCustom*),cocos2d::Scene*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Scene::*)(cocos2d::EventCustom*),cocos2d::Scene*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_01710378;
                    /* catch() { ... } // from try @ 00f3d444 with catch @ 00f3d518 */
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


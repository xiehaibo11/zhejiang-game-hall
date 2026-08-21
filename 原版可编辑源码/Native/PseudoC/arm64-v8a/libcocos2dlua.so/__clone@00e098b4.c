
/* std::__ndk1::__function::__func<std::__ndk1::__bind<bool
   (cocos2d::extension::Control::*)(cocos2d::Touch*, cocos2d::Event*), cocos2d::extension::Control*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<bool (cocos2d::extension::Control::*)(cocos2d::Touch*,
   cocos2d::Event*), cocos2d::extension::Control*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, bool (cocos2d::Touch*,
   cocos2d::Event*)>::__clone(std::__ndk1::__function::__base<bool (cocos2d::Touch*,
   cocos2d::Event*)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
::__clone(__func<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::extension::Control::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::extension::Control*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_016e8a60;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* try { // try from 00e098d4 to 00f098df has its CatchHandler @ 00e09938 */
  return;
}


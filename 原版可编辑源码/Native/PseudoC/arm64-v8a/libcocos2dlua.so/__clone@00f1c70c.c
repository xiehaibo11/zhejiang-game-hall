
/* std::__ndk1::__function::__func<std::__ndk1::__bind<bool (cocos2d::Menu::*)(cocos2d::Touch*,
   cocos2d::Event*), cocos2d::Menu*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<bool
   (cocos2d::Menu::*)(cocos2d::Touch*, cocos2d::Event*), cocos2d::Menu*,
   std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&> >, bool
   (cocos2d::Touch*, cocos2d::Event*)>::__clone(std::__ndk1::__function::__base<bool
   (cocos2d::Touch*, cocos2d::Event*)>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<bool(cocos2d::Menu::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::Menu*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::Menu::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::Menu*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
::__clone(__func<std::__ndk1::__bind<bool(cocos2d::Menu::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::Menu*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<bool(cocos2d::Menu::*)(cocos2d::Touch*,cocos2d::Event*),cocos2d::Menu*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,bool(cocos2d::Touch*,cocos2d::Event*)>
          *this,__base *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00f1c714 to 0101c79f has its CatchHandler @ 00f1c714
                       catch() { ... } // from try @ 00f1c714 with catch @ 00f1c714
                       catch() { ... } // from try @ 00f1c818 with catch @ 00f1c714
                       catch() { ... } // from try @ 00f1c8d4 with catch @ 00f1c714
                       catch() { ... } // from try @ 00f1cb14 with catch @ 00f1c714
                       catch() { ... } // from try @ 00f1cb7c with catch @ 00f1c714
                       catch() { ... } // from try @ 00f1cc3c with catch @ 00f1c714 */
  *(undefined ***)param_1 = &PTR_FUN_017043f8;
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


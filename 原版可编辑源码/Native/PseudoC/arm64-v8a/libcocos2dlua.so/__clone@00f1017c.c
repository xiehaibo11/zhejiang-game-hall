
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Label::*)(cocos2d::Mat4
   const&, bool), cocos2d::Label*, cocos2d::Mat4 const&, bool&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Label::*)(cocos2d::Mat4 const&, bool),
   cocos2d::Label*, cocos2d::Mat4 const&, bool&> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR____func_016fe290;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  cocos2d::Mat4::Mat4((Mat4 *)(param_1 + 0x20),(Mat4 *)(this + 0x20));
                    /* try { // try from 00f101bc to 010101c3 has its CatchHandler @ 00f101dc */
  *(__func<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>>,void()>
    *)(param_1 + 0x60) = this[0x60];
  return;
}


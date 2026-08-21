
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Skybox::*)(cocos2d::Mat4
   const&, unsigned int), cocos2d::Skybox*, cocos2d::Mat4 const&, unsigned int&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Skybox::*)(cocos2d::Mat4 const&,
   unsigned int), cocos2d::Skybox*, cocos2d::Mat4 const&, unsigned int&> >, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00d4db24 to 00e4db27 has its CatchHandler @ 00d4dbf0 */
  *(undefined ***)param_1 = &PTR____func_016d50f8;
                    /* try { // try from 00d4db28 to 00e4dbbb has its CatchHandler @ 00d4dacc */
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  cocos2d::Mat4::Mat4((Mat4 *)(param_1 + 0x20),(Mat4 *)(this + 0x20));
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
  return;
}


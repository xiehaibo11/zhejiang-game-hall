
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Skybox::*)(cocos2d::Mat4
   const&, unsigned int), cocos2d::Skybox*, cocos2d::Mat4 const&, unsigned int&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Skybox::*)(cocos2d::Mat4 const&,
   unsigned int), cocos2d::Skybox*, cocos2d::Mat4 const&, unsigned int&> >, void ()>::__clone()
   const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Skybox::*)(cocos2d::Mat4_const&,unsigned_int),cocos2d::Skybox*,cocos2d::Mat4_const&,unsigned_int&>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x68);
                    /* catch() { ... } // from try @ 00d4d9f8 with catch @ 00d4daa8 */
                    /* catch() { ... } // from try @ 00d4d98c with catch @ 00d4daac */
                    /* catch() { ... } // from try @ 00d4da18 with catch @ 00d4dab0 */
  *puVar1 = &PTR____func_016d50f8;
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar2;
                    /* try { // try from 00d4dacc to 00e4db23 has its CatchHandler @ 00d4dacc
                       catch() { ... } // from try @ 00d4dacc with catch @ 00d4dacc
                       catch() { ... } // from try @ 00d4db28 with catch @ 00d4dacc
                       catch() { ... } // from try @ 00d4dbe0 with catch @ 00d4dacc */
  puVar1[3] = *(undefined8 *)(this + 0x18);
  cocos2d::Mat4::Mat4((Mat4 *)(puVar1 + 4),(Mat4 *)(this + 0x20));
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(this + 0x60);
  return puVar1;
}



/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Label::*)(cocos2d::Mat4
   const&, bool), cocos2d::Label*, cocos2d::Mat4 const&, bool&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Label::*)(cocos2d::Mat4 const&, bool),
   cocos2d::Label*, cocos2d::Mat4 const&, bool&> >, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>>,void()>
::destroy_deallocate
          (__func<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Label::*)(cocos2d::Mat4_const&,bool),cocos2d::Label*,cocos2d::Mat4_const&,bool&>>,void()>
           *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f101bc with catch @ 00f101dc
                        */
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x20));
  operator_delete(this);
  return;
}


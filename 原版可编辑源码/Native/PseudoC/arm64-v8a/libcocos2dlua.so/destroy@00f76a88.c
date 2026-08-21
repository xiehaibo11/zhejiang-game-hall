
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (cocos2d::Data)>
   const&, cocos2d::Data>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void
   (cocos2d::Data)> const&, cocos2d::Data> >, void ()>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
::destroy(__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
  *p_Var1;
  code *UNRECOVERED_JUMPTABLE;
  
  cocos2d::Data::~Data((Data *)(this + 0x50));
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
                   *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00f76ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


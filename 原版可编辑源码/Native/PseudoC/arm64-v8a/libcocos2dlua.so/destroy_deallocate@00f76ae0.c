
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (cocos2d::Data)>
   const&, cocos2d::Data>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void
   (cocos2d::Data)> const&, cocos2d::Data> >, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
::destroy_deallocate
          (__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
           *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
  *p_Var1;
  code *pcVar2;
  
  cocos2d::Data::~Data((Data *)(this + 0x50));
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
                   *)0x0) goto LAB_00f76b24;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00f76b24:
  operator_delete(this);
  return;
}


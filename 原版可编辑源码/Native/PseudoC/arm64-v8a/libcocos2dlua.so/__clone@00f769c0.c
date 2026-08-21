
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (cocos2d::Data)>
   const&, cocos2d::Data>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void
   (cocos2d::Data)> const&, cocos2d::Data> >, void ()>::__clone(std::__ndk1::__function::__base<void
   ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
::__clone(__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
          *this,__base *param_1)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
  *p_Var1;
  undefined8 uVar2;
  
  *(undefined ***)param_1 = &PTR____func_01720930;
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
             **)(this + 0x40);
  if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(cocos2d::Data)>const&,cocos2d::Data>>,void()>
                 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (this + 0x20 == p_Var1) {
    *(__base **)(param_1 + 0x40) = param_1 + 0x20;
    (**(code **)(**(long **)(this + 0x40) + 0x18))(*(long **)(this + 0x40),param_1 + 0x20);
  }
  else {
    uVar2 = (**(code **)(*(long *)p_Var1 + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = uVar2;
  }
  cocos2d::Data::Data((Data *)(param_1 + 0x50),(Data *)(this + 0x50));
  return;
}


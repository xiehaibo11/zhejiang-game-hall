
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool> >, void ()>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
::~__func(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
  *p_Var1;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
             **)(this + 0x40);
  *(undefined ***)this = &PTR____func_017202a8;
  if (this + 0x20 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00f74f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f74f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}


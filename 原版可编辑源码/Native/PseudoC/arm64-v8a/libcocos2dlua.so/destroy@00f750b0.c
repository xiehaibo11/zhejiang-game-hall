
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool> >, void ()>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
::destroy(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
  *p_Var1;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00f750dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f750d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}


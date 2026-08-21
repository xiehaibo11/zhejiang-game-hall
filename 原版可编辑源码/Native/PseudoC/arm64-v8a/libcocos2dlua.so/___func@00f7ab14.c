
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long> >, void ()>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
::~__func(__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
  *p_Var1;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
             **)(this + 0x40);
  *(undefined ***)this = &PTR____func_017218f0;
  if (this + 0x20 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00f7ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f7ab44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}


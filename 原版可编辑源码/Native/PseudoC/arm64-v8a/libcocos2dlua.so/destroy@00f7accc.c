
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long> >, void ()>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
::destroy(__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
  *p_Var1;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00f7acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f7acec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}


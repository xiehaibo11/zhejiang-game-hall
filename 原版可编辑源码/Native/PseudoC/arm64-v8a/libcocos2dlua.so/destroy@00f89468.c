
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&,
   void*&>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&, void*&>
   >, void ()>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
::destroy(__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
  *p_Var1;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
                    /* WARNING: Could not recover jumptable at 0x00f89494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x20))();
    return;
  }
  if (p_Var1 != (__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f89488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var1 + 0x28))();
    return;
  }
  return;
}


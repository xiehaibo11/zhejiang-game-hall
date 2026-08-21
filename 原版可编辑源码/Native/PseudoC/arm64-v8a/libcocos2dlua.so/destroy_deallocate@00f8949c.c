
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&,
   void*&>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&, void*&>
   >, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
::destroy_deallocate
          (__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
           *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
  *p_Var1;
  code *pcVar2;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
                   *)0x0) goto LAB_00f894d8;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00f894d8:
  operator_delete(this);
  return;
}


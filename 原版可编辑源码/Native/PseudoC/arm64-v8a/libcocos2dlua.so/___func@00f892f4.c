
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&,
   void*&>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (void*)>&, void*&>
   >, void ()>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
::~__func(__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
          *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
  *p_Var1;
  code *pcVar2;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
             **)(this + 0x40);
  *(undefined ***)this = &PTR____func_01722250;
  if (this + 0x20 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(void*)>&,void*&>>,void()>
                   *)0x0) goto LAB_00f89340;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00f89340:
  operator_delete(this);
  return;
}


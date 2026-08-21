
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (long)> const&,
   long> >, void ()>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
::destroy_deallocate
          (__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
           *this)

{
  __func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
  *p_Var1;
  code *pcVar2;
  
  p_Var1 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
             **)(this + 0x40);
  if (this + 0x20 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(long)>const&,long>>,void()>
                   *)0x0) goto LAB_00f7ad3c;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_00f7ad3c:
  operator_delete(this);
  return;
}


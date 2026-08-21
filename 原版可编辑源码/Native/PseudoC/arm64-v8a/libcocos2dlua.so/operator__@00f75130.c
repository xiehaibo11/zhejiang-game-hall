
/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
::operator()(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
             *this)

{
  long lVar1;
  long *plVar2;
  __func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
  local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = this[0x50];
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__ndk1::__function::__func<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool>, std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void (bool)> const&,
   bool> >, void ()>::__clone() const */

undefined8 * __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
::__clone(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
          *this)

{
  undefined8 *puVar1;
  __func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
  *p_Var2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x60);
  *puVar1 = &PTR____func_017202a8;
  p_Var2 = *(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
             **)(this + 0x40);
  if (p_Var2 == (__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
                 *)0x0) {
    puVar1[8] = 0;
  }
  else if (this + 0x20 == p_Var2) {
    puVar1[8] = puVar1 + 4;
    (**(code **)(*(long *)p_Var2 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*(long *)p_Var2 + 0x10))();
    puVar1[8] = uVar3;
  }
  *(__func<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>,std::__ndk1::allocator<std::__ndk1::__bind<std::__ndk1::function<void(bool)>const&,bool>>,void()>
    *)(puVar1 + 10) = this[0x50];
  return puVar1;
}


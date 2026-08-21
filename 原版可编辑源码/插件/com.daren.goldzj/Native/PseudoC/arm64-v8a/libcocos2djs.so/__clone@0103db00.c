
/* std::__ndk1::__function::__func<void (*)(), std::__ndk1::allocator<void (*)()>, void
   ()>::__clone() const */

void __thiscall
std::__ndk1::__function::__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()>::__clone
          (__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()> *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR_FUN_01caa5f0;
  puVar1[1] = *(undefined8 *)(this + 8);
  return;
}


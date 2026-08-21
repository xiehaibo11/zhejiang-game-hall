
/* v8::internal::ConstantPool::Clear() */

void __thiscall v8::internal::ConstantPool::Clear(ConstantPool *this)

{
  ConstantPool *pCVar1;
  
  pCVar1 = this + 0x18;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             *)(this + 0x10),*(__tree_node **)pCVar1);
  *(undefined8 *)pCVar1 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(ConstantPool **)(this + 0x10) = pCVar1;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


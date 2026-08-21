
/* v8::internal::ConstantPool::GetRelocInfoStatusFor(v8::internal::ConstantPoolKey const&) */

undefined8 __thiscall
v8::internal::ConstantPool::GetRelocInfoStatusFor(ConstantPool *this,ConstantPoolKey *param_1)

{
  byte bVar1;
  bool bVar2;
  ConstantPool *pCVar3;
  
  bVar1 = param_1[0x10];
  if (bVar1 == 0) {
    if (*param_1 == '\0') {
      bVar2 = *(long *)(param_1 + 8) == 0;
    }
    else {
      bVar2 = *(int *)(param_1 + 8) == 0;
    }
    bVar2 = !bVar2;
  }
  else {
    if ('\x03' < (char)bVar1) goto LAB_00ee7e80;
    bVar2 = false;
  }
  if (((bVar1 & 0xfe) != 2) && (!bVar2)) {
    return 0;
  }
LAB_00ee7e80:
  pCVar3 = (ConstantPool *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
           ::find<v8::internal::ConstantPoolKey>
                     ((__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                       *)(this + 0x10),param_1);
  if (this + 0x18 == pCVar3) {
    return 0;
  }
  return 1;
}


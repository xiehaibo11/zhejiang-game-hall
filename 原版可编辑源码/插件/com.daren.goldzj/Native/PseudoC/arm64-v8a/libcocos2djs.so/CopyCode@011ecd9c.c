
/* v8::internal::Serializer::CopyCode(v8::internal::Code) */

long __thiscall v8::internal::Serializer::CopyCode(Serializer *this,long param_2)

{
  int iVar1;
  ulong uVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar3;
  
  pvVar3 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)pvVar3;
  iVar1 = *(int *)(param_2 + 0x13);
  if ((*(byte *)(param_2 + 0x17) & 1) != 0) {
    uVar2 = (long)(iVar1 + 0x47) & 0xfffffffffffffff8;
    iVar1 = (int)uVar2 + *(int *)(param_2 + -1 + uVar2) + -0x38;
  }
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert<unsigned_char*>
            (pvVar3,*(undefined8 *)pvVar3,param_2 + -1,
             param_2 + -1 + (long)(int)((iVar1 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0));
  return *(long *)pvVar3 + 1;
}


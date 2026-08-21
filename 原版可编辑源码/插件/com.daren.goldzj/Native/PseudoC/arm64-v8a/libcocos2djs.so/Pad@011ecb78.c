
/* v8::internal::Serializer::Pad(int) */

void __thiscall v8::internal::Serializer::Pad(Serializer *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar3;
  Serializer *pSVar4;
  uchar local_28 [4];
  uchar local_24 [4];
  
  local_28[0] = '\x14';
  pSVar4 = this + 0x58;
  pvVar3 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50);
  if (*(undefined1 **)pSVar4 == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar3,local_28);
    puVar2 = *(undefined1 **)pSVar4;
  }
  else {
    **(undefined1 **)pSVar4 = 0x14;
    puVar2 = (undefined1 *)(*(long *)pSVar4 + 1);
    *(undefined1 **)pSVar4 = puVar2;
  }
  local_28[0] = '\x14';
  if (puVar2 == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar3,local_28);
    puVar2 = *(undefined1 **)pSVar4;
  }
  else {
    *puVar2 = 0x14;
    puVar2 = (undefined1 *)(*(long *)pSVar4 + 1);
    *(undefined1 **)pSVar4 = puVar2;
  }
  local_28[0] = '\x14';
  if (puVar2 == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(pvVar3,local_28);
    puVar2 = *(undefined1 **)pSVar4;
  }
  else {
    *puVar2 = 0x14;
    puVar2 = (undefined1 *)(*(long *)pSVar4 + 1);
    *(undefined1 **)pSVar4 = puVar2;
  }
  pvVar3 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50);
  iVar1 = (int)puVar2 - *(int *)pvVar3;
  while ((iVar1 + param_1 & 7U) != 0) {
    local_24[0] = '\x14';
    if (puVar2 == *(undefined1 **)(this + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(pvVar3,local_24);
      puVar2 = *(undefined1 **)pSVar4;
    }
    else {
      *puVar2 = 0x14;
      puVar2 = (undefined1 *)(*(long *)pSVar4 + 1);
      *(undefined1 **)pSVar4 = puVar2;
    }
    iVar1 = (int)puVar2 - *(int *)pvVar3;
  }
  return;
}


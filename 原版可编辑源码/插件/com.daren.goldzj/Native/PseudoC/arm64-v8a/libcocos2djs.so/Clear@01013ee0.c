
/* v8::internal::CodeObjectRegistry::Clear() */

void __thiscall v8::internal::CodeObjectRegistry::Clear(CodeObjectRegistry *this)

{
  CodeObjectRegistry *pCVar1;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  pCVar1 = this + 0x20;
  std::__ndk1::
  __tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>::
  destroy((__tree<unsigned_long,std::__ndk1::less<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
           *)(this + 0x18),*(__tree_node **)pCVar1);
  *(CodeObjectRegistry **)(this + 0x18) = pCVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)pCVar1 = 0;
  return;
}


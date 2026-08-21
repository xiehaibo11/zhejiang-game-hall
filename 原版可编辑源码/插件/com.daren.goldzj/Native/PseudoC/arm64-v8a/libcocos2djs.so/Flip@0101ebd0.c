
/* v8::internal::NewLargeObjectSpace::Flip() */

void __thiscall v8::internal::NewLargeObjectSpace::Flip(NewLargeObjectSpace *this)

{
  long lVar1;
  
  for (lVar1 = *(long *)(this + 0x20); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xe0)) {
    *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) & 0xffffffffffffffe7 | 8;
  }
  return;
}


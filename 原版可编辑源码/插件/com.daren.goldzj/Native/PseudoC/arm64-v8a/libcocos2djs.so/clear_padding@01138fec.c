
/* v8::internal::SeqTwoByteString::clear_padding() */

void __thiscall v8::internal::SeqTwoByteString::clear_padding(SeqTwoByteString *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)this + 7) * 2;
  iVar1 = iVar2 + 0xc;
  memset((void *)(*(long *)this + (long)iVar1 + -1),0,
         (long)(int)((iVar2 + 0xfU & 0xfffffffc) - iVar1));
  return;
}


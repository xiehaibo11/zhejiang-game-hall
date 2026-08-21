
/* v8::internal::SeqOneByteString::clear_padding() */

void __thiscall v8::internal::SeqOneByteString::clear_padding(SeqOneByteString *this)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(long *)this + 7);
  lVar1 = (long)iVar2 + 0xc;
  memset((void *)(*(long *)this + lVar1 + -1),0,
         (long)(int)((iVar2 + 0xfU & 0xfffffffc) - (int)lVar1));
  return;
}


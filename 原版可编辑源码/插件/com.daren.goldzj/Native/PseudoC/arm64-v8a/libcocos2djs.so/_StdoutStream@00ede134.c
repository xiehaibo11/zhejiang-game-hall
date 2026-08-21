
/* virtual thunk to v8::internal::StdoutStream::~StdoutStream() */

void __thiscall v8::internal::StdoutStream::~StdoutStream(StdoutStream *this)

{
  StdoutStream *pSVar1;
  
  pSVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pSVar1 = &PTR__StdoutStream_01ca1128;
  *(undefined ***)(pSVar1 + 0x60) = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)(pSVar1 + 8));
  std::__ndk1::ios_base::~ios_base((ios_base *)(pSVar1 + 0x60));
  operator_delete(pSVar1);
  return;
}


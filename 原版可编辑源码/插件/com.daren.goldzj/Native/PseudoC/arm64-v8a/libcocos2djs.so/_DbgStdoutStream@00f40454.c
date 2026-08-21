
/* virtual thunk to v8::internal::DbgStdoutStream::~DbgStdoutStream() */

void __thiscall v8::internal::DbgStdoutStream::~DbgStdoutStream(DbgStdoutStream *this)

{
  DbgStdoutStream *pDVar1;
  
  pDVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined8 *)pDVar1 = 0x1ca4bc8;
  *(undefined8 *)(pDVar1 + 0x148) = 0x1ca4bf0;
  DbgStreamBuf::~DbgStreamBuf((DbgStreamBuf *)(pDVar1 + 8));
  std::__ndk1::ios_base::~ios_base((ios_base *)(pDVar1 + 0x148));
  return;
}



/* virtual thunk to v8::internal::OFStream::~OFStream() */

void __thiscall v8::internal::OFStream::~OFStream(OFStream *this)

{
  OFStream *pOVar1;
  
  pOVar1 = this + *(long *)(*(long *)this + -0x18);
  *(undefined ***)pOVar1 = &PTR__OFStream_01ca1000;
  *(undefined ***)(pOVar1 + 8) = &PTR__basic_streambuf_01c671a8;
  *(undefined ***)(pOVar1 + 0x50) = &PTR__OFStream_01ca1028;
  std::__ndk1::locale::~locale((locale *)(pOVar1 + 0x10));
  std::__ndk1::ios_base::~ios_base((ios_base *)(pOVar1 + 0x50));
  operator_delete(pOVar1);
  return;
}


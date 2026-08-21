
/* v8::internal::OFStream::~OFStream() */

void __thiscall v8::internal::OFStream::~OFStream(OFStream *this)

{
  *(undefined ***)this = &PTR__OFStream_01ca1000;
  *(undefined ***)(this + 8) = &PTR__basic_streambuf_01c671a8;
  *(undefined ***)(this + 0x50) = &PTR__OFStream_01ca1028;
  std::__ndk1::locale::~locale((locale *)(this + 0x10));
  std::__ndk1::ios_base::~ios_base((ios_base *)(this + 0x50));
  operator_delete(this);
  return;
}


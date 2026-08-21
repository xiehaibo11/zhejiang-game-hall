
/* v8::internal::OFStreamBase::~OFStreamBase() */

void __thiscall v8::internal::OFStreamBase::~OFStreamBase(OFStreamBase *this)

{
  *(undefined ***)this = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale((locale *)(this + 8));
  operator_delete(this);
  return;
}


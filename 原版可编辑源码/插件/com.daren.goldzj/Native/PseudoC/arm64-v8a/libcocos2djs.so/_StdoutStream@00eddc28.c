
/* v8::internal::StdoutStream::~StdoutStream() */

void __thiscall v8::internal::StdoutStream::~StdoutStream(StdoutStream *this)

{
  *(undefined ***)this = &PTR__StdoutStream_01ca1128;
  *(undefined ***)(this + 0x60) = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)(this + 8));
  std::__ndk1::ios_base::~ios_base((ios_base *)(this + 0x60));
  return;
}



/* v8::internal::DbgStdoutStream::~DbgStdoutStream() */

void __thiscall v8::internal::DbgStdoutStream::~DbgStdoutStream(DbgStdoutStream *this)

{
  *(undefined8 *)this = 0x1ca4bc8;
  *(undefined8 *)(this + 0x148) = 0x1ca4bf0;
  DbgStreamBuf::~DbgStreamBuf((DbgStreamBuf *)(this + 8));
  std::__ndk1::ios_base::~ios_base((ios_base *)(this + 0x148));
  return;
}


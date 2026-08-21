
/* v8::internal::DbgStdoutStream::DbgStdoutStream() */

void __thiscall v8::internal::DbgStdoutStream::DbgStdoutStream(DbgStdoutStream *this)

{
  *(undefined8 *)this = 0x1cbc090;
  *(undefined8 *)(this + 0x148) = 0x1cbc0b8;
  std::__ndk1::ios_base::init((ios_base *)(this + 0x148),this + 8);
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0xffffffff;
  *(undefined8 *)(this + 0x148) = 0x1ca4bf0;
  *(undefined8 *)this = 0x1ca4bc8;
  *(undefined ***)(this + 8) = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(DbgStdoutStream **)(this + 0x30) = this + 0x48;
  *(DbgStdoutStream **)(this + 0x38) = this + 0x48;
  *(ios_base **)(this + 0x40) = (ios_base *)(this + 0x148);
  *(undefined ***)(this + 8) = &PTR__DbgStreamBuf_01cbbf08;
  return;
}



/* v8::internal::DbgStreamBuf::DbgStreamBuf() */

void __thiscall v8::internal::DbgStreamBuf::DbgStreamBuf(DbgStreamBuf *this)

{
  *(undefined ***)this = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 8));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(DbgStreamBuf **)(this + 0x28) = this + 0x40;
  *(DbgStreamBuf **)(this + 0x30) = this + 0x40;
  *(DbgStreamBuf **)(this + 0x38) = this + 0x140;
  *(undefined ***)this = &PTR__DbgStreamBuf_01cbbf08;
  return;
}


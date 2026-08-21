
/* v8::internal::OFStreamBase::OFStreamBase(__sFILE*) */

void __thiscall v8::internal::OFStreamBase::OFStreamBase(OFStreamBase *this,__sFILE *param_1)

{
  *(undefined ***)this = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 8));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__basic_streambuf_01cbbf88;
  *(__sFILE **)(this + 0x40) = param_1;
  return;
}


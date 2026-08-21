
/* v8::internal::DbgStdoutStream::DbgStdoutStream() */

void __thiscall v8::internal::DbgStdoutStream::DbgStdoutStream(DbgStdoutStream *this)

{
  ios_base *this_00;
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[3];
  lVar1 = in_x1[1];
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[2];
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  std::__ndk1::ios_base::init(this_00,this + 8);
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x90) = 0xffffffff;
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[3];
  *(undefined ***)(this + 8) = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(DbgStdoutStream **)(this + 0x30) = this + 0x48;
  *(undefined ***)(this + 8) = &PTR__DbgStreamBuf_01cbbf08;
  *(DbgStdoutStream **)(this + 0x38) = this + 0x48;
  *(DbgStdoutStream **)(this + 0x40) = this + 0x148;
  return;
}


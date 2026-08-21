
/* v8::internal::OFStream::OFStream(__sFILE*) */

void __thiscall v8::internal::OFStream::OFStream(OFStream *this,__sFILE *param_1)

{
  long lVar1;
  ios_base *this_00;
  OFStream *pOVar2;
  
  *(undefined8 *)this = 0x1cbc0e0;
  this_00 = (ios_base *)(this + 0x50);
  *(undefined8 *)this_00 = 0x1cbc108;
  std::__ndk1::ios_base::init(this_00,(void *)0x0);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined ***)this = &PTR__OFStream_01ca1000;
  *(undefined ***)this_00 = &PTR__OFStream_01ca1028;
  pOVar2 = this + 8;
  *(undefined ***)pOVar2 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::locale((locale *)(this + 0x10));
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)pOVar2 = &PTR__basic_streambuf_01cbbf88;
  *(__sFILE **)(this + 0x48) = param_1;
  lVar1 = *(long *)(*(long *)this + -0x18);
  *(OFStream **)((ios_base *)(this + lVar1) + 0x28) = pOVar2;
  std::__ndk1::ios_base::clear((ios_base *)(this + lVar1),0);
  return;
}


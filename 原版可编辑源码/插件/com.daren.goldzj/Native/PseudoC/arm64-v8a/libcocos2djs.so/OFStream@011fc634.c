
/* v8::internal::OFStream::OFStream(__sFILE*) */

void __thiscall v8::internal::OFStream::OFStream(OFStream *this,__sFILE *param_1)

{
  ios_base *this_00;
  undefined8 in_x2;
  long lVar1;
  OFStream *pOVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)this = lVar1;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x10);
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  std::__ndk1::ios_base::init(this_00,(void *)0x0);
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x90) = 0xffffffff;
  lVar1 = *(long *)param_1;
  *(long *)this = lVar1;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_1 + 0x18);
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
  *(undefined8 *)(this + 0x48) = in_x2;
  lVar1 = *(long *)(*(long *)this + -0x18);
  *(OFStream **)((ios_base *)(this + lVar1) + 0x28) = pOVar2;
  std::__ndk1::ios_base::clear((ios_base *)(this + lVar1),0);
  return;
}


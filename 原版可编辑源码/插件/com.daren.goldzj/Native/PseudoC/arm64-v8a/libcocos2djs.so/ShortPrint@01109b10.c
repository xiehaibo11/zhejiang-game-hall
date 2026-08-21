
/* v8::internal::Object::ShortPrint(__sFILE*) const */

void __thiscall v8::internal::Object::ShortPrint(Object *this,__sFILE *param_1)

{
  undefined **local_118;
  undefined **ppuStack_110;
  locale alStack_108 [64];
  undefined **local_c8 [19];
  undefined8 local_18;
  
  OFStream::OFStream((OFStream *)&local_118,param_1);
  local_18 = *(undefined8 *)this;
  internal::operator<<((basic_ostream *)&local_118,(Brief *)&local_18);
  local_118 = &PTR__OFStream_01ca1000;
  local_c8[0] = &PTR__OFStream_01ca1028;
  ppuStack_110 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_108);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_c8);
  return;
}


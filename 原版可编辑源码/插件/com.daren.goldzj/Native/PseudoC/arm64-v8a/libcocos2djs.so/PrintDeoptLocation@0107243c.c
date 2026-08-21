
/* v8::internal::Code::PrintDeoptLocation(__sFILE*, char const*, unsigned long) */

void __thiscall
v8::internal::Code::PrintDeoptLocation(Code *this,__sFILE *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined **local_128;
  undefined **ppuStack_120;
  locale alStack_118 [64];
  undefined **local_d8 [19];
  ulong local_28;
  
  auVar2 = Deoptimizer::GetDeoptInfo(*(undefined8 *)this,param_3);
  local_28 = auVar2._0_8_;
  if (((auVar2._8_4_ & 0xff) != 0x21) || ((local_28 & 0x7fffffffffff) != 0)) {
    PrintF(param_1,"%s",param_2);
    OFStream::OFStream((OFStream *)&local_128,param_1);
    SourcePosition::Print((SourcePosition *)&local_28,&local_128,*(undefined8 *)this);
    uVar1 = DeoptimizeReasonToString(auVar2._8_8_ & 0xffffffff);
    PrintF(param_1,", %s\n",uVar1);
    local_128 = &PTR__OFStream_01ca1000;
    local_d8[0] = &PTR__OFStream_01ca1028;
    ppuStack_120 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_118);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_d8);
  }
  return;
}


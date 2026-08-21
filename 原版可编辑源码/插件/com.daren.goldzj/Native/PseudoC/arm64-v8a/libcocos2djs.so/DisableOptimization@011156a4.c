
/* v8::internal::SharedFunctionInfo::DisableOptimization(v8::internal::BailoutReason) */

void __thiscall
v8::internal::SharedFunctionInfo::DisableOptimization(SharedFunctionInfo *this,uint param_2)

{
  Mutex *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined **local_138;
  undefined **ppuStack_130;
  locale alStack_128 [64];
  undefined **local_e8 [19];
  undefined8 local_38;
  
  *(uint *)(*(long *)this + 0x1b) =
       *(uint *)(*(long *)this + 0x1b) & 0xff0fffff | (param_2 & 0xff) << 0x14;
  lVar3 = *(long *)((ulong)*(uint *)(this + 4) << 0x20 | 0xb6d8);
  uVar1 = abstract_code(this);
  uVar2 = *(undefined8 *)this;
  this_00 = (Mutex *)(lVar3 + 0x28);
  base::Mutex::Lock(this_00);
  for (plVar4 = *(long **)(lVar3 + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*(long *)plVar4[2] + 0x78))((long *)plVar4[2],uVar1,uVar2);
  }
  base::Mutex::Unlock(this_00);
  if (FLAG_trace_opt != '\0') {
    PrintF("[disabled optimization for ");
    OFStream::OFStream((OFStream *)&local_138,(__sFILE *)waitpid);
    local_38 = *(undefined8 *)this;
    internal::operator<<((basic_ostream *)&local_138,(Brief *)&local_38);
    local_138 = &PTR__OFStream_01ca1000;
    local_e8[0] = &PTR__OFStream_01ca1028;
    ppuStack_130 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_128);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
    uVar1 = GetBailoutReason(param_2);
    PrintF(", reason: %s]\n",uVar1);
  }
  return;
}


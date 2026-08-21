
/* v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo(v8::internal::Code::Kind,
   v8::internal::Zone*) */

void __thiscall
v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo
          (OptimizedCompilationInfo *this,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = param_3;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (OptimizedCompilationInfo)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)this = 0x100000000;
  *(undefined8 *)(this + 0x98) = 0;
  ConfigureFlags(this);
  return;
}


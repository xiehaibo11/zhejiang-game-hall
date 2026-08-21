
/* v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo(v8::internal::Vector<char
   const>, v8::internal::Zone*, v8::internal::Code::Kind) */

void __thiscall
v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo
          (OptimizedCompilationInfo *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined *puVar1;
  size_t sVar2;
  ulong uVar3;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = param_4;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (OptimizedCompilationInfo)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 8) = param_5;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)this = 0x100000000;
  *(undefined8 *)(this + 0x98) = 0;
  ConfigureFlags(this);
  *(undefined8 *)(this + 0x80) = param_2;
  *(undefined8 *)(this + 0x88) = param_3;
  puVar1 = FLAG_trace_turbo_filter;
  sVar2 = strlen(FLAG_trace_turbo_filter);
  uVar3 = PassesFilter(param_2,param_3,puVar1,sVar2);
  if ((uVar3 & 1) != 0) {
    if (FLAG_trace_turbo != '\0') {
      *(uint *)this = *(uint *)this | 0x2000;
    }
    if (FLAG_trace_turbo_graph != '\0') {
      *(uint *)this = *(uint *)this | 0x4000;
    }
    if (FLAG_trace_turbo_scheduled != '\0') {
      *(uint *)this = *(uint *)this | 0x8000;
    }
    if (FLAG_trace_turbo_alloc != '\0') {
      *(uint *)this = *(uint *)this | 0x10000;
    }
    if (FLAG_trace_heap_broker != '\0') {
      *(uint *)this = *(uint *)this | 0x20000;
    }
  }
  return;
}


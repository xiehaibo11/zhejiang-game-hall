
/* v8::internal::compiler::PipelineStatistics::PipelineStatistics(v8::internal::OptimizedCompilationInfo*,
   v8::internal::CompilationStatistics*, v8::internal::compiler::ZoneStats*) */

void __thiscall
v8::internal::compiler::PipelineStatistics::PipelineStatistics
          (PipelineStatistics *this,OptimizedCompilationInfo *param_1,CompilationStatistics *param_2
          ,ZoneStats *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  char *local_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(ZoneStats **)(this + 8) = param_3;
  *(CompilationStatistics **)(this + 0x10) = param_2;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    local_28 = (char *)**(undefined8 **)(param_1 + 0x18);
    iVar2 = SharedFunctionInfo::SourceSize((SharedFunctionInfo *)&local_28);
    *(long *)(this + 0x50) = (long)iVar2;
    local_50 = **(undefined8 **)(param_1 + 0x18);
    local_48 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_50);
    String::ToCString(&local_28,&local_48,1,1,0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x18),local_28);
    pcVar1 = local_28;
    local_28 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      operator_delete__(pcVar1);
    }
  }
  CommonStats::Begin((CommonStats *)(this + 0x30),this);
  return;
}


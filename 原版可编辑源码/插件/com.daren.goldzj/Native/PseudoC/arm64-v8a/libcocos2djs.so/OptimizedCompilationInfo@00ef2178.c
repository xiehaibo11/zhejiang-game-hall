
/* v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo(v8::internal::Zone*,
   v8::internal::Isolate*, v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::OptimizedCompilationInfo::OptimizedCompilationInfo
          (OptimizedCompilationInfo *this,undefined8 param_1,Isolate *param_2,ulong *param_4,
          undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_48;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (OptimizedCompilationInfo)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 8) = 0xffffffff00000000;
  *(undefined8 *)this = 0x100000000;
  *(undefined8 *)(this + 0x98) = 0;
  ConfigureFlags(this);
  uVar6 = *param_4;
  uVar4 = uVar6 & 0xffffffff00000000;
  uVar8 = uVar4 | *(uint *)(uVar6 + 0xf);
  uVar7 = uVar4 | 7;
  if ((*(short *)(uVar7 + *(uint *)(uVar8 - 1)) == 0x5b) &&
     (*(short *)(uVar7 + *(uint *)((uVar4 | *(uint *)(uVar8 + 0x13)) - 1)) == 0x86)) {
    uVar5 = *(uint *)(uVar8 + 0xf);
  }
  else {
    uVar5 = *(uint *)(uVar6 + 3);
    if (((uVar5 & 1) == 0) || (*(short *)(uVar7 + *(uint *)((uVar4 | uVar5) - 1)) != 0x86)) {
      uVar5 = *(uint *)((uVar4 | *(uint *)(uVar6 + 3)) + 3);
    }
    else {
      uVar5 = *(uint *)(uVar6 + 3);
    }
  }
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_2 + 0x95a0);
    if (puVar3 == *(ulong **)(param_2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4 | uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar4 | uVar5);
  }
  *(ulong **)(this + 0x10) = puVar3;
  *(ulong **)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = param_5;
  iVar2 = *(int *)(param_2 + 0xc620);
  iVar1 = 0;
  if ((long)iVar2 + 0x40000001U >> 0x1f == 0) {
    iVar1 = iVar2 + 1;
  }
  *(int *)(param_2 + 0xc620) = iVar1;
  *(int *)(this + 0x70) = iVar2;
  uVar4 = Isolate::NeedsDetailedOptimizedCodeLineInfo(param_2);
  if ((uVar4 & 1) != 0) {
    *(uint *)this = *(uint *)this | 0x10;
  }
  local_48 = *param_4;
  uVar4 = SharedFunctionInfo::PassesFilter((SharedFunctionInfo *)&local_48,FLAG_trace_turbo_filter);
  if ((uVar4 & 1) != 0) {
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


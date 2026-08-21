
/* v8::internal::OptimizedCompilationInfo::AddInlinedFunction(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::BytecodeArray>, v8::internal::SourcePosition) */

ulong __thiscall
v8::internal::OptimizedCompilationInfo::AddInlinedFunction
          (OptimizedCompilationInfo *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 0x58);
  uStack_40 = 0xffffffff;
  puVar1 = *(undefined8 **)(this + 0x60);
  local_58 = param_2;
  uStack_50 = param_3;
  local_48 = param_4;
  if (puVar1 < *(undefined8 **)(this + 0x68)) {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    puVar1[3] = CONCAT44(uStack_3c,0xffffffff);
    puVar1[2] = param_4;
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + 0x20;
  }
  else {
    std::__ndk1::
    vector<v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder,std::__ndk1::allocator<v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder>>
    ::__push_back_slow_path<v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder>
              ((vector<v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder,std::__ndk1::allocator<v8::internal::OptimizedCompilationInfo::InlinedFunctionHolder>>
                *)(this + 0x58),(InlinedFunctionHolder *)&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return (ulong)((long)puVar1 - lVar3) >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


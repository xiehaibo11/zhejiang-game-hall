
/* v8::ScriptCompiler::Compile(v8::Local<v8::Context>, v8::ScriptCompiler::Source*,
   v8::ScriptCompiler::CompileOptions, v8::ScriptCompiler::NoCacheReason) */

undefined8
v8::ScriptCompiler::Compile(Context *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  CanonicalHandleScope *this;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  
  if ((*(byte *)(param_2 + 0x20) >> 3 & 1) == 0) {
LAB_00eab6a0:
    lVar1 = CompileUnboundInternal((ulong)*(uint *)(param_1 + 4) << 0x20,param_2,param_3,param_4);
    uVar3 = 0;
    if (lVar1 != 0) {
      Context::Enter(param_1);
      pIVar5 = (Isolate *)((ulong)*(uint *)(lVar1 + 4) << 0x20);
      uVar4 = *(ulong *)(pIVar5 + 0x2bc8) & 0xffffffff00000000;
      this = *(CanonicalHandleScope **)((ulong)*(uint *)(lVar1 + 4) << 0x20 | 0x95b8);
      uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar5 + 0x2bc8) - 1)) + 0x13);
      if (this == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar2 = (ulong *)internal::HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup(this,uVar4);
      }
      uVar3 = internal::Factory::NewFunctionFromSharedFunctionInfo((Factory *)pIVar5,lVar1,puVar2,1)
      ;
      Context::Exit(param_1);
    }
    return uVar3;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("v8::ScriptCompiler::Compile",
                 "v8::ScriptCompiler::CompileModule must be used to compile modules");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      goto LAB_00eab6a0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ScriptCompiler::Compile",
             "v8::ScriptCompiler::CompileModule must be used to compile modules");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}



/* v8::Module::GetUnboundModuleScript() */

void __thiscall v8::Module::GetUnboundModuleScript(Module *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  CanonicalHandleScope *this_00;
  Isolate *pIVar5;
  ulong local_28;
  
  local_28 = *(ulong *)this;
  uVar1 = *(int *)(local_28 + 0xb) >> 1;
  if (uVar1 < 4) {
LAB_00eaa1a0:
    if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x44) {
      uVar3 = internal::SourceTextModule::GetSharedFunctionInfo((SourceTextModule *)&local_28);
      this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(this + 4) << 0x20 | 0x95b8);
      if (this_00 == (CanonicalHandleScope *)0x0) {
        pIVar5 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
        puVar4 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar4 = (ulong *)internal::HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar3;
      }
      else {
        internal::CanonicalHandleScope::Lookup(this_00,uVar3);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","self->IsSourceTextModule()");
  }
  if (2 < uVar1 - 4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Module::GetUnboundScript",
                 "v8::Module::GetUnboundScript must be used on an unevaluated module");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      local_28 = *(ulong *)this;
      goto LAB_00eaa1a0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Module::GetUnboundScript",
             "v8::Module::GetUnboundScript must be used on an unevaluated module");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}


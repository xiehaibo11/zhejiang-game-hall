
/* v8::Module::GetException() const */

void __thiscall v8::Module::GetException(Module *this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar1 = *(int *)(local_18 + 0xb) >> 1;
  if (5 < uVar1) {
    if (uVar1 != 6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
LAB_00ea9b2c:
    pIVar5 = (Isolate *)(local_18 & 0xffffffff00000000);
    uVar3 = internal::Module::GetException((Module *)&local_18);
    if (*(CanonicalHandleScope **)((ulong)pIVar5 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      internal::CanonicalHandleScope::Lookup
                (*(CanonicalHandleScope **)((ulong)pIVar5 | 0x95b8),uVar3);
    }
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))("v8::Module::GetException","Module status must be kErrored");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      local_18 = *(ulong *)this;
      goto LAB_00ea9b2c;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Module::GetException",
             "Module status must be kErrored");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}


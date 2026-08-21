
/* v8::Module::GetModuleRequest(int) const */

void __thiscall v8::Module::GetModuleRequest(Module *this,int param_1)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  CanonicalHandleScope *pCVar4;
  Isolate *pIVar5;
  ulong local_48;
  ulong local_28;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i >= 0");
  }
  local_48 = *(ulong *)this;
  pIVar5 = (Isolate *)(local_48 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x44) {
    if ((*(uint *)(local_48 + 0xb) & 0xfffffffe) == 0xc) {
      uVar1 = (ulong)pIVar5 | (ulong)*(uint *)(local_48 + 0x17);
    }
    else {
      uVar1 = internal::SourceTextModule::GetSharedFunctionInfo((SourceTextModule *)&local_48);
      pIVar2 = (Isolate *)(uVar1 & 0xffffffff00000000);
      if (((*(uint *)(uVar1 + 7) & 1) == 0) ||
         (local_28 = (ulong)pIVar2 | (ulong)*(uint *)(uVar1 + 7),
         *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x83)) {
        local_28 = internal::ScopeInfo::Empty(pIVar2);
      }
      uVar1 = internal::ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_28);
    }
    pCVar4 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
    uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7);
    if (pCVar4 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar4,uVar1);
    }
    uVar1 = *puVar3;
    if (param_1 < *(int *)(uVar1 + 3) >> 1) {
      pCVar4 = *(CanonicalHandleScope **)(pIVar5 + 0x95b8);
      uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + (long)(param_1 << 2) + 7);
      if (pCVar4 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar3 = (ulong *)internal::HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar1;
      }
      else {
        internal::CanonicalHandleScope::Lookup(pCVar4,uVar1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i < module_requests->length()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","self->IsSourceTextModule()");
}



/* v8::Module::GetModuleRequestsLength() const */

int __thiscall v8::Module::GetModuleRequestsLength(Module *this)

{
  int iVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = *(ulong *)this;
  if (*(short *)((local_20 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_20 - 1)) == 0x45) {
    iVar1 = 0;
  }
  else {
    if ((*(uint *)(local_20 + 0xb) & 0xfffffffe) == 0xc) {
      uVar2 = local_20 & 0xffffffff00000000 | (ulong)*(uint *)(local_20 + 0x17);
    }
    else {
      uVar2 = internal::SourceTextModule::GetSharedFunctionInfo((SourceTextModule *)&local_20);
      pIVar3 = (Isolate *)(uVar2 & 0xffffffff00000000);
      if (((*(uint *)(uVar2 + 7) & 1) == 0) ||
         (local_18 = (ulong)pIVar3 | (ulong)*(uint *)(uVar2 + 7),
         *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x83)) {
        local_18 = internal::ScopeInfo::Empty(pIVar3);
      }
      uVar2 = internal::ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_18);
    }
    iVar1 = *(int *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 7)) + 3) >> 1;
  }
  return iVar1;
}


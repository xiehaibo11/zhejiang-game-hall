
/* v8::Module::GetModuleRequestLocation(int) const */

ulong __thiscall v8::Module::GetModuleRequestLocation(Module *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong uVar7;
  CanonicalHandleScope *pCVar8;
  Isolate *pIVar9;
  long lVar10;
  undefined8 uVar11;
  ulong local_78 [2];
  ulong local_68;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i >= 0");
  }
  uVar7 = (ulong)*(uint *)(this + 4);
  piVar1 = (int *)(uVar7 << 0x20 | 0x95b0);
  puVar2 = (undefined8 *)(uVar7 << 0x20 | 0x95a0);
  plVar3 = (long *)(uVar7 << 0x20 | 0x95a8);
  uVar11 = *puVar2;
  lVar10 = *plVar3;
  *piVar1 = *piVar1 + 1;
  local_68 = *(ulong *)this;
  if (*(short *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) == 0x44) {
    pIVar9 = (Isolate *)(uVar7 << 0x20);
    if ((*(uint *)(local_68 + 0xb) & 0xfffffffe) == 0xc) {
      uVar7 = local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 + 0x17);
    }
    else {
      uVar7 = internal::SourceTextModule::GetSharedFunctionInfo((SourceTextModule *)&local_68);
      pIVar5 = (Isolate *)(uVar7 & 0xffffffff00000000);
      if (((*(uint *)(uVar7 + 7) & 1) == 0) ||
         (local_78[0] = (ulong)pIVar5 | (ulong)*(uint *)(uVar7 + 7),
         *(short *)(((ulong)pIVar5 | 7) + (ulong)*(uint *)(local_78[0] - 1)) != 0x83)) {
        local_78[0] = internal::ScopeInfo::Empty(pIVar5);
      }
      uVar7 = internal::ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)local_78);
    }
    pCVar8 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1b);
    if (pCVar8 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar6 == (ulong *)*plVar3) {
        puVar6 = (ulong *)internal::HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar8,uVar7);
    }
    if (param_1 < *(int *)(*puVar6 + 3) >> 1) {
      iVar4 = *(int *)(*puVar6 + (long)(param_1 << 2) + 7);
      pCVar8 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar7 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x27);
      if (pCVar8 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar6 == (ulong *)*plVar3) {
          puVar6 = (ulong *)internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar7;
      }
      else {
        puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar8,uVar7);
      }
      local_78[0] = 0xffffffffffffffff;
      local_78[1] = 0xffffffffffffffff;
      internal::Script::GetPositionInfo(puVar6,iVar4 >> 1,local_78,1);
      uVar7 = local_78[0];
      *puVar2 = uVar11;
      *piVar1 = *piVar1 + -1;
      if (*plVar3 != lVar10) {
        *plVar3 = lVar10;
        internal::HandleScope::DeleteExtensions(pIVar9);
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i < module_request_positions->length()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","self->IsSourceTextModule()");
}



/* v8::internal::Module::RecordError(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall v8::internal::Module::RecordError(Module *this,long param_1,ulong *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_58;
  ulong local_38;
  
  uVar6 = *(ulong *)this;
  pIVar2 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x44) goto LAB_010f3100;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  local_58 = uVar6;
  if ((*(uint *)(uVar6 + 0xb) & 0xfffffffe) == 0xc) {
    uVar1 = *(uint *)(uVar6 + 0x17);
    uVar7 = uVar6 & 0xffffffff00000000 | (ulong)uVar1;
    *(uint *)(uVar6 + 0x17) = uVar1;
    if ((uVar1 & 1) != 0) {
LAB_010f30b0:
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x17,uVar7);
      }
    }
  }
  else {
    uVar7 = SourceTextModule::GetSharedFunctionInfo((SourceTextModule *)&local_58);
    pIVar2 = (Isolate *)(uVar7 & 0xffffffff00000000);
    if (((*(uint *)(uVar7 + 7) & 1) == 0) ||
       (local_38 = (ulong)pIVar2 | (ulong)*(uint *)(uVar7 + 7),
       *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
      local_38 = ScopeInfo::Empty(pIVar2);
    }
    uVar7 = ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_38);
    *(int *)(uVar6 + 0x17) = (int)uVar7;
    if ((uVar7 & 1) != 0) goto LAB_010f30b0;
  }
  uVar6 = *(ulong *)this;
LAB_010f3100:
  *(undefined4 *)(uVar6 + 0xb) = 0xc;
  uVar6 = *param_3;
  if ((int)uVar6 == *(int *)(param_1 + 0x188)) {
    uVar6 = *(ulong *)(param_1 + 0xb0);
  }
  *(int *)(*(long *)this + 0x13) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)this;
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar4 = uVar7 + 0x13;
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar4,uVar6);
      uVar7 = *(ulong *)this;
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      lVar4 = uVar7 + 0x13;
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,lVar4,uVar6);
    }
  }
  return;
}



/* v8::internal::Compiler::PostInstantiation(v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::Compiler::PostInstantiation(ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  CanonicalHandleScope *pCVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong local_50;
  char local_48;
  
  pIVar6 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar7 = (ulong)pIVar6 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar3 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar7);
    uVar7 = *puVar4;
  }
  IsCompiledScope::IsCompiledScope((IsCompiledScope *)&local_50,uVar7,uVar7 & 0xffffffff00000000);
  if (local_48 != '\0') {
    puVar1 = (uint *)(*puVar4 + 3);
    uVar2 = *puVar1;
    uVar7 = *puVar4 & 0xffffffff00000000;
    if ((((uVar2 & 1) != 0) &&
        (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) == 0x86)) ||
       ((uVar2 = *puVar1, (uVar2 & 1) != 0 &&
        (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) == 0x61)))) {
      JSFunction::InitializeFeedbackCell(param_1);
      uVar5 = *param_1;
      uVar7 = uVar5 & 0xffffffff00000000;
      uVar2 = *(uint *)((uVar7 | *(uint *)(uVar5 + 0xb)) + 3);
      if ((uVar2 != 0x84) &&
         ((((uVar2 & 1) == 0 ||
           (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) - 0x95)) &&
          (*(short *)((uVar7 | 7) +
                     (ulong)*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar5 + 0x13)) + 3)) - 1
                                     )) == 0x9f)))) {
        uVar5 = *param_1;
        uVar7 = uVar5 & 0xffffffff00000000;
        uVar2 = *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar5 + 0x13)) + 3)) + 7);
        uVar7 = (ulong)uVar2 & 0xfffffffffffffffd | uVar7;
        if ((uVar2 & (ulong)uVar2 != 3) == 0) {
          uVar7 = 0;
        }
        if ((((int)uVar7 != 0) && (*(int *)(uVar5 + 0x17) = (int)uVar7, (uVar7 & 1) != 0)) &&
           ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
          Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x17);
        }
      }
      if (((FLAG_always_opt != '\0') && ((*(uint *)(*puVar4 + 0x1b) >> 0xc & 1) != 0)) &&
         ((*(uint *)(*puVar4 + 0x1b) & 0xf00000) == 0)) {
        uVar5 = *param_1;
        uVar7 = uVar5 & 0xffffffff00000000;
        if (*(int *)((uVar7 | *(uint *)(uVar5 + 0x17)) + 0x27) != 0x42) {
          uVar2 = *(uint *)((uVar7 | *(uint *)(uVar5 + 0xb)) + 3);
          if ((uVar2 != 0x84) &&
             (((((uVar2 & 1) == 0 ||
                (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) - 0x95)) &&
               ((*(byte *)((uVar7 | *(uint *)(uVar5 + 0x17)) + 0x17) & 0x3e) == 0)) &&
              ((*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar5 + 0x17)) + 0xf)) + 7) & 1) ==
               0)))) goto LAB_00ee66b8;
        }
        local_50 = *param_1;
        uVar7 = JSFunction::HasOptimizedCode((JSFunction *)&local_50);
        if ((uVar7 & 1) == 0) {
          JSFunction::EnsureFeedbackVector(param_1);
          local_50 = *param_1;
          JSFunction::MarkForOptimization((JSFunction *)&local_50,0);
        }
      }
    }
  }
LAB_00ee66b8:
  uVar7 = *puVar4;
  if (((*(uint *)(uVar7 + 0x1b) >> 0x1c & 1) != 0) || ((*(uint *)(uVar7 + 0x1b) & 0x380) == 0x200))
  {
    uVar5 = uVar7 & 0xffffffff00000000;
    uVar7 = uVar5 | *(uint *)(uVar7 + 0xf);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x5b) {
      uVar7 = uVar5 | *(uint *)(uVar7 + 0xb);
    }
    pCVar3 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
    if (pCVar3 == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar7);
    }
    Debug::OnAfterCompile(*(Debug **)(pIVar6 + 0xb6c8),puVar4);
  }
  return;
}


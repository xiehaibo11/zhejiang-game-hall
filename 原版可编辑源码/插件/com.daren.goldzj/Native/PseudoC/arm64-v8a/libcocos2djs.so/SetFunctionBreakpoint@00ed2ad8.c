
/* v8::debug::SetFunctionBreakpoint(v8::Local<v8::Function>, v8::Local<v8::String>, int*) */

undefined8 v8::debug::SetFunctionBreakpoint(ulong *param_1,Isolate *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  Debug *pDVar6;
  
  uVar5 = *param_1;
  pIVar2 = (Isolate *)(uVar5 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439) {
    pDVar6 = *(Debug **)(pIVar2 + 0xb6c8);
    pIVar1 = pIVar2 + 200;
    if (param_2 != (Isolate *)0x0) {
      pIVar1 = param_2;
    }
    uVar5 = (ulong)pIVar2 | (ulong)*(uint *)(uVar5 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
    }
    uVar4 = internal::Debug::SetBreakpointForFunction(pDVar6,puVar3,pIVar1,param_3);
    return uVar4;
  }
  return 0;
}



/* v8::internal::wasm::AsmFunctionType::CanBeInvokedWith(v8::internal::wasm::AsmType*,
   v8::internal::ZoneVector<v8::internal::wasm::AsmType*> const&) */

undefined8 __thiscall
v8::internal::wasm::AsmFunctionType::CanBeInvokedWith
          (AsmFunctionType *this,AsmType *param_1,ZoneVector *param_2)

{
  long *plVar1;
  ulong uVar2;
  AsmType *pAVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  pAVar3 = *(AsmType **)(this + 8);
  if (pAVar3 == (AsmType *)0x0) {
    if (param_1 != (AsmType *)0x0) {
      return 0;
    }
  }
  else if (((ulong)pAVar3 & 1) == 0) {
    if (pAVar3 != param_1) {
      return 0;
    }
  }
  else {
    if (((ulong)param_1 & 1) == 0) {
      return 0;
    }
    if (1 < ((uint)pAVar3 ^ (uint)param_1)) {
      return 0;
    }
  }
  lVar4 = *(long *)(this + 0x10);
  lVar5 = *(long *)(this + 0x18);
  lVar6 = *(long *)param_2;
  if (lVar5 - lVar4 != *(long *)(param_2 + 8) - lVar6) {
    return 0;
  }
  if (lVar5 != lVar4) {
    uVar7 = 0;
    while( true ) {
      plVar1 = *(long **)(lVar6 + uVar7 * 8);
      uVar2 = *(ulong *)(lVar4 + uVar7 * 8);
      if (((ulong)plVar1 & 1) == 0) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar2 = (**(code **)(*plVar1 + 0x30))();
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar4 = *(long *)(this + 0x10);
        lVar5 = *(long *)(this + 0x18);
      }
      else {
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (((uint)uVar2 & ((uint)plVar1 ^ 0xffffffff) & 0xfffffffe) != 0) {
          return 0;
        }
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar5 - lVar4 >> 3) <= uVar7) break;
      lVar6 = *(long *)param_2;
    }
  }
  return 1;
}


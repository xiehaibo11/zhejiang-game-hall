
/* v8::internal::wasm::AsmOverloadedFunctionType::CanBeInvokedWith(v8::internal::wasm::AsmType*,
   v8::internal::ZoneVector<v8::internal::wasm::AsmType*> const&) */

undefined8 __thiscall
v8::internal::wasm::AsmOverloadedFunctionType::CanBeInvokedWith
          (AsmOverloadedFunctionType *this,AsmType *param_1,ZoneVector *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar4;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar3) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      if (((ulong)plVar2 & 1) != 0) {
        plVar2 = (long *)0x0;
      }
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      lVar3 = *(long *)(this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 0x10) - lVar3 >> 3));
  }
  return 0;
}


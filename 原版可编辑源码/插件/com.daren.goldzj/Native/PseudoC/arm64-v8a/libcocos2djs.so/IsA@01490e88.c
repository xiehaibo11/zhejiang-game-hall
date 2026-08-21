
/* v8::internal::wasm::AsmFunctionType::IsA(v8::internal::wasm::AsmType*) */

undefined8 __thiscall
v8::internal::wasm::AsmFunctionType::IsA(AsmFunctionType *this,AsmType *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (((ulong)param_1 & 1) == 0) {
    lVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar2 = *(ulong *)(lVar1 + 8);
    if (uVar3 == 0) {
      if (uVar2 != 0) {
        return 0;
      }
    }
    else if ((uVar3 & 1) == 0) {
      if (uVar3 != uVar2) {
        return 0;
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (1 < ((uint)uVar2 ^ (uint)uVar3)) {
        return 0;
      }
    }
    lVar4 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
    uVar2 = lVar4 >> 3;
    if (uVar2 == *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10) >> 3) {
      if (lVar4 == 0) {
        return 1;
      }
      uVar3 = 0;
      do {
        uVar6 = *(ulong *)(*(long *)(this + 0x10) + uVar3 * 8);
        uVar5 = *(ulong *)(*(long *)(lVar1 + 0x10) + uVar3 * 8);
        if (uVar6 == 0) {
          if (uVar5 != 0) {
            return 0;
          }
        }
        else if ((uVar6 & 1) == 0) {
          if (uVar6 != uVar5) {
            return 0;
          }
        }
        else {
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          if (1 < ((uint)uVar5 ^ (uint)uVar6)) {
            return 0;
          }
        }
        uVar3 = uVar3 + 1;
        if (uVar2 <= uVar3) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


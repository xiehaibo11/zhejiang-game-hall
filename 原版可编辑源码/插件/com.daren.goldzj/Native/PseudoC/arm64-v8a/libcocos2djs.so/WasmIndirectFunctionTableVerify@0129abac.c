
/* v8::internal::TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify(v8::internal::WasmIndirectFunctionTable,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x74) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWasmIndirectFunctionTable()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x46)))) {
    uVar1 = *(uint *)(local_38 + 0x1b);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf))
    {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","refs__value.IsFixedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "managed_native_allocations__value.IsOddball() || managed_native_allocations__value.IsForeign()"
          );
}


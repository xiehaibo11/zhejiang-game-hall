
/* v8::internal::TorqueGeneratedClassVerifiers::AsmWasmDataVerify(v8::internal::AsmWasmData,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::AsmWasmDataVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x57) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsAsmWasmData()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","managed_native_module__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","export_wrappers__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x85)) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x42)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","uses_bitset__value.IsHeapNumber()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","asm_js_offset_table__value.IsByteArray()");
}


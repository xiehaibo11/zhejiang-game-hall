
/* v8::internal::TorqueGeneratedClassVerifiers::DataHandlerVerify(v8::internal::DataHandler,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::DataHandlerVerify
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
  if ((*(ushort *)(uVar3 + *(uint *)(local_38 - 1)) & 0xfffe) != 0x4c) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsDataHandler()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x9a)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","smi_handler__value.IsSmi() || smi_handler__value.IsCode()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x99)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","validity_cell__value.IsSmi() || validity_cell__value.IsCell()");
  }
  return;
}


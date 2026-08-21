
/* v8::internal::TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify(v8::internal::ArrayBoilerplateDescription,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x56) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsArrayBoilerplateDescription()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_38 + 7);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) - 0x76 < 0x12)
       ) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","constant_elements__value.IsFixedArrayBase()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
}


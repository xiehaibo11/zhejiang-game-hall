
/* v8::internal::TorqueGeneratedClassVerifiers::PrototypeInfoVerify(v8::internal::PrototypeInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PrototypeInfoVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 100) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsPrototypeInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xac)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "js_module_namespace__value.IsOddball() || js_module_namespace__value.IsJSModuleNamespace()"
            );
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa7)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "prototype_users__value.IsSmi() || prototype_users__value.IsWeakArrayList()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","registry_slot__value.IsSmi()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xf));
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  MaybeObject::VerifyMaybeObjectPointer(param_2,uVar3);
  if (uVar1 != 3) {
    if ((uVar1 & 1) != 0) {
      uVar3 = uVar2 | (ulong)uVar1 & 0xfffffffffffffffd;
    }
    if ((~uVar1 & 3) == 0) {
      if (((uVar3 & 1) == 0) ||
         (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2)) {
LAB_012986bc:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "object_create_map__value.IsCleared() || (!object_create_map__value.IsWeak() && object_create_map__value.GetHeapObjectOrSmi().IsOddball()) || (object_create_map__value.IsWeak() && object_create_map__value.GetHeapObjectOrSmi().IsMap())"
                );
      }
    }
    else if (((uVar3 & 1) == 0) ||
            (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x43))
    goto LAB_012986bc;
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","bit_field__value.IsSmi()");
  }
  return;
}



/* v8::internal::TorqueGeneratedClassVerifiers::ModuleVerify(v8::internal::Module,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ModuleVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar4 = uVar3 | 7, *(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if ((*(ushort *)(uVar4 + *(uint *)(param_1 - 1)) & 0xfffe) != 0x44) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsModule()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(ushort *)(uVar4 + *(uint *)(uVar2 - 1)) - 0x77 < 10)) {
    uVar1 = *(uint *)(param_1 + 7);
    Object::VerifyPointer(param_2,uVar3 | uVar1);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","hash__value.IsSmi()");
    }
    uVar1 = *(uint *)(param_1 + 0xb);
    Object::VerifyPointer(param_2,uVar3 | uVar1);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0xf);
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) != 0) &&
         ((*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0x43 ||
          (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0xac)))) {
        Object::VerifyPointer(param_2,uVar3 | *(uint *)(param_1 + 0x13));
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "module_namespace__value.IsOddball() || module_namespace__value.IsJSModuleNamespace()"
              );
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","status__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","exports__value.IsObjectHashTable()");
}



/* v8::internal::SloppyArgumentsElements::SloppyArgumentsElementsVerify(v8::internal::Isolate*,
   v8::internal::JSObject) */

void __thiscall
v8::internal::SloppyArgumentsElements::SloppyArgumentsElementsVerify
          (SloppyArgumentsElements *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::FixedArrayVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  uVar1 = *(uint *)(uVar3 + 0xb);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) {
    uVar4 = uVar3 & 0xffffffff00000000;
    if (0xe < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFixedArray()");
    }
    if (*(int *)(uVar3 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","length() >= 2");
    }
    if (*(int *)(uVar3 - 1) != *(int *)(param_1 + 0x270)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map() == ReadOnlyRoots(isolate).sloppy_arguments_elements_map()"
              );
    }
    uVar2 = *(uint *)((uVar4 | uVar1) + 3);
    if (uVar2 < 2) {
      if (uVar1 != *(uint *)(param_1 + 0x168)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","arg_elements == ReadOnlyRoots(isolate).empty_fixed_array()");
      }
    }
    else {
      if (*(int *)((uVar4 | *(uint *)(uVar3 + 7)) + 3) < 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","nofMappedParameters <= context_object.length()");
      }
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","nofMappedParameters <= arg_elements.length()");
      }
    }
  }
  return;
}


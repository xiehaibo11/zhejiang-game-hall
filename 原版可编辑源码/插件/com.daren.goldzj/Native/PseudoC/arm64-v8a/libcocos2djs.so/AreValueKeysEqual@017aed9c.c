
/* v8::internal::compiler::StateValuesCache::AreValueKeysEqual(v8::internal::compiler::StateValuesCache::StateValuesKey*,
   v8::internal::compiler::StateValuesCache::StateValuesKey*) */

undefined8
v8::internal::compiler::StateValuesCache::AreValueKeysEqual
          (StateValuesKey *param_1,StateValuesKey *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) &&
     (uVar1 = compiler::operator!=
                        ((SparseInputMask *)(param_1 + 0x10),(SparseInputMask *)(param_2 + 0x10)),
     (uVar1 & 1) == 0)) {
    if (*(ulong *)(param_1 + 8) != 0) {
      uVar1 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 0x18) + uVar1 * 8) !=
            *(long *)(*(long *)(param_2 + 0x18) + uVar1 * 8)) goto LAB_017aee0c;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(param_1 + 8));
    }
    uVar2 = 1;
  }
  else {
LAB_017aee0c:
    uVar2 = 0;
  }
  return uVar2;
}


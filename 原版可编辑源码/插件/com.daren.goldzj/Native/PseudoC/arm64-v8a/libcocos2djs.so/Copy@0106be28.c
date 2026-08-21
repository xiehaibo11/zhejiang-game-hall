
/* v8::internal::MutableBigInt::Copy(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>) */

long * v8::internal::MutableBigInt::Copy(Factory *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(*(uint *)(*param_2 + 3) >> 1) & 0x3fffffff;
  if ((uint)uVar3 < 0x1000001) {
    plVar1 = (long *)Factory::NewBigInt(param_1,uVar3,0);
    *(uint *)(*plVar1 + 3) = (uint)uVar3 << 1;
    if (plVar1 != (long *)0x0) {
      memcpy((void *)(*plVar1 + 7),(void *)(*param_2 + 7),uVar3 << 3);
      return plVar1;
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar2 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}


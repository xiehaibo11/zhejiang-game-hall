
/* v8::internal::MutableBigInt::New(v8::internal::Isolate*, int, v8::internal::AllocationType) */

long * v8::internal::MutableBigInt::New(Factory *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 < 0x1000001) {
    plVar2 = (long *)Factory::NewBigInt(param_1);
    *(int *)(*plVar2 + 3) = param_2 << 1;
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar1 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar1,0);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


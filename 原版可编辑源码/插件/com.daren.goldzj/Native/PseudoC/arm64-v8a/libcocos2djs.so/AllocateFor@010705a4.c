
/* v8::internal::BigInt::AllocateFor(v8::internal::Isolate*, int, int, v8::internal::ShouldThrow,
   v8::internal::AllocationType) */

long * v8::internal::BigInt::AllocateFor
                 (Factory *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)(byte)"Aborting on invalid BigInt length"[(long)param_2 + 0x22];
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = 0xffffffffffffffe0 / uVar3;
  }
  if (((ulong)(long)param_3 <= uVar4) && (uVar4 = uVar3 * (long)param_3 + 0x1f, uVar4 >> 0x24 == 0))
  {
    uVar4 = (uVar4 >> 5) + 0x3f >> 6;
    if ((int)uVar4 < 0x1000001) {
      plVar1 = (long *)Factory::NewBigInt(param_1,uVar4 & 0xffffffff,param_5);
      *(int *)(*plVar1 + 3) = (int)uVar4 << 1;
      if (plVar1 != (long *)0x0) {
        memset((void *)(*plVar1 + 7),0,uVar4 << 3);
        return plVar1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  if (param_4 == 0) {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar2 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
  }
  return (long *)0x0;
}



/* v8::internal::BigInt::AsUintN(v8::internal::Isolate*, unsigned long,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::AsUintN(Factory *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *param_3;
  if ((*(uint *)(lVar3 + 3) & 0x7ffffffe) != 0) {
    if (param_2 == 0) {
      param_3 = (long *)Factory::NewBigInt(param_1,0,0);
      *(undefined4 *)(*param_3 + 3) = 0;
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      MutableBigInt::Canonicalize(*param_3);
    }
    else if ((*(uint *)(lVar3 + 3) & 1) == 0) {
      if (param_2 >> 0x1e == 0) {
        uVar5 = param_2 + 0x3f >> 6;
        uVar4 = (uint)uVar5;
        if (((int)uVar4 <= (int)(*(uint *)(lVar3 + 3) >> 1 & 0x3fffffff)) &&
           (((*(uint *)(lVar3 + 3) >> 1 & 0x3fffffff) != uVar4 ||
            (((param_2 & 0x3f) != 0 &&
             (*(ulong *)(lVar3 + ((long)((uVar5 << 0x23) + -0x800000000) >> 0x20 | 7U)) >>
              ((uint)param_2 & 0x3f) != 0)))))) {
          plVar1 = (long *)MutableBigInt::TruncateToNBits(param_1,param_2,param_3);
          return plVar1;
        }
      }
    }
    else {
      if (param_2 < 0x40000001) {
        plVar1 = (long *)MutableBigInt::TruncateAndSubFromPowerOfTwo(param_1,param_2,param_3,0);
        return plVar1;
      }
      if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on invalid BigInt length");
      }
      puVar2 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
      Isolate::Throw((Isolate *)param_1,*puVar2,0);
      param_3 = (long *)0x0;
    }
  }
  return param_3;
}


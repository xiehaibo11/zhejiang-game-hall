
/* v8::internal::MutableBigInt::AbsoluteSub(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>, bool) */

long * v8::internal::MutableBigInt::AbsoluteSub
                 (Factory *param_1,long *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *param_2;
  plVar2 = param_2;
  if ((*(uint *)(lVar4 + 3) & 0x7ffffffe) != 0) {
    if ((*(uint *)(*param_3 + 3) & 0x7ffffffe) != 0) {
      uVar1 = *(uint *)(lVar4 + 3) >> 1 & 0x3fffffff;
      if (uVar1 < 0x1000001) {
        plVar2 = (long *)Factory::NewBigInt(param_1,uVar1,0);
        *(uint *)(*plVar2 + 3) = uVar1 << 1;
        if (plVar2 != (long *)0x0) {
          AbsoluteSub(*plVar2,*param_2,*param_3);
          *(uint *)(*plVar2 + 3) = *(uint *)(*plVar2 + 3) & 0xfffffffe | param_4 & 1;
          Canonicalize(*plVar2);
          return plVar2;
        }
      }
      else {
        if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Aborting on invalid BigInt length");
        }
        puVar3 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
        Isolate::Throw((Isolate *)param_1,*puVar3,0);
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if ((((*(uint *)(lVar4 + 3) ^ param_4) & 1) != 0) && ((*(uint *)(lVar4 + 3) & 0x7ffffffe) != 0))
    {
      plVar2 = (long *)Copy(param_1,param_2);
      *(uint *)(*plVar2 + 3) =
           (*(uint *)(*plVar2 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1) ^ 1;
      Canonicalize(*plVar2);
    }
  }
  return plVar2;
}


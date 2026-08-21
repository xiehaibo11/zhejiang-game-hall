
/* v8::internal::MutableBigInt::AbsoluteSubOne(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, int) */

long * v8::internal::MutableBigInt::AbsoluteSubOne(Factory *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((int)param_3 < 0x1000001) {
    plVar2 = (long *)Factory::NewBigInt(param_1,param_3,0);
    *(uint *)(*plVar2 + 3) = param_3 << 1;
    if (plVar2 != (long *)0x0) {
      lVar6 = *param_2;
      uVar4 = (ulong)(*(uint *)(lVar6 + 3) >> 1) & 0x3fffffff;
      if ((int)uVar4 == 0) {
        uVar3 = 1;
      }
      else {
        uVar5 = 0;
        uVar3 = 1;
        while( true ) {
          uVar8 = uVar5 & 0xfffffff8 | 7;
          uVar7 = *(ulong *)(lVar6 + uVar8);
          lVar6 = uVar7 - uVar3;
          uVar3 = -(ulong)(uVar7 < uVar3) & 1;
          *(long *)(*plVar2 + uVar8) = lVar6;
          if (uVar4 * 8 - 8 == uVar5) break;
          lVar6 = *param_2;
          uVar5 = uVar5 + 8;
        }
      }
      if ((int)uVar4 < (int)param_3) {
        uVar5 = uVar4 << 3;
        lVar6 = param_3 - uVar4;
        do {
          uVar4 = uVar5 & 0xfffffff8;
          lVar6 = lVar6 + -1;
          uVar5 = uVar5 + 8;
          *(ulong *)(*plVar2 + (uVar4 | 7)) = uVar3;
        } while (lVar6 != 0);
      }
    }
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


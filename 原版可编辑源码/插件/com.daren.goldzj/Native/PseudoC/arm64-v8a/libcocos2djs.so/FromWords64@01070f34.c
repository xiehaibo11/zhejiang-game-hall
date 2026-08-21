
/* v8::internal::BigInt::FromWords64(v8::internal::Isolate*, int, int, unsigned long const*) */

long * v8::internal::BigInt::FromWords64(Isolate *param_1,int param_2,int param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((uint)param_3 < 0x1000001) {
    if (param_3 == 0) {
      plVar5 = (long *)Factory::NewBigInt((Factory *)param_1,0,0);
      *(undefined4 *)(*plVar5 + 3) = 0;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      lVar2 = *plVar5;
    }
    else {
      plVar5 = (long *)Factory::NewBigInt((Factory *)param_1,param_3,0);
      *(int *)(*plVar5 + 3) = param_3 << 1;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar3 = 0;
      *(uint *)(*plVar5 + 3) = *(uint *)(*plVar5 + 3) & 0xfffffffe | (uint)(param_2 != 0);
      lVar2 = *plVar5;
      do {
        puVar1 = (undefined8 *)((long)param_4 + uVar3);
        uVar4 = uVar3 & 0xfffffff8;
        uVar3 = uVar3 + 8;
        *(undefined8 *)(lVar2 + (uVar4 | 7)) = *puVar1;
        lVar2 = *plVar5;
      } while ((ulong)(uint)param_3 * 8 - uVar3 != 0);
    }
    MutableBigInt::Canonicalize(lVar2);
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar1 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xb8,0,0,0);
    Isolate::Throw(param_1,*puVar1,0);
    plVar5 = (long *)0x0;
  }
  return plVar5;
}


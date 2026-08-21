
/* v8::internal::MutableBigInt::SpecialLeftShift(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, int,
   v8::internal::MutableBigInt::SpecialLeftShiftMode) */

long * v8::internal::MutableBigInt::SpecialLeftShift
                 (Factory *param_1,long *param_2,ulong param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = (ulong)(*(uint *)(*param_2 + 3) >> 1) & 0x3fffffff;
  uVar8 = (uint)uVar9;
  uVar1 = uVar8;
  if (param_4 == 1) {
    uVar1 = uVar8 + 1;
  }
  if (uVar1 < 0x1000001) {
    plVar3 = (long *)Factory::NewBigInt(param_1,uVar1,0);
    *(uint *)(*plVar3 + 3) = uVar1 << 1;
    if (plVar3 != (long *)0x0) {
      if ((int)param_3 == 0) {
        if (uVar8 != 0) {
          uVar4 = 0;
          do {
            uVar5 = uVar4 & 0xfffffff8 | 7;
            uVar4 = uVar4 + 8;
            *(undefined8 *)(*plVar3 + uVar5) = *(undefined8 *)(*param_2 + uVar5);
          } while (uVar9 * 8 - uVar4 != 0);
        }
        if (param_4 == 1) {
          *(undefined8 *)(*plVar3 + ((ulong)(uVar8 << 3) | 7)) = 0;
        }
      }
      else {
        if (uVar8 == 0) {
          uVar4 = 0;
        }
        else {
          uVar5 = 0;
          uVar4 = 0;
          do {
            uVar7 = uVar5 & 0xfffffff8 | 7;
            uVar6 = *(ulong *)(*param_2 + uVar7);
            uVar5 = uVar5 + 8;
            *(ulong *)(*plVar3 + uVar7) = uVar6 << (param_3 & 0x3f) | uVar4;
            uVar4 = uVar6 >> ((ulong)(0x40 - (int)param_3) & 0x3f);
          } while (uVar9 * 8 - uVar5 != 0);
        }
        if (param_4 == 1) {
          *(ulong *)(*plVar3 + ((ulong)(uVar8 << 3) | 7)) = uVar4;
        }
      }
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar2 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


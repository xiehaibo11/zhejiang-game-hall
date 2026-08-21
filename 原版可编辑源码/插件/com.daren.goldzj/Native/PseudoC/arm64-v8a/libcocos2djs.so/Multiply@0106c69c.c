
/* v8::internal::BigInt::Multiply(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Multiply(Factory *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  
  plVar3 = param_2;
  if (((*(uint *)(*param_2 + 3) & 0x7ffffffe) != 0) &&
     (plVar3 = param_3, (*(uint *)(*param_3 + 3) & 0x7ffffffe) != 0)) {
    lVar5 = ((ulong)(*(uint *)(*param_3 + 3) >> 1) & 0x3fffffff) +
            ((ulong)(*(uint *)(*param_2 + 3) >> 1) & 0x3fffffff);
    if ((uint)lVar5 < 0x1000001) {
      plVar3 = (long *)Factory::NewBigInt(param_1,lVar5,0);
      *(uint *)(*plVar3 + 3) = (uint)lVar5 << 1;
      if (plVar3 != (long *)0x0) {
        memset((void *)(*plVar3 + 7),0,lVar5 * 8);
        lVar5 = *param_2;
        if ((*(uint *)(lVar5 + 3) & 0x7ffffffe) != 0) {
          uVar7 = 0;
          uVar6 = 0;
          pcVar8 = (char *)0x0;
          do {
            MutableBigInt::MultiplyAccumulate
                      (param_3,*(undefined8 *)(lVar5 + (uVar7 & 0xfffffff8 | 7)),plVar3,
                       uVar6 & 0xffffffff);
            pcVar8 = pcVar8 + ((ulong)(*(uint *)(*param_3 + 3) >> 1) & 0x3fffffff);
            if ("_5ValueEEEEiNS0_18PropertyAttributesE" < pcVar8) {
              uVar4 = GetCurrentStackPosition();
              if (uVar4 < *(ulong *)(param_1 + 0x68)) {
                uVar1 = StackGuard::HandleInterrupts((StackGuard *)(param_1 + 0x48));
                pcVar8 = (char *)0x0;
                if (((uVar1 & 1) != 0) && (uVar1 == *(uint *)(param_1 + 0x180))) {
                  return (long *)0x0;
                }
              }
              else {
                pcVar8 = (char *)0x0;
              }
            }
            lVar5 = *param_2;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 8;
          } while (uVar6 < ((ulong)(*(uint *)(lVar5 + 3) >> 1) & 0x3fffffff));
        }
        *(uint *)(*plVar3 + 3) =
             *(uint *)(*plVar3 + 3) & 0xfffffffe |
             (*(uint *)(lVar5 + 3) ^ *(uint *)(*param_3 + 3)) & 1;
        MutableBigInt::Canonicalize(*plVar3);
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
  }
  return plVar3;
}


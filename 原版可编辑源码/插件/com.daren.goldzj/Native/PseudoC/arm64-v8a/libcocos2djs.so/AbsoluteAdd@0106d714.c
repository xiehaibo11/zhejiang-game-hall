
/* v8::internal::MutableBigInt::AbsoluteAdd(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>, bool) */

long * v8::internal::MutableBigInt::AbsoluteAdd
                 (Factory *param_1,long *param_2,long *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar5 = *param_2;
  do {
    plVar6 = param_3;
    lVar4 = lVar5;
    param_3 = param_2;
    lVar5 = *plVar6;
    param_2 = plVar6;
  } while ((*(uint *)(lVar4 + 3) >> 1 & 0x3fffffff) < (*(uint *)(lVar5 + 3) >> 1 & 0x3fffffff));
  if ((*(uint *)(lVar4 + 3) & 0x7ffffffe) == 0) {
    return param_3;
  }
  uVar2 = *(uint *)(lVar4 + 3);
  if ((*(uint *)(lVar5 + 3) & 0x7ffffffe) == 0) {
    if (((uVar2 ^ param_4) & 1) == 0) {
      return param_3;
    }
    if ((*(uint *)(lVar4 + 3) & 0x7ffffffe) == 0) {
      return param_3;
    }
    plVar7 = (long *)Copy(param_1,param_3);
    *(uint *)(*plVar7 + 3) = (*(uint *)(*plVar7 + 3) & 0xfffffffe | *(uint *)(*param_3 + 3) & 1) ^ 1
    ;
    lVar5 = *plVar7;
LAB_0106d860:
    Canonicalize(lVar5);
  }
  else {
    if ((uVar2 >> 0x19 & 0x3f) == 0) {
      iVar1 = (uVar2 >> 1 & 0x3fffffff) + 1;
      plVar7 = (long *)Factory::NewBigInt(param_1,iVar1,0);
      *(int *)(*plVar7 + 3) = iVar1 * 2;
      if (plVar7 != (long *)0x0) {
        AbsoluteAdd(*plVar7,*param_3,*plVar6);
        *(uint *)(*plVar7 + 3) = *(uint *)(*plVar7 + 3) & 0xfffffffe | param_4 & 1;
        lVar5 = *plVar7;
        goto LAB_0106d860;
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
    plVar7 = (long *)0x0;
  }
  return plVar7;
}


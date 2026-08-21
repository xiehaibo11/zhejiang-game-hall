
/* v8::internal::MutableBigInt::TruncateToNBits(v8::internal::Isolate*, int,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::MutableBigInt::TruncateToNBits(Factory *param_1,uint param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  iVar1 = param_2 + 0x3f;
  iVar2 = param_2 + 0x7e;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 < 0x40000040) {
    iVar2 = iVar2 >> 6;
    plVar5 = (long *)Factory::NewBigInt(param_1,iVar2,0);
    *(int *)(*plVar5 + 3) = iVar2 << 1;
    if (plVar5 != (long *)0x0) {
      uVar4 = iVar2 - 1;
      uVar7 = (ulong)uVar4;
      if (0 < (int)uVar4) {
        lVar9 = 7;
        do {
          uVar7 = uVar7 - 1;
          *(undefined8 *)(lVar9 + *plVar5) = *(undefined8 *)(lVar9 + *param_3);
          lVar9 = lVar9 + 8;
        } while (uVar7 != 0);
      }
      uVar3 = param_2 + 0x3f;
      if (-1 < (int)param_2) {
        uVar3 = param_2;
      }
      uVar8 = (long)(int)(uVar4 * 8) | 7;
      iVar1 = param_2 - (uVar3 & 0xffffffc0);
      uVar7 = 0xffffffffffffffff >> ((ulong)(uint)-iVar1 & 0x3f);
      if (iVar1 == 0) {
        uVar7 = 0xffffffffffffffff;
      }
      *(ulong *)(*plVar5 + uVar8) = *(ulong *)(*param_3 + uVar8) & uVar7;
      *(uint *)(*plVar5 + 3) = *(uint *)(*plVar5 + 3) & 0xfffffffe | *(uint *)(*param_3 + 3) & 1;
      Canonicalize(*plVar5);
      return plVar5;
    }
  }
  else {
    if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar6 = (undefined8 *)Factory::NewRangeError(param_1,0xb8,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}


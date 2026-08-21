
/* v8::internal::MutableBigInt::AbsoluteBitwiseOp(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, v8::internal::Handle<v8::internal::BigIntBase>,
   v8::internal::MutableBigInt, v8::internal::MutableBigInt::ExtraDigitsHandling,
   v8::internal::MutableBigInt::SymmetricOp, std::__ndk1::function<unsigned long (unsigned long,
   unsigned long)> const&) */

ulong * v8::internal::MutableBigInt::AbsoluteBitwiseOp
                  (Isolate *param_1,long *param_2,long *param_3,ulong param_4,int param_5,
                  int param_6,long param_7)

{
  CanonicalHandleScope *this;
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar11 = *(uint *)(*param_2 + 3) >> 1 & 0x3fffffff;
  uVar12 = (ulong)uVar11;
  uVar5 = *(uint *)(*param_3 + 3) >> 1 & 0x3fffffff;
  if (uVar11 < uVar5) {
    if (param_6 != 0) {
      uVar5 = uVar11;
    }
    uVar8 = (ulong)uVar5;
    plVar2 = param_3;
    if (param_6 != 0) {
      plVar2 = param_2;
      param_2 = param_3;
    }
    param_3 = param_2;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    param_2 = plVar2;
    if (this != (CanonicalHandleScope *)0x0) goto LAB_0106fe60;
LAB_0106fe80:
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = param_4;
  }
  else {
    uVar8 = (ulong)uVar11;
    uVar12 = (ulong)uVar5;
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (this == (CanonicalHandleScope *)0x0) goto LAB_0106fe80;
LAB_0106fe60:
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(this,param_4);
  }
  uVar11 = (uint)uVar12;
  uVar5 = (uint)uVar8;
  if (param_5 != 0) {
    uVar5 = uVar11;
  }
  uVar10 = (ulong)uVar5;
  if ((int)param_4 == 0) {
    if (uVar5 < 0x1000001) {
      puVar1 = (ulong *)Factory::NewBigInt((Factory *)param_1,uVar10,0);
      *(uint *)(*puVar1 + 3) = uVar5 << 1;
      if (puVar1 != (ulong *)0x0) goto joined_r0x0106fefc;
    }
    else {
      if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on invalid BigInt length");
      }
      puVar4 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xb8,0,0,0);
      Isolate::Throw(param_1,*puVar4,0);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar10 = (ulong)(*(uint *)(param_4 + 3) >> 1 & 0x3fffffff);
joined_r0x0106fefc:
  if (uVar11 != 0) {
    uVar6 = 0;
    do {
      uVar9 = uVar6 & 0xfffffff8 | 7;
      local_68 = *(undefined8 *)(*param_2 + uVar9);
      local_70 = *(undefined8 *)(*param_3 + uVar9);
      uVar13 = *puVar1;
      plVar2 = *(long **)(param_7 + 0x20);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_68,&local_70);
      uVar6 = uVar6 + 8;
      *(undefined8 *)(uVar13 + uVar9) = uVar3;
    } while (uVar12 * 8 - uVar6 != 0);
  }
  if ((param_5 == 0) && (uVar11 < (uint)uVar8)) {
    uVar6 = uVar12 << 3;
    lVar7 = uVar8 - uVar12;
    do {
      uVar12 = uVar6 & 0xfffffff8 | 7;
      lVar7 = lVar7 + -1;
      uVar6 = uVar6 + 8;
      *(undefined8 *)(*puVar1 + uVar12) = *(undefined8 *)(*param_2 + uVar12);
      uVar12 = uVar8;
    } while (lVar7 != 0);
  }
  if ((uint)uVar12 < (uint)uVar10) {
    uVar5 = (uint)uVar12 << 3 | 7;
    lVar7 = uVar10 - uVar12;
    do {
      lVar7 = lVar7 + -1;
      *(undefined8 *)(*puVar1 + (long)(int)uVar5) = 0;
      uVar5 = uVar5 + 8;
    } while (lVar7 != 0);
  }
  return puVar1;
}



/* v8::internal::MutableBigInt::AbsoluteAddOne(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, bool, v8::internal::MutableBigInt) */

ulong * v8::internal::MutableBigInt::AbsoluteAddOne
                  (Isolate *param_1,long *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  CanonicalHandleScope *this;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  
  uVar10 = (ulong)(*(uint *)(*param_2 + 3) >> 1) & 0x3fffffff;
  iVar9 = (int)uVar10;
  if (iVar9 != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*param_2 + (uVar5 & 0xfffffff8 | 7)) != -1) {
        iVar11 = 0;
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        goto joined_r0x0106c2ec;
      }
      uVar5 = uVar5 + 8;
    } while (uVar10 * 8 - uVar5 != 0);
  }
  iVar11 = 1;
  this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x0106c2ec:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = param_4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,param_4);
  }
  if ((int)param_4 == 0) {
    uVar1 = iVar9 + iVar11;
    if (0x1000000 < uVar1) {
      if (FLAG_correctness_fuzzer_suppressions == '\0') {
        puVar4 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xb8,0,0,0);
        Isolate::Throw(param_1,*puVar4,0);
        return (ulong *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Aborting on invalid BigInt length");
    }
    puVar3 = (ulong *)Factory::NewBigInt((Factory *)param_1,uVar1,0);
    *(uint *)(*puVar3 + 3) = uVar1 * 2;
    if (puVar3 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
  }
  if (iVar9 == 0) {
    uVar5 = 1;
  }
  else {
    uVar6 = 0;
    uVar5 = 1;
    do {
      uVar8 = uVar6 & 0xfffffff8 | 7;
      uVar7 = *(ulong *)(*param_2 + uVar8);
      uVar6 = uVar6 + 8;
      lVar2 = uVar7 + uVar5;
      uVar5 = (ulong)CARRY8(uVar7,uVar5);
      *(long *)(*puVar3 + uVar8) = lVar2;
    } while (uVar10 * 8 - uVar6 != 0);
  }
  if (iVar11 != 0) {
    *(ulong *)(*puVar3 + ((ulong)(uint)(iVar9 << 3) | 7)) = uVar5;
  }
  *(uint *)(*puVar3 + 3) = *(uint *)(*puVar3 + 3) & 0xfffffffe | param_3 & 1;
  return puVar3;
}



/* v8::internal::BigInt::Remainder(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Remainder(Factory *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long local_30;
  long *local_28;
  
  lVar6 = *param_3;
  if ((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 0) {
    puVar3 = (undefined8 *)Factory::NewRangeError(param_1,0xb6,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar3,0);
    return (long *)0x0;
  }
  lVar7 = *param_2;
  uVar1 = *(uint *)(lVar7 + 3) >> 1 & 0x3fffffff;
  uVar2 = *(uint *)(lVar6 + 3) >> 1 & 0x3fffffff;
  if (uVar1 == uVar2) {
    lVar8 = ((ulong)(*(uint *)(lVar7 + 3) >> 1) & 0x3fffffff) + 1;
    iVar9 = (*(uint *)(lVar7 + 3) >> 1) * 8 + -1;
    do {
      lVar8 = lVar8 + -1;
      if (lVar8 < 1) goto LAB_0106d564;
      uVar10 = *(ulong *)(lVar7 + iVar9);
      uVar5 = *(ulong *)(lVar6 + iVar9);
      iVar9 = iVar9 + -8;
    } while (uVar10 == uVar5);
    if (uVar10 <= uVar5) {
      return param_2;
    }
  }
  else if ((int)(uVar1 - uVar2) < 0) {
    return param_2;
  }
LAB_0106d564:
  local_28 = (long *)0x0;
  if ((*(uint *)(*param_3 + 3) & 0x7ffffffe) == 2) {
    lVar6 = *(long *)(*param_3 + 7);
    if ((lVar6 == 1) ||
       (MutableBigInt::AbsoluteDivSmall(param_1,param_2,lVar6,0,&local_30), local_30 == 0)) {
      plVar4 = (long *)Factory::NewBigInt(param_1,0,0);
      *(undefined4 *)(*plVar4 + 3) = 0;
      if (plVar4 == (long *)0x0) {
LAB_0106d658:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      goto LAB_0106d638;
    }
    plVar4 = (long *)Factory::NewBigInt(param_1,1,0);
    *(undefined4 *)(*plVar4 + 3) = 2;
    if (plVar4 == (long *)0x0) goto LAB_0106d658;
    *(long *)(*plVar4 + 7) = local_30;
    local_28 = plVar4;
  }
  else {
    uVar5 = MutableBigInt::AbsoluteDivLarge(param_1,param_2,param_3,0,&local_28);
    if ((uVar5 & 1) == 0) {
      return (long *)0x0;
    }
  }
  *(uint *)(*local_28 + 3) = *(uint *)(*local_28 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1;
  plVar4 = local_28;
LAB_0106d638:
  MutableBigInt::Canonicalize(*plVar4);
  return plVar4;
}


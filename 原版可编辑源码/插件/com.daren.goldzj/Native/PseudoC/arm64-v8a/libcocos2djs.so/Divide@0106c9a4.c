
/* v8::internal::BigInt::Divide(v8::internal::Isolate*, v8::internal::Handle<v8::internal::BigInt>,
   v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Divide(Factory *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined1 auStack_40 [8];
  long *local_38;
  
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
      if (lVar8 < 1) goto LAB_0106ca68;
      uVar10 = *(ulong *)(lVar7 + iVar9);
      uVar4 = *(ulong *)(lVar6 + iVar9);
      iVar9 = iVar9 + -8;
    } while (uVar10 == uVar4);
    if (uVar4 < uVar10) goto LAB_0106ca68;
LAB_0106cb1c:
    plVar5 = (long *)Factory::NewBigInt(param_1,0,0);
    *(undefined4 *)(*plVar5 + 3) = 0;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    if ((int)(uVar1 - uVar2) < 0) goto LAB_0106cb1c;
LAB_0106ca68:
    local_38 = (long *)0x0;
    lVar6 = *param_2;
    lVar7 = *param_3;
    if ((*(uint *)(lVar7 + 3) & 0x7ffffffe) == 2) {
      if (*(long *)(lVar7 + 7) == 1) {
        if (((*(uint *)(lVar6 + 3) ^ *(uint *)(lVar7 + 3)) & 1 ^ *(uint *)(lVar6 + 3) & 1) != 1) {
          return param_2;
        }
        if ((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 0) {
          return param_2;
        }
        plVar5 = (long *)MutableBigInt::Copy(param_1,param_2);
        *(uint *)(*plVar5 + 3) =
             (*(uint *)(*plVar5 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1) ^ 1;
        lVar6 = *plVar5;
        goto LAB_0106cb84;
      }
      MutableBigInt::AbsoluteDivSmall(param_1,param_2,*(long *)(lVar7 + 7),&local_38,auStack_40);
    }
    else {
      uVar4 = MutableBigInt::AbsoluteDivLarge(param_1,param_2,param_3,&local_38,0);
      if ((uVar4 & 1) == 0) {
        return (long *)0x0;
      }
    }
    *(uint *)(*local_38 + 3) =
         *(uint *)(*local_38 + 3) & 0xfffffffe |
         (*(uint *)(*param_2 + 3) ^ *(uint *)(*param_3 + 3)) & 1;
    plVar5 = local_38;
  }
  lVar6 = *plVar5;
LAB_0106cb84:
  MutableBigInt::Canonicalize(lVar6);
  return plVar5;
}



/* v8::internal::BigInt::Add(v8::internal::Isolate*, v8::internal::Handle<v8::internal::BigInt>,
   v8::internal::Handle<v8::internal::BigInt>) */

void v8::internal::BigInt::Add(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 3);
  lVar5 = *param_3;
  if (((uVar1 ^ *(uint *)(lVar5 + 3)) & 1) == 0) {
    MutableBigInt::AbsoluteAdd(param_1,param_2,param_3,uVar1 & 1);
    return;
  }
  uVar2 = *(uint *)(lVar4 + 3) >> 1 & 0x3fffffff;
  uVar3 = *(uint *)(lVar5 + 3) >> 1 & 0x3fffffff;
  if (uVar2 == uVar3) {
    lVar6 = ((ulong)(*(uint *)(lVar4 + 3) >> 1) & 0x3fffffff) + 1;
    iVar7 = (*(uint *)(lVar4 + 3) >> 1) * 8 + -1;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 < 1) goto LAB_0106d6f4;
      uVar9 = *(ulong *)(lVar4 + iVar7);
      uVar8 = *(ulong *)(lVar5 + iVar7);
      iVar7 = iVar7 + -8;
    } while (uVar9 == uVar8);
    if (uVar8 < uVar9) goto LAB_0106d6f4;
  }
  else if (-1 < (int)(uVar2 - uVar3)) {
LAB_0106d6f4:
    MutableBigInt::AbsoluteSub(param_1,param_2,param_3,uVar1 & 1);
    return;
  }
  MutableBigInt::AbsoluteSub(param_1,param_3,param_2,(uVar1 & 1) == 0);
  return;
}

